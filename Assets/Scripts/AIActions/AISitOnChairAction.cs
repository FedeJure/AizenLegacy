using System.Threading.Tasks;
using UnityEngine;

namespace AIActions
{
    public class AISitOnChairAction: AIActionBehavior
    {
        [SerializeField] private Transform rootCharacterTransform;
        private void OnTriggerEnter(Collider other)
        {
            if (!other.CompareTag("Chair")) return;
            rootCharacterTransform.rotation = other.transform.rotation;
            anim.SetTrigger(Animator.StringToHash("sitOnChair"));
        }
        private void OnTriggerExit(Collider other)
        {
            if (!other.CompareTag("Chair")) return;
        }

        public override async Task RequestFinish()
        {
            anim.SetTrigger("standUp");
            await Task.Delay(2000);
            RecoverDefaultAnimator();
            gameObject.SetActive(false);
        }

        public override void StartAction()
        {
            gameObject.SetActive(true);
            UseSelfAnimator();
            // void
        }
    }
}
