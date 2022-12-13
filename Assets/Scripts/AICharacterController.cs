#nullable enable
using System;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(NavMeshAgent))]
public class AICharacterController : MonoBehaviour
{
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
        ReadyToPerformNewAction(location);
    }

    private void LateUpdate()
    {
        if (!clock.ReachTime()) return;
        if (!actionInitted && location != null && agent.remainingDistance < 2)
        {
            Debug.Log("Do Action");
            actionInitted = true;
            Invoke("SearchForNewAction", 3);
        }
    }

    public void SetupNewLocation(AILocation newLocation)
    {
        location = newLocation;
        actionInitted = false;
        agent.destination = location.location.position;
    }

    private void SearchForNewAction()
    {
        ReadyToPerformNewAction(location);
    }
}
