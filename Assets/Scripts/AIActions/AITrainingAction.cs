using System;
using System.Threading.Tasks;
using AIActions;

public class AITrainingAction : AIActionBehavior
{
    public override async Task RequestFinish()
    {
        anim.SetTrigger("end");
        await Task.Delay(TimeSpan.FromSeconds(2));
        RecoverDefaultAnimator();
        gameObject.SetActive(false);
    }

    public override void StartAction()
    {
        
        UseSelfAnimator();
        gameObject.SetActive(true);
    }
}
