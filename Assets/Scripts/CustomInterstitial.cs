using UnityEngine;

public class CustomInterstitial : MonoBehaviour
{
    [SerializeField] private GameObject content;
    private static CustomInterstitial _instance;

    private float lastTimeShow = 0;
    private const float timeToShow = 60;
    private int allowedTimesToShow = 3;
    private void Awake()
    {
        _instance = this;
        content.SetActive(false);
    }

    private void _OpenCustomInterstitial()
    {
        if (allowedTimesToShow <= 0 || lastTimeShow + timeToShow >= Time.time) return;
        lastTimeShow = Time.time;
        _instance.content.SetActive(true);
        allowedTimesToShow--;
    }
    public static void TryOpenCustomInterstitial()
    {
        _instance._OpenCustomInterstitial();
    }

    public void NavigateToPlaystore(string package)
    {
        Application.OpenURL("market://details?id=" + package);
        content.SetActive(false);
    }
}
