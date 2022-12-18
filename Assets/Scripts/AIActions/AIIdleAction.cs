#nullable enable
using System.Collections.Generic;
using System.Threading.Tasks;
using AIActions;
using UnityEngine;
using Random = UnityEngine.Random;

public class AIIdleAction : AIActionBehavior
{
    [SerializeField] private List<string> animationTriggers;
    [SerializeField] private Animator anim;
    [SerializeField] private Transform rootCharacterTransform;
    private Transform? cameraTransform;
    
    private void OnEnable()
    {
        anim.SetTrigger(animationTriggers[Random.Range(0, animationTriggers.Count)]);
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

    public override Task RequestFinish()
    {
        gameObject.SetActive(false);
        return Task.CompletedTask;
    }

    public override void StartAction()
    {
        gameObject.SetActive(true);
    }
}
