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
    public event Action<AILocation?> ReadyToPerformNewAction = prevLocation => { };
    private NavMeshAgent agent;
    private AICurrentAction? actionInProgress;
    private FixedTimeClock clock;
    private bool actionInitted;

    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
        clock = new FixedTimeClock(0.5f);
    }

    private void OnEnable()
    {
        ReadyToPerformNewAction(null);
    }

    public void Init()
    {
        ReadyToPerformNewAction(null);
    }

    private void Update()
    {
        anim.SetFloat(Animator.StringToHash("velocity"), agent.velocity.magnitude);
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

    public void SetupNewLocation(AILocation? newLocation)
    {
        try
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
        catch (Exception) { }
        
    }

    public void SetupInitialLocation(AILocation location)
    {
        transform.position = location.location.position;
        transform.rotation = location.location.rotation;
        SetupNewLocation(location);
        // InitAction();
    }

    private async void  SearchForNewAction()
    {
        if (!actionInProgress.HasValue) ReadyToPerformNewAction(null);
        await actionInProgress?.action.behavior?.RequestFinish();
        ReadyToPerformNewAction(actionInProgress?.location);
    }

    private void InitAction()
    {
        if (!actionInProgress.HasValue || actionInProgress.Value.action.behavior == null) throw new Exception("There is no action in progress");
        var action = actionInProgress.Value.action;
        action.behavior.StartAction();
        Invoke("SearchForNewAction", Random.Range(action.minDuration, action.maxDuration));
    }

    private void OnDisable()
    {
        CancelInvoke("SearchForNewAction");
        actionInProgress = null;
    }
}
