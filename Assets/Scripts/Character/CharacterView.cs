using System;
using UnityEngine;

namespace Character
{
    public class CharacterView : MonoBehaviour
    {
        [SerializeField] private Rigidbody rigidbody;
        [SerializeField] private Animator animator;
        [SerializeField] private Transform trampolineLimit;

        private int velocityKey = Animator.StringToHash("verticalVelocity");
        private int heightFactor = Animator.StringToHash("heightFactor");
        private int startRaising = Animator.StringToHash("startRaising");

        private bool isFalling = false;

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
            var vel = velocity.y;
            var factor = (-0 + (float)Math.Sqrt(0 + 2 * 9.8f * (position.y - trampolineLimit.position.y)))/ 9.8f;
            var fallDuration = 2.2f;
            return factor * fallDuration;
        }

        public Vector3 GetVelocity()
        {
            return rigidbody.velocity;
        }

        public void AddVerticalImpulse(float value)
        {
            rigidbody.AddForce(Vector3.up * value);
        }
    }
}