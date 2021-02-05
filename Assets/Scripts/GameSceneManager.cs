using System;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameSceneManager : MonoBehaviour
{
    private static bool interstitialReady = false;
    private void Awake()
    {
        SceneManager.LoadScene(1,LoadSceneMode.Additive);
    }

    public static void LoadLobbyScene()
    {
        // ShowInterstitial()
        //     .DoOnCompleted(() => SceneManager.LoadScene(1, LoadSceneMode.Additive))
        //     .Subscribe();
        SceneManager.UnloadSceneAsync(2);
        SceneManager.LoadScene(1, LoadSceneMode.Additive);
    }
    
    public static void LoadGamePlayScene()
    {
        SceneManager.UnloadSceneAsync(1);
        SceneManager.LoadScene(2, LoadSceneMode.Additive);
    }

    private static IObservable<Unit> ShowTransition()
    {
        return Observable.ReturnUnit();
    }

    // private static IObservable<Unit> ShowInterstitial()
    // {
    //     if (!interstitialReady) return Observable.ReturnUnit();
    //     var interstitialId = "INSTERTITIAL-2946292";
    //     var subject = new Subject<Unit>();
    //     Vungle.onAdFinishedEvent += (placementID, args) => {
    //         if (placementID != interstitialId) return;
    //         subject.OnNext(Unit.Default);
    //         subject.OnCompleted();
    //         Debug.Log("interstitial showed");
    //     };
    //     Vungle.onErrorEvent += err =>
    //     {
    //         subject.OnNext(Unit.Default);
    //         subject.OnCompleted();
    //     };
    //     Vungle.loadAd(interstitialId);
    //     return subject;
    // }
}