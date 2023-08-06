using System.Threading.Tasks;
using AIActions;
using UnityEngine;
using UnityEngine.AI;

public class AIRunning : AIActionBehavior
{
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private Transform followPoint;

    public override Task RequestFinish()
    {
        RecoverDefaultAnimator();
        gameObject.SetActive(false);
        followPoint.gameObject.SetActive(false);

        return Task.CompletedTask;
    }

    public override void StartAction()
    {
        UseSelfAnimator();
        gameObject.SetActive(true);
        ChangeDirection();
    }
    private void Update()
    {
        if (agent.remainingDistance < 0.2f)
        {
            ChangeDirection();
        }
    }

    private void ChangeDirection()
    {
        agent.destination =transform.position + transform.TransformDirection(Vector3.RotateTowards(Vector3.forward, Vector3.right, 0.78f, 0.80f)) * 4 ;
    }
    
    public  void Awake()
    {
        gameObject.SetActive(false);
    }
}
