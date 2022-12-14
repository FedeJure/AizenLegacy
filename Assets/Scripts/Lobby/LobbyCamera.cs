using UnityEngine;

namespace Lobby
{
    public class LobbyCamera : MonoBehaviour
    {
        [SerializeField] private Transform pivotePoint;
        private Transform Target;
        public float SmoothTime = 0.3f;
        [SerializeField] private float distance = 1;
        [SerializeField] private Vector3 offset;
 
        private Vector3 velocity = Vector3.zero;
        private bool initted;


        public void SetupTarget(Transform target)
        {
            Target = target;
            initted = true;
        }

        private void LateUpdate()
        {
            if (!initted) return;
            var position = Target.position;
            var targetPosition = offset + position + (pivotePoint.position - position).normalized * distance;
            transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, SmoothTime);
            transform.LookAt(position + offset);
        }
    }
}