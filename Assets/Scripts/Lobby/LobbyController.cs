using System;
using Character;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Lobby
{
    public class LobbyController : MonoBehaviour
    {
        [SerializeField] private CharacterSelector[] selectors;
        [SerializeField] private Button nextButton;
        [SerializeField] private Button backButton;
        [SerializeField] private Button playButton;
        [SerializeField] private TextMeshProUGUI nameText;
        [SerializeField] private CharacterCameraFollowView cameraView;

        private CharacterSelector currentPlayer;
        private int currentIndex = 0;

        private void Awake()
        {
            if (selectors.Length == 0) throw new Exception("Need characters selectors");
            currentPlayer = selectors[currentIndex];
            nextButton.onClick.AddListener(() => MoveSelector(1));
            backButton.onClick.AddListener(() => MoveSelector(1));
            playButton.onClick.AddListener(() => Play());
            cameraView.Target = currentPlayer.target;
            nameText.text = currentPlayer.selection.name;
        }

        private void Play()
        {
            throw new NotImplementedException();
        }

        private void MoveSelector(int move)
        {
            if (currentIndex + move >= selectors.Length)
            {
                currentPlayer = selectors[0];
                currentIndex = 0;
            }
            
            else if (currentIndex + move < 0)
            {
                currentPlayer = selectors[selectors.Length - 1];
                currentIndex = selectors.Length - 1;
            }

            else
            {
                currentIndex += move;
                currentPlayer = selectors[currentIndex];
            }

            cameraView.Target = currentPlayer.target;
            nameText.text = currentPlayer.selection.name;

        }
    }
}
