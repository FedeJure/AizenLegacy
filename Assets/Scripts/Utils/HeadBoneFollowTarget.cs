using UnityEngine;

namespace Utils
{
    public class HeadBoneFollowTarget : MonoBehaviour
    {

        [SerializeField] private Transform target;

        private void Update()
        {
            var lookRotation = Quaternion.LookRotation (transform.position - target.position);
            transform.rotation = lookRotation;
        }
    }
}
