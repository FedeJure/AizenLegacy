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
        [SerializeField] private float baseRotationVelocity = 100;

        private int velocityKey = Animator.StringToHash("verticalVelocity");
        private int heightFactor = Animator.StringToHash("heightFactor");
        private int startRaising = Animator.StringToHash("startRaising");
        private int inTrampoline = Animator.StringToHash("inTrampoline");

        
        private int cPosition = Animator.StringToHash("cPosition");
        private int vPosition = Animator.StringToHash("vPosition");
        private int aPosition = Animator.StringToHash("aPosition");

        private int twistMultiplier = 1;

        private bool isFalling;

        private Position? selectedPosition;
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
            
            rigidbody.maxAngularVelocity = 20;
        }


        private void ResetState()
        {
            RemovePositions();
            animator.SetBool(inTrampoline, true);
            selectedPosition = null;
            transform.rotation = Quaternion.Euler(0, twistMultiplier < 0 ? 180 : 0, 0);
            pivotModel.transform.rotation = transform.rotation;
            rigidbody.angularVelocity = Vector3.zero;
            rigidbody.ResetInertiaTensor();
            rigidbody.ResetCenterOfMass();
        }

        private void FixedUpdate()
        {
            var velocity = rigidbody.velocity;
            var position = rigidbody.position;
            if (rigidbody.worldCenterOfMass.y >= 7) rigidbody.AddForce(0, -velocity.y, 0, ForceMode.Impulse);
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
            if (rigidbody.velocity.y >= rigidbody.mass / 7) return;
            rigidbody.AddForce(Vector3.up * value);
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
        }

        private void RemovePositions()
        {
            animator.SetBool(cPosition, false);
            animator.SetBool(vPosition, false);
            animator.SetBool(aPosition, false);
        }

        public void MakeFront()
        {
            if (!selectedPosition.HasValue || rigidbody.angularVelocity.x * twistMultiplier < 0) return;

            rigidbody.AddTorque(rigidbody.angularVelocity + (Vector3.right * (baseRotationVelocity * twistMultiplier)),ForceMode.Impulse);
            animator.SetBool(positionKeyMap[selectedPosition.Value], true);
        }

        public void MakeBack()
        {
            if (!selectedPosition.HasValue || rigidbody.angularVelocity.x * twistMultiplier > 0) return;

            rigidbody.AddTorque(rigidbody.angularVelocity + Vector3.left * (baseRotationVelocity * twistMultiplier),ForceMode.Impulse);
            animator.SetBool(positionKeyMap[selectedPosition.Value], true);
        }

        public void MakeHalfTwist()
        {
            LeanTween.rotateAroundLocal(pivotModel, Vector3.up, 180, 0.5f);
            twistMultiplier *= -1;
            RemovePositions();
        }
    }
}