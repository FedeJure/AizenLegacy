using UnityEngine;

namespace Trampoline
{
    public class TopLimitTrampoline : MonoBehaviour
    {
        [SerializeField] private Rigidbody target;
        
        private void OnTriggerEnter(Collider collider)
        {
            if (collider.gameObject.GetHashCode() != target.gameObject.GetHashCode()) return;
            target.AddForce(-target.velocity, ForceMode.Force);
        }
    }
}