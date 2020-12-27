﻿using UnityEngine;

namespace Character
{
    public class CharacterInput : MonoBehaviour
    {
        public CharacterActions controls;
        [SerializeField] private CharacterView character;

        private void Awake()
        {
            controls = new CharacterActions();
            controls.Player.CPosition.performed += _ => HandleCPosition();
            controls.Player.VPosition.performed += _ => HandleVPosition();
            controls.Player.APosition.performed += _ => HandleAPosition();
            
            controls.Player.MortalAdelante.performed += _ => HandleMortalAdelante();
            controls.Player.MortalAtras.performed += _ => HandleMortalAtras();
            controls.Player.MedioGiro.performed += _ => HandleMedioGiro();
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

        private void HandleCPosition()
        {
            character.MakeCPosition();
        }
        
        private void HandleVPosition()
        {
            character.MakeBPosition();

        }
        
        private void HandleAPosition()
        {
            character.MakeAPosition();

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
