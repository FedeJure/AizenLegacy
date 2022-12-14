#nullable enable
using UnityEngine;

public class AIIdleAction : MonoBehaviour
{
    [SerializeField] private Animator anim;
    [SerializeField] private Transform rootCharacterTransform;
    private Transform? cameraTransform;
   

    private void Awake()
    {
        gameObject.SetActive(false);
    }

    private void FixedUpdate()
    {
        if (cameraTransform == null) return;
        var lookPos = cameraTransform.transform.position - rootCharacterTransform.position;
        lookPos.y = 0;
        var rotation = Quaternion.LookRotation(lookPos);
        var newRotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * 4);
        anim.SetFloat("deltaRotation", rootCharacterTransform.rotation.eulerAngles.y - newRotation.eulerAngles.y);

        rootCharacterTransform.rotation = newRotation;
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("MainCamera")) return;
        cameraTransform = other.transform;
    }
    private void OnTriggerExit(Collider other)
    {
        if (!other.CompareTag("MainCamera")) return;
        cameraTransform = null;
    }
}
