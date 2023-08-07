using System;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

public class GameplayController : MonoBehaviour
{
    [SerializeField] private Button exitButton;

    private void Awake()
    {
        exitButton.onClick.AddListener(HandleExit);
        EventBus.EmitOnGameplayStart();
        EventBus.OnSerieFails()
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
        UnityAdsAdapter.GetInstance().ShowInterstitial();
        GameSceneManager.GetInstance().LoadLobbyScene();
        CustomInterstitial.TryOpenCustomInterstitial();
    }
}
