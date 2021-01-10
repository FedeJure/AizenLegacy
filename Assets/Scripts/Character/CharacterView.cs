using System;
using System.Collections.Generic;
using System.Linq;
using UniRx;
using UnityEngine;

namespace Character
{
    public class CharacterView : MonoBehaviour
    {
        [SerializeField] private Rigidbody rbody;
        [SerializeField] private CapsuleCollider coll;
        [SerializeField] private Animator animator;
        [SerializeField] private GameObject pivotModel;
        [SerializeField] private Transform trampolineLimit;
        [SerializeField] private float maxInclinationAlowed = 20;
        [SerializeField] private Transform startLocation;


        private int velocityKey = Animator.StringToHash("verticalVelocity");
        private int heightFactor = Animator.StringToHash("heightFactor");
        private int startRaising = Animator.StringToHash("startRaising");
        private int inTrampoline = Animator.StringToHash("inTrampoline");

        
        private int cPosition = Animator.StringToHash("cPosition");
        private int vPosition = Animator.StringToHash("vPosition");
        private int aPosition = Animator.StringToHash("aPosition");
        
        private bool isFalling;
        private bool isStable = true;

        private bool onFront
        {
            get { return pivotModel.transform.right.x > 0; }
        }

        private Position? selectedPosition;
        private Dictionary<Position, int> positionKeyMap;
        
        List<CharacterAction> actions = new List<CharacterAction>();
        private void Awake()
        {
            EventBus.OnEnterTrampoline()
                .Do(_ => ResetState())
                .Subscribe();
            
            EventBus.OnExitTrampoline()
                .Do(_ => animator.SetBool(inTrampoline, false))
                .Subscribe();

            positionKeyMap = new Dictionary<Position, int>
            {
                {Position.APosition, aPosition},
                {Position.BPosition, vPosition},
                {Position.CPosition, cPosition}
            };
            
            rbody.maxAngularVelocity = 25;
        }

        private void OnEnable()
        {
            transform.SetPositionAndRotation(startLocation.position, Quaternion.identity);
            isStable = true;
            SetEnable(true);
            ResetState();
            pivotModel.transform.rotation = Quaternion.identity;
            
        }


        private void ResetState()
        {
            if (Quaternion.Angle(Quaternion.identity,transform.localRotation) > maxInclinationAlowed)
            {
                isStable = false;
                SetEnable(false);
                EventBus.EmitOnLoseStability();
            }
            RemovePositions();
            animator.SetBool(inTrampoline, true);
            selectedPosition = null;
            pivotModel.transform.rotation = Quaternion.Euler(0, onFront ? 0 : 180, 0);
            transform.rotation = Quaternion.Euler(Vector3.zero);
            rbody.ResetInertiaTensor();
            rbody.ResetCenterOfMass();
            actions.Clear();
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
            ApplyActions();
            var velocity = rbody.velocity;
            var position = rbody.position;
            if (rbody.worldCenterOfMass.y >= 7) rbody.AddForce(0, -velocity.y, 0, ForceMode.Impulse);
            animator.SetFloat(velocityKey, velocity.y);
            if (isFalling && velocity.y > 0)
            {
                isFalling = false;
                animator.SetTrigger(startRaising);
            }

            if (isFalling || !(velocity.y < 0)) return;
            isFalling = true;
            animator.SetFloat(heightFactor, CalculateHeightFactor(position, velocity));
        }

        private void ApplyActions()
        {
            if (selectedPosition == null) return;
            
            var rotation = actions.Aggregate(Vector3.zero, (current, characterAction) => characterAction.Execute(current));
            var localRotation = transform.InverseTransformVector(rotation);
            pivotModel.transform.Rotate(0, Math.Abs(localRotation.y), 0 , Space.Self);
            
            transform.Rotate(Math.Abs(rotation.x) * transform.right.x, 0,0 , Space.Self);
        }

        private float CalculateHeightFactor(Vector3 position, Vector3 velocity)
        {
            var factor = (-0 + (float)Math.Sqrt(0 + 2 * 9.8f * (position.y - trampolineLimit.position.y)))/ 9.8f;
            var fallDuration = 2.2f;
            return factor * fallDuration;
        }

        public void AddVerticalImpulse(float value)
        {
            if (rbody.velocity.y >= rbody.mass / 7) return;
            if (!isStable)
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

        private void MakePosition(Position position, bool pressed)
        {
            if (!selectedPosition.HasValue && pressed) selectedPosition = position;
            if (selectedPosition.HasValue && selectedPosition.Value.Equals(position) && !pressed)
            {
                StabilizateInFly();
                selectedPosition = null;
            }
                
            EventBus.EmitOnPositionStarted();
            RemovePositions();
        }

        private void StabilizateInFly()
        {
            actions.Clear();
            if (isFalling && Math.Abs(transform.rotation.x) < maxInclinationAlowed)
            {
                LeanTween.rotateX(gameObject, 0, 0.5f);
            }
        }

        private void RemovePositions()
        {
            animator.SetBool(cPosition, false);
            animator.SetBool(vPosition, false);
            animator.SetBool(aPosition, false);
        }

        public void MakeFront()
        {
            if (!selectedPosition.HasValue) return;
            actions.Add( new FrontAction(transform));
            animator.SetBool(positionKeyMap[selectedPosition.Value], true);
        }

        public void MakeBack()
        {
            if (!selectedPosition.HasValue) return;
            actions.Add(new BackAction(transform));
            animator.SetBool(positionKeyMap[selectedPosition.Value], true);
        }

        public void MakeHalfTwist()
        {
            actions.Add(new HalfTwistAction(pivotModel.transform));
            EventBus.EmitOnSideChange();
            RemovePositions();
        }
    }
}