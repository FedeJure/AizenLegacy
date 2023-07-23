using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

namespace Character
{
    public class IKCharacterView : MonoBehaviour
    {
        [SerializeField] private Animator animator;

        [SerializeField] private bool isIKActive;
        [SerializeField] private float distance;

        //Feets
        [SerializeField] private Transform feetsTransform;
        [SerializeField] private Transform feetTarget;
        [SerializeField] private Transform leftFeet;
        [SerializeField] private Transform rightFeet;

        
        [SerializeField] private float feetIKWeight;
        [SerializeField] private float feetRotationIKWeight;

        private bool isStable = true;

        private bool disabled = false;
        
        const float minSeparation = 0.1f;
        const float maxSeparationFlying = 0.2f;
        const float maxSeparationOnLona = 0.15f;
        private List<IDisposable> disposer = new List<IDisposable>();

        private void OnEnable()
        {
            EventBus.OnPositionStarted()
                .Do(_ => disabled = true)
                .Subscribe()
                .AddTo(disposer);
            
            EventBus.OnEnterTrampoline()
                .Do(_ => disabled = false)
                .Subscribe()
                .AddTo(disposer);

            EventBus.OnGameEnds()
                .Do(_ =>
                {
                    isStable = false;
                    feetTarget.gameObject.SetActive(false);
                })
                .Subscribe()
                .AddTo(disposer);
            
            ResetPosition();
            isIKActive = true;
            disabled = false;
            isStable = true;
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
            if (!isStable) return;

            var trampPosition = GameplayContext.GetInstance().trampolineTransform.position;
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
            var characterPosition = transform.position;
            var distanceFeetTrampoline = feetsPosition.y - trampPosition.y;

            isIKActive = true;
            var feetSeparation = getFeetSeparation(distanceFeetTrampoline);
            var loneDistance = Math.Abs(GameplayContext.GetInstance().centerLonePositionTransform.position.y - trampPosition.y) / 3;
            leftFeet.position = new Vector3(-feetSeparation, loneDistance, characterPosition.z);
            rightFeet.position = new Vector3(feetSeparation, loneDistance, characterPosition.z);
            
            var newRotation = GetFeetRotation(distanceFromTrampoline);
            leftFeet.rotation = Quaternion.Euler(newRotation, leftFeet.rotation.y, 0);
            rightFeet.rotation = Quaternion.Euler(newRotation, rightFeet.rotation.y, 0);
        }

        private float getFeetSeparation(float distanceFromTrampoline)
        {
            var transformedDistance = distanceFromTrampoline;
            return transformedDistance < 0 ? Math.Min(Math.Abs(transformedDistance) + minSeparation, maxSeparationOnLona) : Math.Min(transformedDistance + minSeparation, maxSeparationFlying);
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
            if (!isStable) return;
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

        private void OnDisable()
        {
            disposer.ForEach(d => d.Dispose());
        }
    }
}