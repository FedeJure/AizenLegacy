using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Character;
using DataStore;
using Models;
using UniRx;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class RankedGameplayController : MonoBehaviour
{
    [SerializeField] private GameSummaryController _gameSummaryController;
    [SerializeField] private Button exitButton;
    [SerializeField] private JumpTracker _jumpTracker;

    private readonly List<ProcessedJumpConfig> _jumps = new List<ProcessedJumpConfig>();
    private void Awake()
    {
        exitButton.onClick.AddListener(Exit);
        EventBus.EmitOnGameplayStart();
        EventBus.OnGameEnds()
            .First(gameData =>
            {
                Debug.Log("OnGameEnds called");
                PlayerPointsUpdateResponse response = null;
                var startTime = Time.time;
                const int maxtime = 4000;

                Observable.Create<PlayerPointsUpdateResponse>(o => UpdatePoints(o, gameData))
                    .SelectMany(r =>
                    {
                        response = r;
                        return Observable.Timer(TimeSpan.FromMilliseconds(Math.Max(maxtime - (Time.time - startTime), 0)));
                    })
                    .Do(_ =>
                    {
                        try
                        {
                            if (response == null) return;
                            _gameSummaryController.onAccept += Exit;
                            _gameSummaryController.gameObject.SetActive(true);
                            _gameSummaryController.Setup(_jumps, response);
                        }
                        catch (Exception e)
                        {
                            Debug.LogError(e);
                        }
                        
                    })
                    .Subscribe();
                return true;

            })
            .Subscribe();

        EventBus.OnSerieFails()
            .Do(_ =>
            {
                EventBus.EmitOnGameEnd(_jumpTracker.GetGameData());
            })
            .Subscribe().AddTo(this);
        
        EventBus.OnJumpData()
            .Do(async jump =>
            {
                _jumps.Add(jump);
                if (_jumps.Count == 10) await HandleSerieEnds();
            }).Subscribe().AddTo(this);
    }

    private async Task HandleSerieEnds()
    {
        EventBus.EmitOnSerieEnds();
        EventBus.EmitOnGameEnd(_jumpTracker.GetGameData());
    }
    private void Exit()
    {
        UnityAdsAdapter.GetInstance().ShowInterstitial();
        GameSceneManager.GetInstance().LoadLobbyScene();
        CustomInterstitial.TryOpenCustomInterstitial();
    }

    private async Task<PlayerPointsUpdateResponse> UpdatePoints(IObserver<PlayerPointsUpdateResponse> o, PlayerPointsUpdateRequest gameData)
    {
        var points = await ApiController.UpdatePlayerPoints(gameData);
        await InventoryDataStore.UpdateDatastore();
        o.OnNext(points);
        o.OnCompleted();
        return points;
    }
}
