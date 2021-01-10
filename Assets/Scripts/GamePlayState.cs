
using System;
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


    private void Awake()
    {
        EventBus.OnLoseStability()
            .Do(_ =>
            {
                ikView.enabled = false;
                charView.enabled = false;
                input.enabled = false;
                Observable.Timer(TimeSpan.FromSeconds(4))
                    .Last()
                    .Do(__ => SceneManager.LoadScene(0))
                    .Subscribe();
            })
            .Subscribe();
    }
}
