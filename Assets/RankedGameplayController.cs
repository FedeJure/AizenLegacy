using System;
using Character;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public class RankedGameplayController : MonoBehaviour
{
    [SerializeField] private GameSummaryController _gameSummaryController;
    [SerializeField] private Button exitButton;

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
    }

    private void HandleExit()
    {
        _gameSummaryController.onAccept += Exit;
        _gameSummaryController.gameObject.SetActive(true);
        
    }

    private void Exit()
    {
        UnityAdsAdapter.GetInstance().ShowInterstitial();
        GameSceneManager.GetInstance().LoadLobbyScene();
        CustomInterstitial.TryOpenCustomInterstitial();
    }
}
