﻿using Character;
using UnityEngine;

namespace Trampoline
{
    public class TrampolineView : MonoBehaviour
    {
        [SerializeField] private float force = 10000;
        [SerializeField] private CharacterView characterView;
        [SerializeField] private GameObject characterModel;

        private void OnTriggerEnter(Collider other)
        {
            EventBus.EmitOnEnterTrampoline();
        }

        private void OnTriggerExit(Collider other)
        {
            EventBus.EmitOnExitTrampoline();
        }

        private void OnTriggerStay(Collider characterCollider)
        {
            if (characterCollider.gameObject.GetHashCode() != characterModel.GetHashCode()) return;
            var magnitude = transform.position.y - characterCollider.transform.position.y;
            var value = magnitude * force;
            characterView.AddVerticalImpulse(value); 
        }
    }
}
