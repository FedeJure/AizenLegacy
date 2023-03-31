using System;
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
    [SerializeField] private GameObject lobbyController;
    [SerializeField] private GameObject loginController;

    private GameObject currentGameplay;
    private void Awake()
    {
        instance = this;
        LoadLoginScene();
    }

    private void LoadLoginScene()
    {
        DestroyOngoingGame();
        EventBus.OnLogged()
            .Do(_ =>
            {
                loginController.SetActive(false);
                // var newLobbyController = Instantiate(lobbyController);
                // Destroy(lobbyController);
                // lobbyController = newLobbyController;
                LoadLobbyScene();
            }).Subscribe();
        loginController.SetActive(true);
        // lobbyController.SetActive(false);
    }

    public void LoadLobbyScene()
    {
        DestroyOngoingGame();
        // lobbyController.SetActive(true);
    }

    private void DestroyOngoingGame()
    {
        if (currentGameplay == null) return;
        Destroy(currentGameplay);
        currentGameplay = null;
        EventBus.EmitOnGameplayEnd();
    }
    
    public void LoadGamePlayScene()
    {
        lobbyController.SetActive(false);
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