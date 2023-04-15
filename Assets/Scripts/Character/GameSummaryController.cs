using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Character
{
    public class GameSummaryController : MonoBehaviour
    {
        public event Action onAccept = () => {};
        [SerializeField] private GameObject content;
        [SerializeField] private GameObject pointsContainer;
        [SerializeField] private TMP_Text totalPointText;
        [SerializeField] private Image medal;
        [SerializeField] private TMP_Text currentRankedPosition;
        [SerializeField] private Button okButton;
        [SerializeField] private TMP_Text coinsEarned;

        private void Awake()
        {
            okButton.onClick.AddListener(HandleOk);
        }

        public void Setup(List<TMP_Text> points, int totalPoints)
        {
            points.ForEach(p =>
            {
                p.transform.SetParent(content.transform);
            });
            totalPointText.SetText($"{totalPoints}");
        }

        private void HandleOk()
        {
            onAccept();
        }
    }
}
