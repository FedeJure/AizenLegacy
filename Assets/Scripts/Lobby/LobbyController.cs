using System;
using System.Collections.Generic;
using System.Linq;
using DataStore;
using UnityEngine;
using UnityEngine.UI;
using Utils;

namespace Lobby
{
    public class LobbyController : MonoBehaviour
    {
        private List<CharacterSelector> selectors;
        [SerializeField] private Button nextButton;
        [SerializeField] private Button backButton;
        [SerializeField] private LobbyCamera cameraView;

        private CharacterSelector currentPlayer;
        private int currentIndex = 0;

        private void Awake()
        {
            selectors = GetComponentsInChildren<LobbyCharacter>().Select(c => c.CharacterLobbySelector).ToList();
            if (selectors.Count == 0) throw new Exception("Need characters selectors");
            currentPlayer = selectors[currentIndex];
            nextButton.onClick.AddListener(() => MoveSelector(1));
            backButton.onClick.AddListener(() => MoveSelector(-1));
            cameraView.SetupTarget(currentPlayer.target);
            SelectedCharacterRepository.Set(currentPlayer.selection);
        }

        private void OnEnable()
        {
            EventBus.EmitEnterLobby();
            CheckEnergy();
        }

        private void OnDisable()
        {
            CancelInvoke("CheckEnergy");
        }

        private async void CheckEnergy()
        {
            var energyUpdated =  await ApiController.CheckEnergy();
            Invoke("CheckEnergy", (float)energyUpdated.nextUpdateOnMillis / 1000);
            await InventoryDataStore.UpdateDatastore();
        }

        public void Play()
        {
            GameSceneManager.GetInstance().LoadGamePlayScene();
        }
        public void PlayRenked()
        {
            GameSceneManager.GetInstance().LoadRankedGameplayScene();
        }

        public void Tutorial()
        {
            GameSceneManager.GetInstance().LoadTutorialScene();
        }

        private void MoveSelector(int move)
        {
            if (currentIndex + move >= selectors.Count)
            {
                currentPlayer = selectors[0];
                currentIndex = 0;
            }
            
            else if (currentIndex + move < 0)
            {
                currentPlayer = selectors[selectors.Count - 1];
                currentIndex = selectors.Count - 1;
            }

            else
            {
                currentIndex += move;
                currentPlayer = selectors[currentIndex];
            }
            cameraView.SetupTarget(currentPlayer.target);
            SelectedCharacterRepository.Set(currentPlayer.selection);
        }
    }
}
