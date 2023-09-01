using System;
using Character;
using Models;
using TMPro;
using UnityEngine;
using Utils;

namespace Lobby
{
    public class ProfileSectionController: MonoBehaviour
    {
        [SerializeField] private TMP_Text userName;
        [SerializeField] private TMP_Text email;
        [SerializeField] private RankingInfoView rankingInfo;
        [SerializeField] private LeaderboardView leaderboardView;
        [SerializeField] private GameObject unrankedGameObject;
        [SerializeField] private GameObject rankedGameObject;

        private void Start()
        {
            gameObject.SetActive(false);
        }

        private void OnEnable()
        {
            unrankedGameObject.SetActive(false);
            rankedGameObject.SetActive(true);
            LoadRankingInfo();
            userName.text = FirebaseController.Instance.User.DisplayName;
            email.text = FirebaseController.Instance.User.Email;
        }

        public void Close()
        {
            gameObject.SetActive(false);
        }
        
        public void LogOut()
        {
            FirebaseController.Instance.LogOut();
            EventBus.EmitOnLogout();
        }
        
        private async void LoadRankingInfo()
        {
            try
            {
                var playerPoints = await ApiController.GetPlayerPointsAsync();
                if (playerPoints.Find(p => p.email == FirebaseController.Instance.User.Email) == null)
                {
                    unrankedGameObject.SetActive(true);
                    rankedGameObject.SetActive(false);
                    return;
                }
                rankingInfo.SetupPoints(new PlayerPointsUpdateResponse()
                {
                    leaderBoard = playerPoints.ToArray(),
                    pointVariation = 0f
                });
                leaderboardView.Load(playerPoints);
            }
            catch (Exception e)
            {
                // ignored
            }

            
        }
    }
}