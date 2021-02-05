
using System;
using System.Collections.Generic;
using Character;
using Trampoline;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GamePlayState : MonoBehaviour
{
    [SerializeField] private IKCharacterView ikView;
    [SerializeField] private CharacterView charView;
    [SerializeField] private CharacterInput input;
    
    private List<IDisposable> disposer = new List<IDisposable>();


    private void OnEnable()
    {
        EventBus.OnLoseStability()
            .Do(_ =>
            {
                ikView.enabled = false;
                charView.enabled = false;
                input.enabled = false;
                Observable.Timer(TimeSpan.FromSeconds(4))
                    .Last()
                    .Do(__ => UnityAds.ShowInterstitialAd())
                    .Do(__ => GameSceneManager.LoadLobbyScene())
                    .Subscribe();
            })
            .Subscribe()
            .AddTo(disposer);
    }

    private void OnDisable()
    {
        disposer.ForEach(d => d.Dispose());
    }
}
