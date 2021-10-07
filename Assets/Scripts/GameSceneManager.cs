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

    private GameObject currentGameplay;
    private void Awake()
    {
        instance = this;
        LoadLobbyScene();
    }

    public void LoadLobbyScene()
    {
        if (currentGameplay != null)
        {
            Destroy(currentGameplay);
            currentGameplay = null;
            EventBus.EmitOnGameplayEnd();
        }
        lobbyController.SetActive(true);
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