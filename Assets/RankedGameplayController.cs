using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Character;
using Models;
using UniRx;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class RankedGameplayController : MonoBehaviour
{
    [SerializeField] private GameSummaryController _gameSummaryController;
    [SerializeField] private Button exitButton;

    private readonly List<ProcessedJumpConfig> _jumps = new List<ProcessedJumpConfig>();
    private void Awake()
    {
        exitButton.onClick.AddListener(Exit);
        EventBus.OnGameEnds()
            .Do(gameData =>
            {
                PlayerPointsUpdateResponse response = null;
                float startTime = Time.time;
                const int maxtime = 4000;
                Observable.Create<PlayerPointsUpdateResponse>(o => UpdatePoints(o, gameData))
                    .SelectMany(r =>
                    {
                        response = r;
                        return Observable.Timer(TimeSpan.FromMilliseconds(Math.Max(maxtime - (Time.time - startTime), 0)));
                    })
                    .Do(_ =>
                    {
                        if (response == null) return;
                        _gameSummaryController.onAccept += Exit;
                        _gameSummaryController.gameObject.SetActive(true);
                        _gameSummaryController.Setup(_jumps, response);
                    })
                    .Subscribe();

            })
            .Subscribe();
        EventBus.OnJumpData()
            .Do(jump =>
            {
                _jumps.Add(jump); 
                    
            }).Subscribe().AddTo(this);
    }
    private void Exit()
    {
        UnityAdsAdapter.GetInstance().ShowInterstitial();
        GameSceneManager.GetInstance().LoadLobbyScene();
        CustomInterstitial.TryOpenCustomInterstitial();
    }

    private async Task<PlayerPointsUpdateResponse> UpdatePoints(IObserver<PlayerPointsUpdateResponse> o, PlayerPointsUpdateRequest gameData)
    {
        var points = await ApiController.UpdatePlayerPoints(gameData.quarterSomersault,
            gameData.halfTwists, gameData.position);
        o.OnNext(points);
        o.OnCompleted();
        return points;
    }
}
