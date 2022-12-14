using AIActions;
using UnityEngine;

public class AIIdleAction : AIActionBehavior
{
    private Animator anim;
    public AIIdleAction(Animator anim)
    {
        this.anim = anim;
    }
    public void Execute()
    {
    }
}
