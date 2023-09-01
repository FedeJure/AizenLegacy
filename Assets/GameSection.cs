using UnityEngine;

public class GameSection : MonoBehaviour
{
    private string key = "first_time_playing";
    [SerializeField]private Animator anim;
  

    private void OnEnable()
    {
        anim.enabled = false;
        if (PlayerPrefs.HasKey(key)) return;
        PlayerPrefs.SetInt(key, 1);
        anim.enabled = true;
    }
}
