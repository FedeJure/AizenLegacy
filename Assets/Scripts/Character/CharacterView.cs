using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Character
{

    [Serializable]
    class TrampolineSounds
    {
        private bool firstUsed;

        public void Reset()
        {
            firstUsed = false;
        }
        public AudioClip GetNextSound()
        {
            if (!firstUsed)
            {
                firstUsed = true;
                return initialJump;
            }

            return clips[Random.Range(0, clips.Length)];
        }
        [SerializeField] private AudioClip initialJump;
        [SerializeField] private AudioClip[] clips;
    }
    public class CharacterView : MonoBehaviour
    {
        [SerializeField] private IKCharacterView ikView;
        [SerializeField] private CharacterInput input;
        [SerializeField] private Rigidbody rbody;
        [SerializeField] private Animator animator;
        [SerializeField] private GameObject pivotModel;
        [SerializeField] private float maxInclinationAlowed = 25;
        [SerializeField] private TrampolineSounds trampolineSounds;
        [SerializeField] private AudioSource source;
        [SerializeField] private Transform leftFeetBone;
        [SerializeField] private JumpTracker jumpTracker;
        
        private int velocityKey = Animator.StringToHash("verticalVelocity");
        private int heightFactor = Animator.StringToHash("heightFactor");
        private int startRaising = Animator.StringToHash("startRaising");
        private int inTrampoline = Animator.StringToHash("inTrampoline");
        
        private int cPosition = Animator.StringToHash("cPosition");
        private int vPosition = Animator.StringToHash("vPosition");
        private int aPosition = Animator.StringToHash("aPosition");

        private List<IDisposable> disposer = new List<IDisposable>();
        private bool? rotatingForward = null;

        private CharacterState state;

        private Dictionary<Position, int> positionKeyMap;
        
        List<CharacterAction> actions = new List<CharacterAction>();
        private void Awake()
        {
            positionKeyMap = new Dictionary<Position, int>
            {
                {Position.APosition, aPosition},
                {Position.BPosition, vPosition},
                {Position.CPosition, cPosition}
            };
            state = new CharacterState(pivotModel.transform);
            jumpTracker.SetupState(state);
            rbody.maxAngularVelocity = 25;

        }

        private void Start()
        {
            SubscribeToInput();
            var currentSelection = SelectedCharacterRepository.Get();
            if (currentSelection != null)
            {
                transform.localScale = new Vector3(currentSelection.scale, currentSelection.scale, currentSelection.scale);
            }
        }

        private void SubscribeToInput()
        {
            input.a.Subscribe(MakeAPosition).AddTo(disposer);
            input.b.Subscribe(MakeBPosition).AddTo(disposer);
            input.c.Subscribe(MakeCPosition).AddTo(disposer);
            input.forward.Subscribe(MakeFront).AddTo(disposer);
            input.back.Subscribe(MakeBack).AddTo(disposer);
            input.twist.Subscribe(MakeHalfTwist).AddTo(disposer);
        }

        private void OnEnable()
        {
            EventBus.OnEnterTrampoline()
                .Do(HandleEnterTrampoline)
                .Subscribe().AddTo(disposer);
            
            EventBus.OnExitTrampoline()
                .Do(HandleExitTrampoline)
                .Subscribe().AddTo(disposer);
            
            EventBus.OnSerieFails()
                .Do(_ =>
                {
                    animator.StopPlayback();
                    Disable();

                })
                .Subscribe()
                .AddTo(disposer);

            Observable.Interval(TimeSpan.FromMilliseconds(100))
                .Subscribe(_ =>
                {
                    if (state.currentPosition != null && state.isStable) EventBus.EmitConsumeEnergy(1f);
                })
                .AddTo(disposer);
            
            transform.SetPositionAndRotation(GameplayContext.GetInstance().startLocationTransform.position, Quaternion.identity);
            state.isStable = true;
            SetEnable(true);
            ResetState();
            pivotModel.transform.rotation = Quaternion.identity;
            trampolineSounds.Reset();
        }

        private void HandleExitTrampoline(Unit _)
        {
            animator.SetBool(inTrampoline, false);
        }

        private void HandleEnterTrampoline(Unit _)
        {
            ResetState();
            source.PlayOneShot(trampolineSounds.GetNextSound());
        }

        private void ResetState()
        {
            if (Quaternion.Angle(Quaternion.identity,transform.localRotation) > maxInclinationAlowed)
            {
                state.isStable = false;
                SetEnable(false);
                EventBus.EmitOnSerieFails();
            }
            RemovePositions();
            animator.SetBool(inTrampoline, true);
            pivotModel.transform.rotation = Quaternion.Euler(0, state.onFront ? 0 : 180, 0);
            transform.rotation = Quaternion.Euler(Vector3.zero);
            rbody.ResetInertiaTensor();
            rbody.ResetCenterOfMass();
            actions.Clear();
            rotatingForward = null;
            jumpTracker.Reset();
        }

        private void SetEnable(bool value)
        {
            rbody.isKinematic = !value;
            rbody.detectCollisions = value;
            rbody.freezeRotation = value;
            animator.enabled = value;
        }

        private void FixedUpdate()
        {
            state.ResetRotationSpeed();
            ApplyActions();
            var velocity = rbody.velocity;
            var position = rbody.position;
            //Altura
            if (rbody.worldCenterOfMass.y >= SelectedCharacterRepository.Get()?.characterStats.height) 
                rbody.AddForce(0, -velocity.y, 0, ForceMode.Impulse);
            animator.SetFloat(velocityKey, velocity.y);
            if (state.isFalling && velocity.y > 0)
            {
                state.isFalling = false;
                animator.SetTrigger(startRaising);
            }

            if (state.isFalling || !(velocity.y < 0)) return;
            state.isFalling = true;
            animator.SetFloat(heightFactor, CalculateHeightFactor(position, velocity));
        }

        private void ApplyActions()
        {
            actions.ForEach(action => action.Execute());
        }

        private float CalculateHeightFactor(Vector3 position, Vector3 velocity)
        {
            var factor = (-0 + (float)Math.Sqrt(0 + 2 * 9.8f * (position.y - GameplayContext.GetInstance().trampolineLimitTransform.position.y)))/ 9.8f;
            var fallDuration = 2.2f;
            return factor * fallDuration;
        }

        public void AddVerticalImpulse(float value)
        {
            if (rbody.velocity.y >= rbody.mass / 7) return;
            if (!state.isStable)
            {
                var localUp = pivotModel.transform.up;
                var direction = new Vector3(localUp.x, Math.Max(25, localUp.y), localUp.z);
                rbody.AddForce(direction * (rbody.velocity.magnitude * 2));
            }
            rbody.AddForce(Vector3.up * value , ForceMode.Force);
        }

        public void MakeCPosition(bool pressed)
        {
            MakePosition(Position.CPosition, pressed);
        }
        
        public void MakeBPosition(bool pressed)
        {
            MakePosition(Position.BPosition, pressed);
        }
        
        public void MakeAPosition(bool pressed)
        {
            MakePosition(Position.APosition, pressed);
        }

        private void StabilizateInFly()
        {
            var angleToGround = Vector3.SignedAngle(transform.up, Vector3.up, transform.right);
            if (angleToGround == 0) return;
            var value = 0f;
            if (rotatingForward.HasValue && rotatingForward.Value) value = angleToGround > 0 ? angleToGround : 360 + angleToGround;
            else value =  angleToGround <= 0 ? angleToGround : -(360 - angleToGround);
            
            var time = (float)Math.Sqrt((transform.position.y - GameplayContext.GetInstance().trampolineLimitTransform.position.y) * 2f / 9.8f);

            actions.Add(new StabilizateAction(transform, state,value, time));
        }
        
        private void MakePosition(Position position, bool pressed)
        {
            if (!state.currentPosition.HasValue && pressed && !state.isFalling)
            {
                state.currentPosition = position;
                state.lastPosition = position;
            }
            if (state.currentPosition.HasValue && state.currentPosition.Value.Equals(position) && !pressed)
            {
                StabilizateInFly();
                state.currentPosition = null;
            }
                
            EventBus.EmitOnPositionStarted();
            RemovePositions();
        }

        private void RemovePositions()
        {
            animator.SetBool(cPosition, false);
            animator.SetBool(vPosition, false);
            animator.SetBool(aPosition, false);
        }

        public void MakeFront(bool value)
        {
            if (!value || !state.currentPosition.HasValue || (rotatingForward.HasValue && !rotatingForward.Value)) return;
            actions.Add( new FrontAction(transform, state));
            animator.SetBool(positionKeyMap[state.currentPosition.Value], true);
            rotatingForward = true;
            EventBus.EmitConsumeEnergy(10);
        }

        public void MakeBack(bool value)
        {
            if (!value || !state.currentPosition.HasValue || (rotatingForward.HasValue && rotatingForward.Value)) return;
            actions.Add(new BackAction(transform, state));
            animator.SetBool(positionKeyMap[state.currentPosition.Value], true);
            rotatingForward = false;
            EventBus.EmitConsumeEnergy(10);
        }

        public void MakeHalfTwist(bool value)
        {
            if (!value) return;
            actions.Add(new HalfTwistAction(pivotModel.transform, state, jumpTracker));
            EventBus.EmitOnSideChange();
            RemovePositions();
            EventBus.EmitConsumeEnergy(5);
        }

        private void OnDisable()
        {
            disposer.ForEach(d => d.Dispose());
        }

        private void Disable()
        {
            ikView.enabled = false;
            input.enabled = false;
            animator.enabled = false;
            //enabled = false;
        }
    }
}