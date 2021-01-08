using UniRx;
using UnityEngine;

namespace Character
{
    public class CharacterInput : MonoBehaviour
    {
        public CharacterActions controls;
        [SerializeField] private CharacterView character;

        private void Awake()
        {
            controls = new CharacterActions();
            controls.Player.CPosition.performed += _ => HandleCPosition(true);
            controls.Player.VPosition.performed += _ => HandleVPosition(true);
            controls.Player.APosition.performed += _ => HandleAPosition(true);
            
            controls.Player.CPosition.canceled += _ => HandleCPosition(false);
            controls.Player.VPosition.canceled += _ => HandleVPosition(false);
            controls.Player.APosition.canceled += _ => HandleAPosition(false);
            
            controls.Player.MortalAdelante.performed += _ => HandleMortalAdelante();
            controls.Player.MortalAtras.performed += _ => HandleMortalAtras();
            controls.Player.MedioGiro.performed += _ => HandleMedioGiro();
            
            EventBus.OnLoseStability()
                .Do(_ =>
                {
                    controls.Disable();
                })
                .Subscribe();
        }
        private void HandleMedioGiro()
        {
            character.MakeHalfTwist();
        }

        private void HandleMortalAtras()
        {
            character.MakeBack();
        }

        private void HandleMortalAdelante()
        {
            character.MakeFront();
        }

        private void HandleCPosition(bool pressed)
        {
            character.MakeCPosition(pressed);
        }
        
        private void HandleVPosition(bool pressed)
        {
            character.MakeBPosition(pressed);

        }
        
        private void HandleAPosition(bool pressed)
        {
            character.MakeAPosition(pressed);
        }

        private void OnEnable()
        {
            controls.Enable();
        }

        private void OnDisable()
        {
            controls.Disable();
        }
    }
}
