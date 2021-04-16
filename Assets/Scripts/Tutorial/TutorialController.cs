using System;
using UnityEngine;

namespace Tutorial
{
    public class TutorialController: MonoBehaviour
    {
        [SerializeField] private Rigidbody rbody;
        [SerializeField] private Animator animator;

        private float animatorSpeed;
        private RigidbodyConstraints constraints;

        private void Start()
        {
            animatorSpeed = animator.speed;
            constraints = rbody.constraints;
        }

        private void Pause()
        {
            rbody.constraints = RigidbodyConstraints.FreezePosition;
            animator.speed = 0;
        }

        private void Resume()
        {
            rbody.constraints = constraints;
            animator.speed = animatorSpeed;
        }
    }
}