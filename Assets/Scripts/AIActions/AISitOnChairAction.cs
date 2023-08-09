using System.Threading.Tasks;
using UnityEngine;

namespace AIActions
{
    public class AISitOnChairAction: AIActionBehavior
    {
        [SerializeField] private Transform rootCharacterTransform;
        [SerializeField] private Transform pelvisBone;

        private bool started = false;
        private void OnTriggerEnter(Collider other)
        {
            if (!other.CompareTag("Chair") || started) return;
            started = true;
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
            started = false;
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
