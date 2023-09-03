using System;
using GoogleMobileAds.Api;
using UnityEngine;

public class UnityAdsAdapter : MonoBehaviour
{
    private static UnityAdsAdapter instance;

    [SerializeField]string playstoreGameId = "3974677";
    [SerializeField] string surfacingId = "banner";
    [SerializeField]bool testMode = true;

    private string intestitialId = "ca-app-pub-6600322930699427/8539430806";
    private string bannerId = "ca-app-pub-6600322930699427/9852512478";
    
    private BannerView bannerView;
    private InterstitialAd interstitial;

    private void Awake()
    {
        instance = this;
    }

    void OnEnable () {
        try
        {
            MobileAds.Initialize(initStatus => { });
            RequestBanner();
            LoadInstertitial();
        }
        catch (Exception)
        {
        }
        
    }
    
    public void RequestBanner()
    {
        #if UNITY_ANDROID
        string adUnitId = bannerId;
        #else
        string adUnitId = "unexpected_platform";
        #endif

        // Create a 320x50 banner at the top of the screen.
        bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Top);
        AdRequest request = new AdRequest.Builder().Build();

        bannerView.LoadAd(request);
        bannerView.Show();
    }
    

    private void LoadInstertitial()
    {
        #if UNITY_ANDROID
        string adUnitId = intestitialId;
        #else
        string adUnitId = "unexpected_platform";
        #endif

        interstitial = new InterstitialAd(adUnitId);
        AdRequest request = new AdRequest.Builder().Build();
        interstitial.LoadAd(request);
    }

    public void ShowInterstitial()
    {
        if (interstitial.IsLoaded()) {
            interstitial.OnAdClosed += HandleOnAdClosed;
            interstitial.Show();
        }
        else
        {
            LoadInstertitial();
        }
    }

    private void HandleOnAdClosed(object sender, EventArgs e)
    {
        interstitial.OnAdClosed += HandleOnAdClosed;
    }

    public static UnityAdsAdapter GetInstance()
    {
        return instance;
    }
}