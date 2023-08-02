using System;
using System.Collections.Generic;
using Models;
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

        [SerializeField] private Button okButton;
        [SerializeField] private CoinView coinsEarned;
        [SerializeField] private TMP_Text pointTextTemplate;
        [SerializeField] private RankingInfoView rankingInfo;


        private void Awake()
        {
            okButton.onClick.AddListener(HandleOk);
        }

        public void Setup(List<ProcessedJumpConfig> jumps, PlayerPointsUpdateResponse playerPoints)
        {
            jumps.ForEach(jump =>
            {
                var points = Instantiate(pointTextTemplate, pointsContainer.transform);
                points.text = $"{jump.name} || {jump.points}".ToString();
            });
            
            totalPointText.SetText($"{playerPoints.pointVariation}");
            
            rankingInfo.SetupPoints(playerPoints);
            coinsEarned.Setup(playerPoints.rewards);
        }

        private void HandleOk()
        {
            onAccept();
        }
    }
}
