using System;
using System.Collections.Generic;
using JetBrains.Annotations;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

enum Scenes
{
    Main = 0,
    Tutorial
}

public class GameSceneManager : MonoBehaviour
{
    private static bool interstitialReady = false;
    private static GameSceneManager instance;

    [SerializeField] private GameObject gameplayController;
    [CanBeNull] private GameObject lobbyController = null;
    [SerializeField] private GameObject lobbyControllerModel;
    [CanBeNull] private GameObject loginController = null;
    [SerializeField] private GameObject loginControllerModel;
    private List<IDisposable> disposer = new List<IDisposable>();

    private GameObject currentGameplay;
    private void Awake()
    {
        instance = this;
        LoadLoginScene();
        InitSubscriptions();
    }

    private void InitSubscriptions()
    {
        EventBus.OnLogged()
            .Do(_ =>
            {
                if (lobbyController != null)
                {
                    Destroy(lobbyController);
                    lobbyController = null;
                }
                lobbyController = Instantiate(lobbyControllerModel);
                UnloadLoginScene();
                LoadLobbyScene();
            }).Subscribe().AddTo(disposer);
        
        EventBus.OnLogout()
            .Do(_ =>
            {
                UnloadLobbyScene();
                LoadLoginScene();
            }).Subscribe().AddTo(disposer);
    }

    private void OnEnable()
    {
        disposer.ForEach(d => d.Dispose());
        disposer = new List<IDisposable>();
        InitSubscriptions();
    }

    private void OnDisable()
    {
        disposer.ForEach(d => d.Dispose());
        disposer = new List<IDisposable>();
    }


    private void UnloadLobbyScene()
    {
        if (lobbyController != null) Destroy(lobbyController);
        lobbyController = null;
    }

    private void LoadLoginScene()
    {
        UnloadLoginScene();
        loginController = Instantiate(loginControllerModel);
    }

    private void UnloadLoginScene()
    {
        if (loginController == null) return;
        Destroy(loginController);
        loginController = null;
    }

    public void LoadLobbyScene()
    {
        DestroyOngoingGame();
        if (lobbyController == null) return;
        lobbyController.SetActive(true);
    }

    private void DestroyOngoingGame()
    {
        EventBus.EmitOnGameplayEnd();
        if (currentGameplay == null) return;
        Destroy(currentGameplay);
        currentGameplay = null;
    }
    
    public void LoadGamePlayScene()
    {
        if (lobbyController != null) lobbyController.SetActive(false);
        currentGameplay = Instantiate(gameplayController, transform);
    }

    public void LoadTutorialScene()
    {
        SceneManager.LoadScene((int)Scenes.Tutorial);
    }

    private static IObservable<Unit> ShowTransition()
    {
        return Observable.ReturnUnit();
    }

    public static GameSceneManager GetInstance()
    {
        return instance;
    }

    
}