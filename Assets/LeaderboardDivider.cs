using TMPro;
using UnityEngine;
public class LeaderboardDivider : MonoBehaviour
{
    private TMP_Text text;

    public void SetupLeague(string league)
    {
        text = GetComponentInChildren<TMP_Text>();
        text.SetText($"{league} League");
    }
}
