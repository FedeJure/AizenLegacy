using System;
using System.Collections.Generic;
using Character;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public class RankedGameplayController : MonoBehaviour
{
    [SerializeField] private GameSummaryController _gameSummaryController;
    [SerializeField] private Button exitButton;

    private List<ProcessedJumpConfig> jumps = new List<ProcessedJumpConfig>();
    private void Awake()
    {
        exitButton.onClick.AddListener(Exit);
        EventBus.OnLoseStability()
            .Do(_ =>
            {
                Observable.Timer(TimeSpan.FromSeconds(4))
                    .Last()
                    .Do(__ => HandleExit())
                    .Subscribe();
            })
            .Subscribe();
        EventBus.OnJumpData()
            .Do(jump =>
            {
                jumps.Add(jump); 
                    
            }).Subscribe().AddTo(this);
    }

    private void HandleExit()
    {
        _gameSummaryController.onAccept += Exit;
        _gameSummaryController.gameObject.SetActive(true);
        _gameSummaryController.Setup(jumps);
    }

    private void Exit()
    {
        UnityAdsAdapter.GetInstance().ShowInterstitial();
        GameSceneManager.GetInstance().LoadLobbyScene();
        CustomInterstitial.TryOpenCustomInterstitial();
    }
}
