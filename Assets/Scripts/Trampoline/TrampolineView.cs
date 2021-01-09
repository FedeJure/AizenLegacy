using System;
using Character;
using UniRx;
using UnityEngine;
using UnityEngine.PlayerLoop;

namespace Trampoline
{
    public class TrampolineView : MonoBehaviour
    {
        [SerializeField] private float force = 10000;
        [SerializeField] private CharacterView characterView;
        [SerializeField] private GameObject characterModel;
        [SerializeField] private GameObject leftBone;
        [SerializeField] private GameObject rigthBone;
        [SerializeField] private GameObject feet;

        private Vector3 leftPosition;
        private Vector3 rigthPosition;

        private bool isStable = true;

        private void Awake()
        {
            leftPosition = leftBone.transform.position;
            rigthPosition = rigthBone.transform.position;

            EventBus.OnLoseStability()
                .Do(_ =>
                {
                    isStable = false;
                })
                .Subscribe();
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.GetHashCode() != characterModel.GetHashCode()) return;
            EventBus.EmitOnEnterTrampoline();
        }
        private void OnTriggerExit(Collider other)
        {
            if (other.gameObject.GetHashCode() != characterModel.GetHashCode()) return;
            EventBus.EmitOnExitTrampoline();
            rigthBone.transform.position = rigthPosition;
            leftBone.transform.position = leftPosition;
        }

        private void OnTriggerStay(Collider characterCollider)
        {
            FollowFeets();
            if (characterCollider.gameObject.GetHashCode() != characterModel.GetHashCode()) return;
            var magnitude = transform.position.y - feet.transform.position.y;
            var value = Math.Min(force ,magnitude * force);
            characterView.AddVerticalImpulse(value); 
        }

        private void FollowFeets()
        {
            var actualPosition = leftBone.transform.position;
            var newY = feet.transform.position.y;
            if (newY > transform.position.y ) return; 
            leftBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
            actualPosition = rigthBone.transform.position;
            rigthBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
        }

        public void ChangeFollowTarget(GameObject rbodyTransform)
        {
            feet = rbodyTransform;
        }
    }
}
