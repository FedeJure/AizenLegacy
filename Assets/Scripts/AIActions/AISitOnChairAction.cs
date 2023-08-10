using System.Threading.Tasks;
using UniRx;
using UnityEngine;

namespace AIActions
{
    public class AISitOnChairAction: AIActionBehavior
    {
        [SerializeField] private Transform rootCharacterTransform;

        private bool started = false;
        private void OnTriggerEnter(Collider other)
        {
            if (!other.CompareTag("Chair") || started) return;
            started = true;
            rootCharacterTransform.rotation = other.transform.rotation;
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
