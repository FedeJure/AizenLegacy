using System;
using System.Linq;
using Models;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utils;

namespace Character
{
    [RequireComponent(typeof(AsyncGameObject))]
    public class RankingInfoView: MonoBehaviour
    {
        [SerializeField] private LeaderboardView leaderboard;
        [SerializeField] private Image medal;
        [SerializeField] private TMP_Text currentRankedPosition;
        [SerializeField] private LeagueInfo leaguesInfo;
        private AsyncGameObject asyncBehavior;
        
        private void Awake()
        {
            asyncBehavior = GetComponent<AsyncGameObject>();
        }

        public void SetupPoints(PlayerPointsUpdateResponse data)
        {
            var myData = data.leaderboard.Find(p => p.email == FirebaseController.Instance.User.Email);
            medal.sprite = leaguesInfo.leagues.FirstOrDefault(l => l.id == myData.league).image;
            currentRankedPosition.SetText($"#{myData.leaguePosition}");
            asyncBehavior.Load();
            leaderboard.Load(data.leaderboard);
        }
    }
}