using System;
using UnityEngine;

public class CustomInterstitial : MonoBehaviour
{
    [SerializeField] private GameObject content;
    private static CustomInterstitial _instance;

    private readonly double timeOfPeriod = TimeSpan.FromDays(2).TotalMilliseconds;
    private int maxShowsPerPeriod = 1;

    private string timeKey = "custom_interstitial_time";
    private string countKey = "custom_interstitial_count";
    private void Awake()
    {
        _instance = this;
        content.SetActive(false);
    }

    private void _OpenCustomInterstitial()
    {
        if (!PlayerPrefs.HasKey(timeKey)) PlayerPrefs.SetInt(timeKey, DateTime.Now.Millisecond);
        if (!PlayerPrefs.HasKey(countKey)) PlayerPrefs.SetInt(countKey, maxShowsPerPeriod);
        var currentCount = PlayerPrefs.GetInt(countKey);
        if (currentCount > 0)
        {
            PlayerPrefs.SetInt(countKey, PlayerPrefs.GetInt(countKey) - 1);
            _instance.content.SetActive(true);
            return;
        }

        double lastTimeRefresh = PlayerPrefs.GetInt(timeKey);


        if (lastTimeRefresh + timeOfPeriod >= DateTime.Now.Millisecond) return;
        PlayerPrefs.SetInt(timeKey, DateTime.Now.Millisecond);
        PlayerPrefs.SetInt(timeKey, maxShowsPerPeriod);
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
