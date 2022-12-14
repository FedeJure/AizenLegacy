#nullable enable
using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Mathematics;
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
[RequireComponent(typeof(CharacterController))]
public class AICharacterController : MonoBehaviour
{
    [SerializeField] private Animator anim;
    [SerializeField] private List<AICharacterAction> actions;
    [SerializeField] private Transform headBone;
    private CharacterController controller;
    public event Action<AILocation?> ReadyToPerformNewAction = prevLocation => { };
    private NavMeshAgent agent;
    private AILocation? location;
    private FixedTimeClock clock;
    private bool actionInitted = false;

    private Transform? cameraTransform;

    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
        clock = new FixedTimeClock(0.5f);
        controller = GetComponent<CharacterController>();
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
        if (newLocation == null)
        {
            ReadyToPerformNewAction(null);
            return;
        };
        location = newLocation;
        actionInitted = false;
        agent.destination = location.location.position;
    }

    public void SetupInitialLocation(AILocation location)
    {
        transform.position = location.location.position;
        SetupNewLocation(location);
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

    private void FixedUpdate()
    {
        if (cameraTransform == null) return;
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
