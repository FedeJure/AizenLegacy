#nullable enable
using System;
using System.Collections.Generic;
using AIActions;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

[Serializable]
public class AICharacterAction
{
    public AIAction action;
    public float minDuration;
    public float maxDuration;
    public List<string> animationsTrigger;
    public AIActionBehavior? behavior;
}

public struct AICurrentAction
{
    public AICharacterAction action;
    public AILocation location;
}

[RequireComponent(typeof(NavMeshAgent))]
public class AICharacterController : MonoBehaviour
{
    [SerializeField] private Animator anim;
    [SerializeField] private List<AICharacterAction> actions;
    [SerializeField] private Transform headBone;
    public event Action<AILocation?> ReadyToPerformNewAction = prevLocation => { };
    private NavMeshAgent agent;
    private AICurrentAction? actionInProgress;
    private FixedTimeClock clock;
    private bool actionInitted;

    private Transform? cameraTransform;
    

    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
        clock = new FixedTimeClock(0.5f);
    }

    private void Start()
    {
        ReadyToPerformNewAction(null);
    }

    private void Update()
    {
        anim.SetFloat("velocity", agent.velocity.magnitude);
    }

    private void LateUpdate()
    {
        if (!clock.ReachTime()) return;
        if (!actionInitted && actionInProgress != null && agent.velocity.magnitude == 0)
        {
            actionInitted = true;
            InitAction();
        }
    }

    public void SetupNewLocation(AILocation newLocation)
    {
        if (newLocation == null)
        {
            ReadyToPerformNewAction(null);
            return;
        };
        if (actions.Count == 0) throw new Exception("Needs to have at least 1 action");
        actionInProgress = new AICurrentAction
        {
            action = actions.Find(a => a.action.Equals(newLocation.action)) ?? actions[0],
            location = newLocation
        };
        actionInitted = false;
        agent.destination = actionInProgress.Value.location.location.position;
    }

    public void SetupInitialLocation(AILocation location)
    {
        transform.position = location.location.position;
        SetupNewLocation(location);
    }

    private void SearchForNewAction()
    {
        ReadyToPerformNewAction(actionInProgress.HasValue ? actionInProgress.Value.location : null);
    }

    private void InitAction()
    {
        if (!actionInProgress.HasValue) throw new Exception("There is no action in progress");
        var action = actionInProgress.Value.action;
        action.behavior?.Activate();
        Invoke("SearchForNewAction", Random.Range(action.minDuration, action.maxDuration));
        anim.SetTrigger(action.animationsTrigger[Random.Range(0, action.animationsTrigger.Count)]);
    }

    private void FixedUpdate()
    {
        if (cameraTransform == null || agent.velocity.magnitude > 1) return;
        var lookPos = cameraTransform.transform.position - transform.position;
        lookPos.y = 0;
        var rotation = Quaternion.LookRotation(lookPos);
        var newRotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * 4);
        anim.SetFloat("deltaRotation", transform.rotation.eulerAngles.y - newRotation.eulerAngles.y);

        transform.rotation = newRotation;
        headBone.rotation = newRotation;
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
