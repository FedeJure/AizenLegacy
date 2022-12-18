using System;
using System.Threading.Tasks;
using AIActions;
using UnityEngine;

public class AITrainingAction : AIActionBehavior
{
    [SerializeField] private RuntimeAnimatorController animatorController;
    [SerializeField] private Animator animator;

    private RuntimeAnimatorController savedAnimatorController;
    
    public override async Task RequestFinish()
    {
        animator.SetTrigger("end");
        await Task.Delay(TimeSpan.FromSeconds(2));
        if (savedAnimatorController != null)
        {
            animator.runtimeAnimatorController = savedAnimatorController;
        }
        gameObject.SetActive(false);
    }

    public override void StartAction()
    {
        
        if (animatorController != animator.runtimeAnimatorController)
        {
            savedAnimatorController = animator.runtimeAnimatorController;
            animator.runtimeAnimatorController = animatorController;
        }
        gameObject.SetActive(true);
    }
}
