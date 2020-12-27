using System;
using UniRx;
using UnityEngine;


namespace Character
{
    public class CharacterView : MonoBehaviour
    {
        [SerializeField] private Rigidbody rigidbody;
        [SerializeField] private Animator animator;
        [SerializeField] private GameObject pivotModel;
        [SerializeField] private Transform trampolineLimit;
        [SerializeField] private IKCharacterView ikView;

        private int velocityKey = Animator.StringToHash("verticalVelocity");
        private int heightFactor = Animator.StringToHash("heightFactor");
        private int startRaising = Animator.StringToHash("startRaising");

        
        private int cPosition = Animator.StringToHash("cPosition");
        private int vPosition = Animator.StringToHash("vPosition");
        private int aPosition = Animator.StringToHash("aPosition");

        private LTDescr actionChain;
        private int twistMultiplier = 1;
        private int actionsStashed = 0;

        private bool isFalling;

        private void Awake()
        {
            EventBus.OnEnterTrampoline()
                .Do(_ => ResetState())
                .Subscribe();

            EventBus.OnExitTrampoline()
                .Do(_ => InitState())
                .Subscribe();
        }

        private void Update()
        {
            if (actionChain != null && !LeanTween.isTweening(pivotModel)) RemovePositions();
    }

        private void InitState()
        {
        }

        private void ResetState()
        {
            RemovePositions();
            actionChain = null;
            actionsStashed = 0;
        }

        private void FixedUpdate()
        {
            var velocity = rigidbody.velocity;
            var position = rigidbody.position;
            animator.SetFloat(velocityKey, velocity.y);
            if (isFalling && velocity.y > 0)
            {
                isFalling = false;
                animator.SetTrigger(startRaising);
            }
            if (!isFalling && velocity.y < 0)
            {
                isFalling = true;
                animator.SetFloat(heightFactor, CalculateHeightFactor(position, velocity));
            }
        }

        private float CalculateHeightFactor(Vector3 position, Vector3 velocity)
        {
            var factor = (-0 + (float)Math.Sqrt(0 + 2 * 9.8f * (position.y - trampolineLimit.position.y)))/ 9.8f;
            var fallDuration = 2.2f;
            return factor * fallDuration;
        }

        public void AddVerticalImpulse(float value)
        {
            rigidbody.AddForce(Vector3.up * value);
        }

        public void MakeCPosition()
        {
            if (actionChain != null) return;
            EventBus.EmitOnPositionStarted();
            RemovePositions();
            animator.SetBool(cPosition, true);
        }
        
        public void MakeVPosition()
        {
            if (actionChain != null) return;
            EventBus.EmitOnPositionStarted();
            RemovePositions();
            animator.SetBool(vPosition, true);

        }
        
        public void MakeAPosition()
        {
            if (actionChain != null) return;
            EventBus.EmitOnPositionStarted();
            RemovePositions();
            animator.SetBool(aPosition, true);

        }
        
        private void RemovePositions()
        {
            animator.SetBool(cPosition, false);
            animator.SetBool(vPosition, false);
            animator.SetBool(aPosition, false);
        }

        public void MakeFront()
        {
            AddAction(() => LeanTween.rotateAround(pivotModel, Vector3.right * twistMultiplier, 360, 0.5f));
        }

        public void MakeHalfTwist()
        {
            AddAction(() =>
            {
                RemovePositions();
                return LeanTween.rotateAroundLocal(pivotModel, Vector3.up, 180, 0.5f)
                    .setOnComplete(() => twistMultiplier *= -1);
            });

        }

        public void MakeBack()
        {
            AddAction(() => LeanTween.rotateAround(pivotModel, Vector3.right * twistMultiplier, -360, 0.5f));
        }

        private void AddAction(Func<LTDescr> action)
        {
            if (actionChain == null)
            {
                actionChain = action();
                return;
            }
            Debug.LogWarning(actionChain.hasExtraOnCompletes);

            actionChain.setOnComplete(() => action());
        }
    }
}