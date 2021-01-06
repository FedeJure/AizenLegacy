using System;
using Character;
using UniRx;
using UnityEngine;

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

        private IDisposable disposer;
        private Vector3 leftPosition;
        private Vector3 rigthPosition;

        private void Awake()
        {
            leftPosition = leftBone.transform.position;
            rigthPosition = rigthBone.transform.position;
        }

        private void OnTriggerEnter(Collider other)
        {
            EventBus.EmitOnEnterTrampoline();
            disposer = Observable.EveryUpdate()
                .Do(_ => FollowFeets())
                .Subscribe();
        }

        private void OnTriggerExit(Collider other)
        {
            EventBus.EmitOnExitTrampoline();
            disposer.Dispose();
            rigthBone.transform.position = rigthPosition;
            leftBone.transform.position = leftPosition;
        }

        private void OnTriggerStay(Collider characterCollider)
        {
            if (characterCollider.gameObject.GetHashCode() != characterModel.GetHashCode()) return;
            var magnitude = transform.position.y - feet.transform.position.y;
            var value = magnitude * force;
            characterView.AddVerticalImpulse(value); 
        }

        private void FollowFeets()
        {
            var actualPosition = leftBone.transform.position;
            var newY = feet.transform.position.y;
            leftBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
            actualPosition = rigthBone.transform.position;
            rigthBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
        }
    }
}
