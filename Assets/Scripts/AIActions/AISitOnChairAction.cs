using UnityEngine;

public class AISitOnChairAction: MonoBehaviour
{
    [SerializeField] private Animator anim;
    [SerializeField] private Transform rootCharacterTransform;

    private void Awake()
    {
        gameObject.SetActive(false);
    }
    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("Chair")) return;
        rootCharacterTransform.rotation = other.transform.rotation;
        anim.SetTrigger("sitOnChair");
    }
    private void OnTriggerExit(Collider other)
    {
        if (!other.CompareTag("Chair")) return;
    }
    
}
