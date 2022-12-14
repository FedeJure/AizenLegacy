using UnityEngine;

namespace Lobby
{
    public class LobbyCamera : MonoBehaviour
    {
        [SerializeField] private Transform pivotePoint;
        private Transform Target;
        public float SmoothTime = 0.3f;
        [SerializeField] private float distance = 1;
 
        private Vector3 velocity = Vector3.zero;
        private bool initted = false;


        public void SetupTarget(Transform target)
        {
            Target = target;
            initted = true;
        }

        private void LateUpdate()
        {
            if (!initted) return;
            var targetPosition = Target.position + (pivotePoint.position - Target.position).normalized * distance;
            transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, SmoothTime);
            transform.LookAt(Target);
        }
    }
}