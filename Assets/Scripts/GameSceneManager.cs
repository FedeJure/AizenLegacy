using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using JetBrains.Annotations;
using UniRx;
using UnityEngine;
using UnityEngine.AddressableAssets;

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
    [CanBeNull] private GameObject rankedsController = null;
    [SerializeField] private GameObject rankedsControllerModel;
    [CanBeNull] private GameObject tutorialController = null;
    [SerializeField] private GameObject tutorialControllerModel;
    private List<IDisposable> disposer = new List<IDisposable>();

    private GameObject transition;

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
                lobbyController = Instantiate(lobbyControllerModel, transform);
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
        DestroyTutorial();
        if (lobbyController == null) return;
        lobbyController.SetActive(true);
    }

    private void DestroyTutorial()
    {
        if (tutorialController != null) Destroy(tutorialController);
        tutorialController = null;
    }
    private void DestroyOngoingGame()
    {
        if (currentGameplay == null) return;
        EventBus.EmitOnGameplayEnd();
        Destroy(currentGameplay);
        currentGameplay = null;
    }
    
    public async void LoadGamePlayScene()
    {
        await ShowTransitiion();
        if (lobbyController != null) lobbyController.SetActive(false);
        currentGameplay = Instantiate(gameplayController, transform);
    }

    public async void LoadRankedGameplayScene()
    {
        await ShowTransitiion();
        if (lobbyController != null) lobbyController.SetActive(false);
        currentGameplay = Instantiate(rankedsControllerModel, transform); 
    }

    public async void LoadTutorialScene()
    {
        await ShowTransitiion();
        if (lobbyController != null) lobbyController.SetActive(false);
        if (tutorialController != null) Destroy(tutorialController);
        tutorialController = Instantiate(tutorialControllerModel, transform); 
    }

    private static IObservable<Unit> ShowTransition()
    {
        return Observable.ReturnUnit();
    }

    public static GameSceneManager GetInstance()
    {
        return instance;
    }

    private async Task ShowTransitiion()
    {
        if (transition == null)
        {
            transition = Instantiate(await Addressables.LoadAssetAsync<GameObject>("Assets/UI/Transition.prefab").Task);
        }
        transition.SetActive(true);
        await Task.Delay(500);
    }

    
}