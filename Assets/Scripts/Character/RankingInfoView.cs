using System;
using UnityEngine;
using Utils;

namespace Character
{
    [RequireComponent(typeof(AsyncGameObject))]
    public class RankingInfoView: MonoBehaviour
    {
        [SerializeField] private LeaderboardView leaderboard;
        private AsyncGameObject asyncBehavior;
        
        private void Awake()
        {
            asyncBehavior = GetComponent<AsyncGameObject>();
        }

        public async void  SetupPoints(float points)
        {
            var leaderboardData = await ApiController.UpdatePlayerPoints(points);
            asyncBehavior.Load();
        }
    }
}