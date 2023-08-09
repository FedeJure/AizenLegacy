using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using AIActions;
using UnityEngine;
using Random = UnityEngine.Random;

public class AITrainingAction : AIActionBehavior
{
    [SerializeField] private List<RuntimeAnimatorController> controllers = new List<RuntimeAnimatorController>();
    public override async Task RequestFinish()
    {
        anim.SetTrigger("end");
        await Task.Delay(TimeSpan.FromSeconds(2));
        RecoverDefaultAnimator();
        gameObject.SetActive(false);
    }

    public override void StartAction()
    {
        if (controllers.Count > 0)
        {
            customAnimator = controllers[Random.Range(0, controllers.Count)];
        }
        UseSelfAnimator();
        gameObject.SetActive(true);
    }
}
