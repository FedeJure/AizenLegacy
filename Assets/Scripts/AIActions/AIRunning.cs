using System.Threading.Tasks;
using AIActions;
using UnityEditor;
using UnityEngine;
using UnityEngine.AI;

public class AIRunning : AIActionBehavior
{
    [SerializeField] private CharacterController controller;
    [SerializeField] private NavMeshAgent agent;
    [SerializeField] private RuntimeAnimatorController animatorController;
    [SerializeField] private Animator anim;
    [SerializeField] private Transform followPoint;

    private RuntimeAnimatorController savedAnimatorController;
    
    private Vector3 direction = Vector3.forward;

    public override Task RequestFinish()
    {
        if (savedAnimatorController != null)
            anim.runtimeAnimatorController = savedAnimatorController;
        gameObject.SetActive(false);
        followPoint.gameObject.SetActive(false);

        return Task.CompletedTask;
    }

    public override void StartAction()
    {
        if (anim.runtimeAnimatorController != animatorController)
        {
            savedAnimatorController = anim.runtimeAnimatorController;
            anim.runtimeAnimatorController = animatorController;
        }
        gameObject.SetActive(true);
        ChangeDirection();
        // Run();
    }

    // private async void Run()
    // {
    //     agent.destination = transform.TransformDirection(Vector3.forward) * 5;
    //     await Task.Delay(TimeSpan.FromSeconds(2));
    //     RunInCircles();
    // }

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

    // private async void RunInCircles()
    // {
    //     direction = transform.TransformDirection(Vector3.right);
    //     agent.destination = transform.TransformDirection(Vector3.right) * 5;
    //     await Task.Delay(TimeSpan.FromSeconds(2));
    //     direction = transform.TransformDirection(Vector3.right);
    //     agent.destination = transform.TransformDirection(Vector3.right) * 5;
    //
    //     await Task.Delay(TimeSpan.FromSeconds(4));
    //     direction = transform.TransformDirection(Vector3.right);
    //     agent.destination = transform.TransformDirection(Vector3.right) * 5;
    //
    //     await Task.Delay(TimeSpan.FromSeconds(4));
    //     direction = transform.TransformDirection(Vector3.right);
    //     agent.destination = transform.TransformDirection(Vector3.right) * 5;
    //
    //     await Task.Delay(TimeSpan.FromSeconds(4));
    //     direction = transform.TransformDirection(Vector3.right);
    //     agent.destination = transform.TransformDirection(Vector3.right) * 5;
    //
    //     await Task.Delay(TimeSpan.FromSeconds(2));
    //     RunInCircles();
    // }
    //
    public  void Awake()
    {
        gameObject.SetActive(false);
    }
}
