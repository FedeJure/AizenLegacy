using Character;
using UniRx;
using UnityEngine;
using Utils;

namespace Trampoline
{
    public class TrampolineView : MonoBehaviour
    {
        [SerializeField] private float force = 6500;
        [SerializeField] private GameObject leftBone;
        [SerializeField] private GameObject rightBone;
        [SerializeField] private Transform loneCenter;
        [SerializeField] private Transform limit;
        [SerializeField] private Transform startPosition;
        
        private Vector3 leftPosition;
        private Vector3 rigthPosition;

        private bool isStable = true;
        private Transform originalFeets;
        private ComponentGetter getter;
        private CharacterView target;

        private void Awake()
        {
            getter = new ComponentGetter();
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
            
            EventBus.OnSerieFails()
                .Subscribe(_ => { isStable = false; });
            
            ResetBonesPosition();
            isStable = true;
        }

        private void OnTriggerEnter(Collider other)
        {
            getter.TryGetComponent(other.gameObject, out target);
            if (target == null) return;
            EventBus.EmitOnEnterTrampoline();
        }
        
        
        private void OnTriggerExit(Collider other)
        {
            target = null;
            EventBus.EmitOnExitTrampoline();
            ResetBonesPosition();
        }

        private void ResetBonesPosition()
        {
            rightBone.transform.position = rigthPosition;
            leftBone.transform.position = leftPosition;
        }

        private void OnTriggerStay(Collider characterCollider)
        {
            FollowFeets(characterCollider.bounds.min.y);
            if (target == null) return;
            target.AddVerticalImpulse(force);
        }

        private void FollowFeets(float yContactPosition)
        {
            var actualPosition = leftBone.transform.position;
            var newY = yContactPosition;
            if (newY > transform.position.y ) return; 
            leftBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
            actualPosition = rightBone.transform.position;
            rightBone.transform.position = new Vector3(actualPosition.x, newY,actualPosition.z);
        }
    }
}
