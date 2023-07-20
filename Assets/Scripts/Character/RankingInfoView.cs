using System;
using System.Linq;
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

        public async void  SetupPoints(float points)
        {
            var leaderboardData = await ApiController.UpdatePlayerPoints(points);
            var myData = leaderboardData.Find(p => p.email == FirebaseController.Instance.User.Email);
            medal.sprite = leaguesInfo.leagues.FirstOrDefault(l => l.id == myData.league).image;
            currentRankedPosition.SetText($"#{myData.leaguePosition}");
            asyncBehavior.Load();
            leaderboard.Load(leaderboardData);
        }
    }
}