using System;
using System.Collections.Generic;
using System.Linq;
using Models;
using UnityEngine;
using Utils;

namespace Character
{
    [RequireComponent(typeof(AsyncGameObject))]
    public class LeaderboardView: MonoBehaviour
    {
        [SerializeField] private PlayerLeaderboard playerLeaderboardTemplate;
        [SerializeField] private LeaderboardDivider dividerTemplate;
        [SerializeField] private RectTransform container;
        [SerializeField] private RectTransform viewport;
        [SerializeField] private LeagueInfo leaguesInfo;
        private AsyncGameObject asyncBehavior;
        private List<PlayerLeaderboard> created = new List<PlayerLeaderboard>();

        private void Awake()
        {
            asyncBehavior = GetComponent<AsyncGameObject>();
        }

        public void Load(List<PlayerPoints> leaderboardData)
        {
            var lastLeague = "";
            var alreadyCreatedChilds = container.GetComponentsInChildren<Transform>();
            foreach (var componentsInChild in alreadyCreatedChilds)
            {
                if (componentsInChild == container || componentsInChild == null) continue;
                DestroyImmediate(componentsInChild.gameObject);
            }
            created = new List<PlayerLeaderboard>();
            leaderboardData.ForEach(ld =>
            {
                if (lastLeague != "" && lastLeague != ld.league)
                {
                    var divider = Instantiate(dividerTemplate, container.transform);
                    var league = leaguesInfo.leagues.FirstOrDefault(l => l.id == ld.league).text;
                    divider.SetupLeague(league);
                }
                lastLeague = ld.league;
                var playerData = Instantiate(playerLeaderboardTemplate, container.transform);
                playerData.Setup(ld);
                created.Add(playerData);
            });
            Invoke("SetScrollOnCenter", 0.1f);
            asyncBehavior.Load();
        }

        private void SetScrollOnCenter()
        {
            if (created.Count == 0 ) return;
            var middleComponent = created[created.Count / 2].GetComponent<RectTransform>();
            var lastComponent = created.Last().GetComponent<RectTransform>();
            container.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, Math.Abs(lastComponent.anchoredPosition.y) + lastComponent.rect.height); 
            var centerPosition = middleComponent.anchoredPosition;
            if (Math.Abs(centerPosition.y) >= viewport.rect.height - middleComponent.rect.height)
                container.anchoredPosition = new Vector2(container.anchoredPosition.x, centerPosition.y/-2);
        }
    }
}