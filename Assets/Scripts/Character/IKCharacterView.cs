using System;
using UniRx;
using UnityEngine;

namespace Character
{
    public class IKCharacterView : MonoBehaviour
    {
        [SerializeField] private Transform trampoline;
        [SerializeField] private Animator animator;

        [SerializeField] private bool isIKActive;
        [SerializeField] private float distance;

        //Feets
        [SerializeField] private Transform feetsTransform;
        [SerializeField] private Transform feetTarget;
        [SerializeField] private Transform leftFeet;
        [SerializeField] private Transform rightFeet;

        [SerializeField] private Transform loneLeftFeet;
        [SerializeField] private Transform loneRightFeet;
        
        [SerializeField] private float feetIKWeight;
        [SerializeField] private float feetRotationIKWeight;


        private bool disabled = false;

        private void Awake()
        {
            EventBus.OnPositionStarted()
                .Do(_ => disabled = true)
                .Subscribe();
            
            EventBus.OnEnterTrampoline()
                .Do(_ => disabled = false)
                .Subscribe();
        }

        private void ResetPosition()
        {
            animator.SetIKPositionWeight(AvatarIKGoal.RightFoot, 0);
            animator.SetIKRotationWeight(AvatarIKGoal.RightFoot, 0);
            animator.SetIKPositionWeight(AvatarIKGoal.LeftFoot, 0);
            animator.SetIKRotationWeight(AvatarIKGoal.LeftFoot, 0);
        }

        private void FixedUpdate()
        {
            var trampPosition = trampoline.position;
            var distanceFromTrampoline = Vector3.Distance(new Vector3(0, trampPosition.y, 0), new Vector3(0, feetTarget.position.y, 0));
            if (distanceFromTrampoline > distance)
            {
                isIKActive = false;
                return;
            }
            
            ProcessFeetAnimations(trampPosition, distanceFromTrampoline);
        }

        private void ProcessFeetAnimations(Vector3 trampPosition, float distanceFromTrampoline)
        {
            var feetsPosition = feetsTransform.position;
            var distanceFeetTrampoline = feetsPosition.y - trampPosition.y;

            isIKActive = true;
            var feetSeparation = getFeetSeparation(distanceFeetTrampoline);
            var loneDistance = Math.Abs(loneLeftFeet.position.y - trampPosition.y) / 3;
            leftFeet.position = new Vector3(-feetSeparation, loneDistance, feetsPosition.z);
            rightFeet.position = new Vector3(feetSeparation, loneDistance, feetsPosition.z);
            
            var newRotation = GetFeetRotation(distanceFromTrampoline);
            leftFeet.rotation = Quaternion.Euler(newRotation, leftFeet.rotation.y, 0);
            rightFeet.rotation = Quaternion.Euler(newRotation, rightFeet.rotation.y, 0);
        }

        private float getFeetSeparation(float distanceFromTrampoline)
        {
            var min = 0.1f;
            var maxFlying = 0.2f;
            var maxOnLona = 0.15f;
            var transformedDistance = distanceFromTrampoline;
            if (transformedDistance < 0) return Math.Min(Math.Abs(transformedDistance) + min, maxOnLona);
            return Math.Min(transformedDistance + min, maxFlying);
        }

        private float GetFeetRotation(float distanceFromTrampoline)
        {
            var min = 0;
            var max = 60;
            var transformedDistance = distanceFromTrampoline * 20;
            if (transformedDistance < 0) return min;
            return Math.Min(transformedDistance, max);
        }

        private void OnAnimatorIK(int layerIndex)
        {
            if (!isIKActive || disabled)
            {
                ResetPosition();
                return;
            }
            OnFeetAnimatorIK();
        }

        private void OnFeetAnimatorIK()
        {
            animator.SetIKPositionWeight(AvatarIKGoal.RightFoot, feetIKWeight);
            animator.SetIKPosition(AvatarIKGoal.RightFoot, rightFeet.position);
            animator.SetIKRotationWeight(AvatarIKGoal.RightFoot, feetRotationIKWeight);
            animator.SetIKRotation(AvatarIKGoal.RightFoot, rightFeet.rotation);
            animator.SetIKPositionWeight(AvatarIKGoal.LeftFoot, feetIKWeight);
            animator.SetIKPosition(AvatarIKGoal.LeftFoot, leftFeet.position);
            animator.SetIKRotation(AvatarIKGoal.LeftFoot, leftFeet.rotation);
            animator.SetIKRotationWeight(AvatarIKGoal.LeftFoot, feetRotationIKWeight);
        }
    }
}