// GENERATED AUTOMATICALLY FROM 'Assets/Scripts/Character/CharacterActions.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

namespace Character
{
    public class @CharacterActions : IInputActionCollection, IDisposable
    {
        public InputActionAsset asset { get; }
        public @CharacterActions()
        {
            asset = InputActionAsset.FromJson(@"{
    ""name"": ""CharacterActions"",
    ""maps"": [
        {
            ""name"": ""Player"",
            ""id"": ""9875fc0f-da75-4e87-b134-3242be9aa60d"",
            ""actions"": [
                {
                    ""name"": ""MortalAdelante"",
                    ""type"": ""Button"",
                    ""id"": ""8cf5fd19-a545-4c9b-8026-e0f410cf7710"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""MortalAtras"",
                    ""type"": ""Button"",
                    ""id"": ""5bfd4160-d566-42bc-957b-65b562373bb5"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""MedioGiro"",
                    ""type"": ""Button"",
                    ""id"": ""3bb6784a-fa4d-485d-812d-ee09400a7803"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""CPosition"",
                    ""type"": ""Value"",
                    ""id"": ""4f563e06-57df-4493-b5e0-a1400376b899"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": ""Press(pressPoint=0.1,behavior=2)""
                },
                {
                    ""name"": ""VPosition"",
                    ""type"": ""Value"",
                    ""id"": ""f17ed0df-68cb-4798-83a0-08514ec0db36"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Press(pressPoint=0.1)""
                },
                {
                    ""name"": ""APosition"",
                    ""type"": ""Value"",
                    ""id"": ""4f774ee1-500b-4190-865b-3617593bec38"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Press(pressPoint=0.1)""
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""f41df7d5-368f-4f36-872c-fd6290de2d87"",
                    ""path"": ""<Keyboard>/b"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard Controls"",
                    ""action"": ""MortalAdelante"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""63326c5e-c26a-49f6-ba89-fbdb3f88798f"",
                    ""path"": ""<Keyboard>/n"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard Controls"",
                    ""action"": ""MortalAtras"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""4d144419-996a-4ecf-af29-2f08804d6824"",
                    ""path"": ""<Keyboard>/m"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard Controls"",
                    ""action"": ""MedioGiro"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""c8e9b61f-5062-433e-9134-3aa69d82d7d2"",
                    ""path"": ""<Keyboard>/z"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard Controls"",
                    ""action"": ""CPosition"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""e7a8dbee-aac7-4616-8c0f-04075e1406ed"",
                    ""path"": ""<Keyboard>/x"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard Controls"",
                    ""action"": ""VPosition"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""0aa513c9-3f75-41cf-b52f-fb4f5a07d679"",
                    ""path"": ""<Keyboard>/c"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""Keyboard Controls"",
                    ""action"": ""APosition"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": [
        {
            ""name"": ""Keyboard Controls"",
            ""bindingGroup"": ""Keyboard Controls"",
            ""devices"": [
                {
                    ""devicePath"": ""<Keyboard>"",
                    ""isOptional"": false,
                    ""isOR"": false
                }
            ]
        }
    ]
}");
            // Player
            m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
            m_Player_MortalAdelante = m_Player.FindAction("MortalAdelante", throwIfNotFound: true);
            m_Player_MortalAtras = m_Player.FindAction("MortalAtras", throwIfNotFound: true);
            m_Player_MedioGiro = m_Player.FindAction("MedioGiro", throwIfNotFound: true);
            m_Player_CPosition = m_Player.FindAction("CPosition", throwIfNotFound: true);
            m_Player_VPosition = m_Player.FindAction("VPosition", throwIfNotFound: true);
            m_Player_APosition = m_Player.FindAction("APosition", throwIfNotFound: true);
        }

        public void Dispose()
        {
            UnityEngine.Object.Destroy(asset);
        }

        public InputBinding? bindingMask
        {
            get => asset.bindingMask;
            set => asset.bindingMask = value;
        }

        public ReadOnlyArray<InputDevice>? devices
        {
            get => asset.devices;
            set => asset.devices = value;
        }

        public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

        public bool Contains(InputAction action)
        {
            return asset.Contains(action);
        }

        public IEnumerator<InputAction> GetEnumerator()
        {
            return asset.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        public void Enable()
        {
            asset.Enable();
        }

        public void Disable()
        {
            asset.Disable();
        }

        // Player
        private readonly InputActionMap m_Player;
        private IPlayerActions m_PlayerActionsCallbackInterface;
        private readonly InputAction m_Player_MortalAdelante;
        private readonly InputAction m_Player_MortalAtras;
        private readonly InputAction m_Player_MedioGiro;
        private readonly InputAction m_Player_CPosition;
        private readonly InputAction m_Player_VPosition;
        private readonly InputAction m_Player_APosition;
        public struct PlayerActions
        {
            private @CharacterActions m_Wrapper;
            public PlayerActions(@CharacterActions wrapper) { m_Wrapper = wrapper; }
            public InputAction @MortalAdelante => m_Wrapper.m_Player_MortalAdelante;
            public InputAction @MortalAtras => m_Wrapper.m_Player_MortalAtras;
            public InputAction @MedioGiro => m_Wrapper.m_Player_MedioGiro;
            public InputAction @CPosition => m_Wrapper.m_Player_CPosition;
            public InputAction @VPosition => m_Wrapper.m_Player_VPosition;
            public InputAction @APosition => m_Wrapper.m_Player_APosition;
            public InputActionMap Get() { return m_Wrapper.m_Player; }
            public void Enable() { Get().Enable(); }
            public void Disable() { Get().Disable(); }
            public bool enabled => Get().enabled;
            public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
            public void SetCallbacks(IPlayerActions instance)
            {
                if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
                {
                    @MortalAdelante.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMortalAdelante;
                    @MortalAdelante.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMortalAdelante;
                    @MortalAdelante.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMortalAdelante;
                    @MortalAtras.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMortalAtras;
                    @MortalAtras.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMortalAtras;
                    @MortalAtras.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMortalAtras;
                    @MedioGiro.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMedioGiro;
                    @MedioGiro.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMedioGiro;
                    @MedioGiro.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMedioGiro;
                    @CPosition.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnCPosition;
                    @CPosition.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnCPosition;
                    @CPosition.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnCPosition;
                    @VPosition.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnVPosition;
                    @VPosition.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnVPosition;
                    @VPosition.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnVPosition;
                    @APosition.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnAPosition;
                    @APosition.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnAPosition;
                    @APosition.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnAPosition;
                }
                m_Wrapper.m_PlayerActionsCallbackInterface = instance;
                if (instance != null)
                {
                    @MortalAdelante.started += instance.OnMortalAdelante;
                    @MortalAdelante.performed += instance.OnMortalAdelante;
                    @MortalAdelante.canceled += instance.OnMortalAdelante;
                    @MortalAtras.started += instance.OnMortalAtras;
                    @MortalAtras.performed += instance.OnMortalAtras;
                    @MortalAtras.canceled += instance.OnMortalAtras;
                    @MedioGiro.started += instance.OnMedioGiro;
                    @MedioGiro.performed += instance.OnMedioGiro;
                    @MedioGiro.canceled += instance.OnMedioGiro;
                    @CPosition.started += instance.OnCPosition;
                    @CPosition.performed += instance.OnCPosition;
                    @CPosition.canceled += instance.OnCPosition;
                    @VPosition.started += instance.OnVPosition;
                    @VPosition.performed += instance.OnVPosition;
                    @VPosition.canceled += instance.OnVPosition;
                    @APosition.started += instance.OnAPosition;
                    @APosition.performed += instance.OnAPosition;
                    @APosition.canceled += instance.OnAPosition;
                }
            }
        }
        public PlayerActions @Player => new PlayerActions(this);
        private int m_KeyboardControlsSchemeIndex = -1;
        public InputControlScheme KeyboardControlsScheme
        {
            get
            {
                if (m_KeyboardControlsSchemeIndex == -1) m_KeyboardControlsSchemeIndex = asset.FindControlSchemeIndex("Keyboard Controls");
                return asset.controlSchemes[m_KeyboardControlsSchemeIndex];
            }
        }
        public interface IPlayerActions
        {
            void OnMortalAdelante(InputAction.CallbackContext context);
            void OnMortalAtras(InputAction.CallbackContext context);
            void OnMedioGiro(InputAction.CallbackContext context);
            void OnCPosition(InputAction.CallbackContext context);
            void OnVPosition(InputAction.CallbackContext context);
            void OnAPosition(InputAction.CallbackContext context);
        }
    }
}
