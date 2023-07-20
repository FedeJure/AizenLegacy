using System.Collections.Generic;
using Models;
using UnityEngine;
using Utils;

namespace Character
{
    [RequireComponent(typeof(AsyncGameObject))]
    public class LeaderboardView: MonoBehaviour
    {
        [SerializeField] private PlayerLeaderboard playerLeaderboardTemplate;
        [SerializeField] private GameObject container;

        public void Load(List<PlayerPoints> leaderboardData)
        {
            leaderboardData.ForEach(ld =>
            {
                var playerData = Instantiate(playerLeaderboardTemplate, container.transform);
                playerData.Setup(ld);
            });
        }
    }
}