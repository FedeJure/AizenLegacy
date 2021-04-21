using Character;
using UnityEngine;

public class GameplayContext
{
    private static GameplayContext instance;
    
    //Needed for player
    public Transform trampolineTransform { get; private set; }
    public Transform centerLonePositionTransform { get; private set; }
    public Transform trampolineLimitTransform { get; private set; }
    public Transform startLocationTransform { get; private set; }
    //=======================

    private GameplayContext() { }

    public void SetupTrampolineDependencies(
        Transform trampolineTransform,
        Transform centerLonePositionTransform,
        Transform trampolineLimitTransform,
        Transform startLocationTransform)
    {
        this.trampolineTransform = trampolineTransform;
        this.centerLonePositionTransform = centerLonePositionTransform;
        this.trampolineLimitTransform = trampolineLimitTransform;
        this.startLocationTransform = startLocationTransform;
    }
    public static GameplayContext GetInstance()
    {
        return instance ?? (instance = new GameplayContext());
    }
    
    
}