using System;
using System.Collections.Generic;
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
        private int inTrampoline = Animator.StringToHash("inTrampoline");

        
        private int cPosition = Animator.StringToHash("cPosition");
        private int vPosition = Animator.StringToHash("vPosition");
        private int aPosition = Animator.StringToHash("aPosition");

        private LTDescr actionChain;
        private Queue<CharacterAction> stashedActions = new Queue<CharacterAction>();
        private int twistMultiplier = 1;
        private int actionsStashed = 0;

        private bool isFalling;

        private Position? selectedPosition = null;
        private Dictionary<Position, int> positionKeyMap;
        
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
        }

        private void Update()
        {
            if (actionChain != null && !LeanTween.isTweening(pivotModel) && !LeanTween.isTweening(gameObject)) RemovePositions();
        }


        private void ResetState()
        {
            RemovePositions();
            animator.SetBool(inTrampoline, true);
            actionChain = null;
            actionsStashed = 0;
            stashedActions = new Queue<CharacterAction>();
            selectedPosition = null;
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
            selectedPosition = Position.CPosition;
            EventBus.EmitOnPositionStarted();
            RemovePositions();
            animator.SetBool(cPosition, true);
        }
        
        public void MakeBPosition()
        {
            if (actionChain != null) return;
            selectedPosition = Position.BPosition;
            EventBus.EmitOnPositionStarted();
            RemovePositions();
            animator.SetBool(vPosition, true);

        }
        
        public void MakeAPosition()
        {
            if (actionChain != null) return;
            selectedPosition = Position.APosition;
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
            if (! selectedPosition.HasValue) return;
            stashedActions.Enqueue(new FrontAction(gameObject, Vector3.right * twistMultiplier,
                () =>
                {
                    if (selectedPosition.HasValue) animator.SetBool(positionKeyMap[selectedPosition.Value], true);
                }));
            if (actionChain != null) return;
            StartActions();
        }

        public void MakeHalfTwist()
        {
            new HalfTwistAction(pivotModel,
                () =>
                {
                    twistMultiplier *= -1;
                    RemovePositions();
                }).Execute(stashedActions.Count > 0 ? stashedActions.Peek() : null);
            if (actionChain != null) return;
            StartActions();
        }

        public void MakeBack()
        {
            if (! selectedPosition.HasValue) return;
            stashedActions.Enqueue(new BackAction(gameObject, Vector3.right * twistMultiplier,
                () =>
                {
                    if (selectedPosition.HasValue) animator.SetBool(positionKeyMap[selectedPosition.Value], true);
                }));
            if (actionChain != null) return;
            StartActions();
        }

        private void StartActions()
        {
            if (stashedActions.Count == 0) return;
            actionChain = stashedActions.Dequeue().Execute(stashedActions.Count > 0 ? stashedActions.Peek() : null)
                .setOnComplete(StartActions);
        }
    }
}