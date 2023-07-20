using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UniRx;
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
        [SerializeField] private TMP_Text pointTextTemplate;
        [SerializeField] private RankingInfoView rankingInfo;


        private void Awake()
        {
            okButton.onClick.AddListener(HandleOk);
        }

        public void Setup(List<ProcessedJumpConfig> jumps)
        {
            jumps.ForEach(jump =>
            {
                var points = Instantiate(pointTextTemplate, pointsContainer.transform);
                points.text = $"{jump.name} || {jump.points}".ToString();
            });
            var points = jumps.Select(j => j.points).Aggregate(0f, (a, b) => a + b);
            totalPointText.SetText($"{points}");
            
            rankingInfo.SetupPoints(points);
        }

        private void HandleOk()
        {
            onAccept();
        }
    }
}
