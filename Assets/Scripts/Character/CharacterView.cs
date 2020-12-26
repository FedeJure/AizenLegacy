using System;
using UniRx;
using UnityEngine;

namespace Character
{
    public class CharacterView : MonoBehaviour
    {
        [SerializeField] private Rigidbody rigidbody;
        [SerializeField] private Animator animator;
        [SerializeField] private Transform trampolineLimit;
        [SerializeField] private IKCharacterView ikView;

        private int velocityKey = Animator.StringToHash("verticalVelocity");
        private int heightFactor = Animator.StringToHash("heightFactor");
        private int startRaising = Animator.StringToHash("startRaising");

        
        private int cPosition = Animator.StringToHash("cPosition");
        private int vPosition = Animator.StringToHash("vPosition");
        private int aPosition = Animator.StringToHash("aPosition");
        private int inPosition = Animator.StringToHash("inPosition");

        private IObservable<Unit> actionChain;

        private bool isFalling;

        private void Awake()
        {
            EventBus.OnEnterTrampoline()
                .Do(_ => RemovePositions())
                .Subscribe();
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
            var vel = velocity.y;
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
            EventBus.EmitOnPositionStarted();
            CreateChainIfNeeded();
            RemovePositions();
            animator.SetLayerWeight(0, 1);
            animator.SetBool(cPosition, true);
        }
        
        public void MakeVPosition()
        {
            EventBus.EmitOnPositionStarted();
            CreateChainIfNeeded();
            RemovePositions();
            animator.SetLayerWeight(0, 1);
            animator.SetBool(vPosition, true);

        }
        
        public void MakeAPosition()
        {
            EventBus.EmitOnPositionStarted();
            CreateChainIfNeeded();
            RemovePositions();
            animator.SetBool(aPosition, true);

        }
        
        private void RemovePositions()
        {
            animator.SetBool(cPosition, false);
            animator.SetBool(vPosition, false);
            animator.SetBool(aPosition, false);
        }

        private void CreateChainIfNeeded()
        {
            if (actionChain == null) actionChain = Observable.ReturnUnit();
        }
    }
}