using UniRx;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Trampoline
{
    public class RagdollTrampolineView : MonoBehaviour
    {
        [SerializeField] private Rigidbody rbody;
        [SerializeField] private Collider trampCollider;

        private float force = 300;
        private int times = 0;
        private bool enable = false;

        private void Awake()
        {
            EventBus.OnLoseStability()
                .Do(_ =>
                {
                    enable = true;
                })
                .Subscribe();
        }

        private void OnTriggerStay(Collider other)
        {
            if (rbody.gameObject.GetHashCode() != other.gameObject.GetHashCode() || !enable) return;
            Debug.Log(force);
            rbody.AddForce(Random.Range(-2, 2), force, Random.Range(-2, 2), ForceMode.Impulse);
        }

        private void OnTriggerExit(Collider other)
        {
            if (rbody.gameObject.GetHashCode() != other.gameObject.GetHashCode() || !enable) return;
            if (enable)
            {
                force -= 10;
            }
            if (times >= 2) trampCollider.enabled = true;
        }

        private void OnTriggerEnter(Collider other)
        {
            if (rbody.gameObject.GetHashCode() != other.gameObject.GetHashCode() || !enable) return;
            times++;
        }
    }
}