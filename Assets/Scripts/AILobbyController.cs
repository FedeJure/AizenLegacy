using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public enum AIAction
{
    Idle,
    Talk,
    Sit
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
public class AILobbyController : MonoBehaviour
{
    [SerializeField] private List<AILocation> locations;
    [SerializeField] private List<AICharacterController> characters;
    
    private List<AILocation> availableLocations = new List<AILocation>();

    private void OnEnable()
    {
        locations.ForEach(location =>
        {
            availableLocations.Add(location);
            location.OnReachCapacity += HandleOnReachCapacity(location);
            location.OnFreeCapacity += HandleOnFreeCapacity(location);
        });
        characters.ForEach(character => { 
            character.ReadyToPerformNewAction += HandlePerformAction(character);
        });
    }
    private void OnDisable()
    {
        availableLocations.Clear();
        locations.ForEach(location =>
        {
            location.OnReachCapacity -= HandleOnReachCapacity(location);
            location.OnFreeCapacity -= HandleOnFreeCapacity(location);
        });
        characters.ForEach(character => { 
            character.ReadyToPerformNewAction -= HandlePerformAction(character);
        });
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
