using System;
using System.Collections;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

public class LobbyTrampoline : MonoBehaviour
{
    [SerializeField] private GameObject gameplayTrampoline;

    private void Awake()
    {
        gameplayTrampoline.SetActive(false);
        EventBus.OnGameplayStart()
            .Do(_ =>
            {
                gameplayTrampoline.SetActive(true);
                gameObject.SetActive(false);
            })
            .Subscribe();
        
        EventBus.OnEnterLobby()
            .Do(_ =>
            {
                gameplayTrampoline.SetActive(false);
                gameObject.SetActive(true);
            })
            .Subscribe();
    }
}
