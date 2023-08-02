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
        [SerializeField] private TMP_Text leagueText;
        private AsyncGameObject asyncBehavior;
        
        private void Awake()
        {
            asyncBehavior = GetComponent<AsyncGameObject>();
        }

        public void SetupPoints(PlayerPointsUpdateResponse data)
        {
            if (data.leaderBoard.Length == 0)
            {
                asyncBehavior.Load();
                return;
            }
            var myData = data.leaderBoard.ToList().Find(p => p.email == FirebaseController.Instance.User.Email);
            Debug.Log($"Data: {JsonUtility.ToJson(data)}");
            var leagueConfigInfo = leaguesInfo.leagues.FirstOrDefault(l => l.id == myData.league);
            medal.sprite = leagueConfigInfo.image;
            currentRankedPosition.SetText($"#{myData.leaguePosition}");
            leagueText.SetText($"{leagueConfigInfo.text} League");
            asyncBehavior.Load();
            var leaderboardPoints = data.leaderBoard.ToList();
            leaderboardPoints.Reverse();
            leaderboard.Load(leaderboardPoints);
        }
    }
}