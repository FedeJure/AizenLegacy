using UnityEditor.Animations;
using UnityEngine;

[RequireComponent(typeof(Animator))]
public class GameSection : MonoBehaviour
{
    private string key = "first_time_playing";
    private Animator anim;

    private void Awake()
    {
        anim = GetComponent<Animator>();
    }

    private void OnEnable()
    {
        anim.enabled = false;
        // if (PlayerPrefs.HasKey(key)) return;
        // PlayerPrefs.SetInt(key, 1);
        anim.enabled = true;
    }
}
