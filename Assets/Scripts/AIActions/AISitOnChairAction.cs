using System.Threading.Tasks;
using AIActions;
using UnityEngine;

public class AISitOnChairAction: AIActionBehavior
{
    [SerializeField] private Animator anim;
    [SerializeField] private Transform rootCharacterTransform;
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

    public override Task RequestFinish()
    {
        gameObject.SetActive(false);
        return Task.CompletedTask;
    }

    public override void StartAction()
    {
        gameObject.SetActive(true);

       // void
    }
}
