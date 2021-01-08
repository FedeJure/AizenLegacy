
using Character;
using Trampoline;
using UniRx;
using UnityEngine;

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

            })
            .Subscribe();
    }
}
