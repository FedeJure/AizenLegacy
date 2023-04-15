using System;
using TMPro;
using UniRx;
using UnityEngine;

namespace Character
{
    public class PointsManager : MonoBehaviour
    {
        private int _totalPoints = 0;

        [SerializeField] private GameObject pointsContainer;
        [SerializeField] private Animator anim;
        [SerializeField] private TMP_Text totalPointsText;
        [SerializeField] private TMP_Text floatingPoint;
        [SerializeField] private TMP_Text pointTextTemplate;
        
        private int AddPointHash = Animator.StringToHash("addPoint");

        private JumpConfig? lastConfig;
        private int totalPoints = 0;

        private void Start()
        {
            EventBus.OnJumpData()
                .Do(j =>
                {
                    floatingPoint.text = $"+{j.points}";
                    lastConfig = j;
                    floatingPoint.transform.parent.gameObject.SetActive(true);
                    anim.SetTrigger(AddPointHash);
                    
                }).Subscribe().AddTo(this);
            floatingPoint.transform.parent.gameObject.SetActive(false);
        }

        public void UpdatePointsBoard()
        {
            if (lastConfig == null) return;
            floatingPoint.transform.parent.gameObject.SetActive(false);
            var points = Instantiate(pointTextTemplate, pointsContainer.transform);
            points.text = $"{lastConfig.Value.name} - {lastConfig.Value.points}".ToString();
            totalPoints += lastConfig.Value.points;
            totalPointsText.text = totalPoints.ToString();
        }
    }
}
