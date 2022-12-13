#nullable enable
using System;
using System.Collections.Generic;
using System.Linq;
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
}

[RequireComponent(typeof(NavMeshAgent))]
public class AICharacterController : MonoBehaviour
{
    [SerializeField] private Animator anim;
    [SerializeField] private List<AICharacterAction> actions;
    public event Action<AILocation?> ReadyToPerformNewAction = prevLocation => { };
    private NavMeshAgent agent;
    private AILocation? location;
    private FixedTimeClock clock;
    private bool actionInitted = false;

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
        if (!actionInitted && location != null && agent.velocity.magnitude == 0)
        {
            actionInitted = true;
            InitAction();
        }
    }

    public void SetupNewLocation(AILocation newLocation)
    {
        if (newLocation == null) return;
        location = newLocation;
        actionInitted = false;
        agent.destination = location.location.position;
    }

    private void SearchForNewAction()
    {
        ReadyToPerformNewAction(location);
    }

    private void InitAction()
    {
        if (actions.Count == 0) return;
        var action = actions.Find(a => a.action.Equals(location.action)) ?? actions[0];
        
        Invoke("SearchForNewAction", Random.Range(action.minDuration, action.maxDuration));
        anim.SetTrigger(action.animationsTrigger[Random.Range(0, action.animationsTrigger.Count)]);
    }
}
