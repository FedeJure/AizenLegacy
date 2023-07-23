using UniRx;
using UnityEngine;

namespace Character
{
    public class CharacterInput : MonoBehaviour
    {
        public CharacterActions controls;

        public ReactiveProperty<bool> a { get; private set; }
        public ReactiveProperty<bool> b { get; private set; }
        public ReactiveProperty<bool> c { get; private set; }
        public ReactiveProperty<bool> forward { get; private set; }
        public ReactiveProperty<bool> back { get; private set; }
        public ReactiveProperty<bool> twist { get; private set; }

        private void Awake()
        {
            a = new ReactiveProperty<bool>();
            b = new ReactiveProperty<bool>();
            c = new ReactiveProperty<bool>();
            forward = new ReactiveProperty<bool>();
            back = new ReactiveProperty<bool>();
            twist = new ReactiveProperty<bool>();
        
            controls = new CharacterActions();
            controls.Player.APosition.performed += _ => a.Value = true;
            controls.Player.VPosition.performed += _ => b.Value = true;
            controls.Player.CPosition.performed += _ => c.Value = true;
            
            controls.Player.APosition.canceled += _ => a.Value = false;
            controls.Player.VPosition.canceled += _ => b.Value = false;
            controls.Player.CPosition.canceled += _ => c.Value = false;
            
            controls.Player.MortalAdelante.performed += _ => forward.Value = true;
            controls.Player.MortalAtras.performed += _ => back.Value = true;
            controls.Player.MedioGiro.performed += _ => twist.Value = true;
            
            controls.Player.MortalAdelante.canceled += _ => forward.Value = false;
            controls.Player.MortalAtras.canceled += _ => back.Value = false;
            controls.Player.MedioGiro.canceled += _ => twist.Value = false;
            
            EventBus.OnGameEnds()
                .Do(_ =>
                {
                    controls.Disable();
                })
                .Subscribe();
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
