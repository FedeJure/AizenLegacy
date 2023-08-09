using System;
using UniRx;
using UnityEngine;

namespace Character
{
    public class CharacterCameraFollowView : MonoBehaviour
    {
        public Transform Target;
        public Transform RagdollTarget;
        public Transform camTransform;
        public Vector3 Offset;
        public float SmoothTime = 0.3f;
 
        private Vector3 velocity = Vector3.zero;
        private Transform currentTarget;

        private void Awake()
        {
            currentTarget = Target;
            EventBus.OnSerieFails()
                .Do(_ => { currentTarget = RagdollTarget; })
                .Subscribe();
        }

        private void OnEnable()
        {
            currentTarget = Target;
        }

        private void Start()
        {
            Offset += camTransform.position - Target.position;
        }
 
        private void LateUpdate()
        {
            Vector3 targetPosition = currentTarget.position + Offset;
            camTransform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, SmoothTime);
 
            transform.LookAt(currentTarget);
        }
    }
}