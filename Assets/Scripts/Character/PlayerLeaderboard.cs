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
        [SerializeField] private Color localPlayerColor;
        [SerializeField] private Image backgroundColor;
        public void Setup(PlayerPoints playerPoints)
        {
            position.SetText(playerPoints.leaguePosition);
            name.SetText(playerPoints.name);
            totalPoints.SetText(playerPoints.points.ToString());
            var sprite = leagueInfo.leagues.FirstOrDefault(l => l.id == playerPoints.league);
            if (sprite.image != null)
                icon.sprite = sprite.image;
            if (FirebaseController.Instance.User.Email == playerPoints.email)
            {
                backgroundColor.color = localPlayerColor;
            }
            
        }
    }
}