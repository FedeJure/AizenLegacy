using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public enum AIAction
{
    Idle,
    Talk,
    SitOnChair,
    Training,
    Running
}

[Serializable]
public class AILocation
{
    public event Action OnReachCapacity = () => { };
    public event Action OnFreeCapacity = () => { };
    public Transform location;
    public AIAction action;
    public int capacity = 1;

    private int currentTargets;

    public AILocation(Transform location, AIAction action, int capacity)
    {
        this.location = location;
        this.action = action;
        this.capacity = capacity;
    }

    public void AddTarget()
    {
        if (currentTargets >= capacity) throw new Exception("This AILocation is full of capacity.");
        currentTargets++;
    }

    public void RemoveTarget()
    {
        if (currentTargets == 0) throw new Exception("AILocation is empty");
        currentTargets--;
    }
}

[Serializable]
public class AILocationFather
{
    public AIAction action;
    public GameObject container;
    public int capacity = 1;
}
public class AILobbyController : MonoBehaviour
{
    [SerializeField] private List<AILocationFather> configuredLocations;
    [SerializeField] private List<AICharacterController> characters;
    private List<AILocation> availableLocations = new List<AILocation>();

    private void OnEnable()
    {
        configuredLocations.ForEach(location =>
        {
            foreach (var loc in location.container.GetComponentsInChildren<Transform>())
            {
                if (loc == location.container.transform) continue;
                var newLocation = new AILocation(loc, location.action, location.capacity);
                availableLocations.Add(newLocation);
                newLocation.OnReachCapacity += HandleOnReachCapacity(newLocation);
                newLocation.OnFreeCapacity += HandleOnFreeCapacity(newLocation);
            }
            
        });
        characters.ForEach(character => { 
            character.ReadyToPerformNewAction += HandlePerformAction(character);
        });
    }
    private void OnDisable()
    {
        availableLocations.ForEach(location =>
        {
            location.OnReachCapacity -= HandleOnReachCapacity(location);
            location.OnFreeCapacity -= HandleOnFreeCapacity(location);
        });
        characters.ForEach(character => { 
            character.ReadyToPerformNewAction -= HandlePerformAction(character);
        });
        availableLocations.Clear();
    }

    private Action HandleOnReachCapacity(AILocation location)
    {
        return () => { availableLocations.Remove(location); };
    }

    private Action HandleOnFreeCapacity(AILocation location)
    {
        return () => { availableLocations.Add(location); };
    }

    private Action<AILocation> HandlePerformAction(AICharacterController character)
    {
        return prevLocation =>
        {
            try
            {
                var locationToUse = availableLocations[Random.Range(0, availableLocations.Count)];
                locationToUse.AddTarget();
                if (prevLocation == null)
                {
                    character.SetupInitialLocation(locationToUse);
                }
                else
                {
                    character.SetupNewLocation(locationToUse);
                    prevLocation.RemoveTarget();
                }
                    
            }
            catch (Exception e)
            {
                character.SetupNewLocation(prevLocation);
            }
        };
    }
}
