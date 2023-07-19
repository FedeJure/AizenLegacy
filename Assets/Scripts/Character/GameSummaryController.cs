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
            
            totalPointText.SetText(
                $"{jumps.Select(j => j.points).Aggregate(0f, (a,b) => a+b)}"
            );
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
