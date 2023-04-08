using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Lobby
{
    public class LobbyController : MonoBehaviour
    {
        private List<CharacterSelector> selectors;
        [SerializeField] private Button nextButton;
        [SerializeField] private Button backButton;
        [SerializeField] private Button playButton;
        [SerializeField] private Button tutorialButton;
        [SerializeField] private TextMeshProUGUI nameText;
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
            nameText.text = currentPlayer.selection.characterName;
            SelectedCharacterRepository.Set(currentPlayer.selection);
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
            nameText.text = currentPlayer.selection.name;
            SelectedCharacterRepository.Set(currentPlayer.selection);
        }
    }
}
