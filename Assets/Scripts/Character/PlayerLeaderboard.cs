using System.Linq;
using Models;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utils;

namespace Character
{
    public class PlayerLeaderboard: MonoBehaviour
    {
        [SerializeField] private Image icon;
        [SerializeField] private TMP_Text position;
        [SerializeField] private TMP_Text name;
        [SerializeField] private TMP_Text totalPoints;
        [SerializeField] private LeagueInfo leagueInfo;
        [SerializeField] private Image backgroundColor;
        [SerializeField] private GameObject localPlayerFrame;
        public void Setup(PlayerPoints playerPoints)
        {
            position.SetText($"#{playerPoints.leaguePosition.ToString()}");
            name.SetText(playerPoints.name);
            totalPoints.SetText(playerPoints.points.ToString());
            var league = leagueInfo.leagues.FirstOrDefault(l => l.id == playerPoints.league);
            if (league.image != null)
                icon.sprite = league.image;
            backgroundColor.color = league.color;
            if (FirebaseController.Instance.User.Email == playerPoints.email)
            {
                localPlayerFrame.SetActive(true);
                
            }
            
        }
    }
}