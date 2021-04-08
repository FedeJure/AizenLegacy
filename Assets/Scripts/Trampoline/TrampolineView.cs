using UniRx;
using UnityEngine;

namespace Trampoline
{
    public class TrampolineView : MonoBehaviour
    {
        [SerializeField] private float force = 5000;
        [SerializeField] private GameObject leftBone;
        [SerializeField] private GameObject rightBone;
        [SerializeField] private Transform loneCenter;
        [SerializeField] private Transform limit;
        [SerializeField] private Transform startPosition;
        
        private Vector3 leftPosition;
        private Vector3 rigthPosition;

        private bool isStable = true;
        private Transform originalFeets;
        private Transform feetToFollow;

        private void Awake()
        {
            GameplayContext.GetInstance().SetupTrampolineDependencies(
                transform,
                loneCenter,
                limit,
                startPosition);
        }

        private void Start()
        {
            leftPosition = leftBone.transform.position;
            rigthPosition = rightBone.transform.position;

            EventBus.OnGameplayEnd()
                .Subscribe(_ => { ResetBonesPosition(); });
            
            EventBus.OnGameplayStart()
                .Subscribe(_ => { ResetBonesPosition(); });
            
            EventBus.OnLoseStability()
                .Subscribe(_ => { isStable = false; });
            
            ResetBonesPosition();
            isStable = true;
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.GetHashCode() != GameplayContext.GetInstance().characterView.gameObject.GetHashCode()) return;
            EventBus.EmitOnEnterTrampoline();
        }
        private void OnTriggerExit(Collider other)
        {
            EventBus.EmitOnExitTrampoline();
            ResetBonesPosition();
        }

        private void ResetBonesPosition()
        {
            rightBone.transform.position = rigthPosition;
            leftBone.transform.position = leftPosition;
            feetToFollow = GameplayContext.GetInstance().leftFeetBoneTransform;
        }

        private void OnTriggerStay(Collider characterCollider)
        {
            FollowFeets();
            if (characterCollider.gameObject.GetHashCode() != GameplayContext.GetInstance().characterView.gameObject.GetHashCode()) return;
            GameplayContext.GetInstance().characterView.AddVerticalImpulse(force); 
        }

        private void FollowFeets()
        {
            var actualPosition = leftBone.transform.position;
            var newY = GameplayContext.GetInstance().leftFeetBoneTransform.position.y;
            if (newY > transform.position.y ) return; 
            leftBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
            actualPosition = rightBone.transform.position;
            rightBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
        }

        public void ChangeFollowTarget(Transform rbodyTransform)
        {
            feetToFollow = rbodyTransform;
        }
    }
}
