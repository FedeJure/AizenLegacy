using System;
using System.Collections.Generic;
using System.Linq;
using Models;
using TMPro;
using UniRx;
using UnityEngine;
using UnityEngine.UI;
using Utils;

namespace Character
{
    public class GameSummaryController : MonoBehaviour
    {
        public event Action onAccept = () => {};
        [SerializeField] private GameObject content;
        [SerializeField] private GameObject pointsContainer;
        [SerializeField] private TMP_Text totalPointText;

        [SerializeField] private Button okButton;
        [SerializeField] private TMP_Text coinsEarned;
        [SerializeField] private TMP_Text pointTextTemplate;
        [SerializeField] private RankingInfoView rankingInfo;


        private void Awake()
        {
            okButton.onClick.AddListener(HandleOk);
        }

        public async void Setup(List<ProcessedJumpConfig> jumps, PlayerPointsUpdateResponse playerPoints)
        {
            jumps.ForEach(jump =>
            {
                var points = Instantiate(pointTextTemplate, pointsContainer.transform);
                points.text = $"{jump.name} || {jump.points}".ToString();
            });
            
            totalPointText.SetText($"{playerPoints.pointVariation}");
            
            rankingInfo.SetupPoints(playerPoints);
        }

        private void HandleOk()
        {
            onAccept();
        }
    }
}
