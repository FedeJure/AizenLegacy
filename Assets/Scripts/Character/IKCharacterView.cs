using System;
using UnityEngine;

namespace Character
{
    public class IKCharacterView : MonoBehaviour
    {
        [SerializeField] private Transform trampoline;
        [SerializeField] private Animator animator;

        [SerializeField] private CharacterView character;
        [SerializeField] private bool isIKActive;
        [SerializeField] private float distance;

        //Feets
        [SerializeField] private Transform feetsTransform;
        [SerializeField] private Transform feetTarget;
        [SerializeField] private Transform leftFeet;
        [SerializeField] private Transform rightFeet;
        [SerializeField] private float feetIKWeight;
        [SerializeField] private float feetRotationIKWeight;

        //Chest
        [SerializeField] private Transform chestTarget;
        [SerializeField] private float chestIKWeight;
        
        
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
            ProcessChestAnimations();
        }

        private void ProcessChestAnimations()
        {
            
        }

        private void ProcessFeetAnimations(Vector3 trampPosition, float distanceFromTrampoline)
        {
            var leftFeetPosition = leftFeet.position;
            var rightFeetPosition = rightFeet.position;
            var distanceFeetTrampoline = feetsTransform.position.y - trampPosition.y;

            isIKActive = true;
            var feetSeparation = getFeetSeparation(distanceFeetTrampoline);
            leftFeet.position = new Vector3(- feetSeparation, trampPosition.y, leftFeetPosition.z);
            rightFeet.position = new Vector3(feetSeparation, trampPosition.y, rightFeetPosition.z);

            var newRotation = GetFeetRotation(distanceFromTrampoline);
            leftFeet.rotation = Quaternion.Euler(newRotation, 0, 0);
            rightFeet.rotation = Quaternion.Euler(newRotation, 0, 0);
        }

        private float getFeetSeparation(float distanceFromTrampoline)
        {
            var min = 0.05f;
            var maxFlying = 0.1f;
            var maxOnLona = 0.1f;
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
            if (!isIKActive) return;
            OnFeetAnimatorIK();
            OnChestAnimatorIK();
        }

        private void OnChestAnimatorIK()
        {
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