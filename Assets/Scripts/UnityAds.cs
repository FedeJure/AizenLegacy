using UnityEngine;

public class UnityAds : MonoBehaviour { 

    [SerializeField]string playstoreGameId = "3974677";
    [SerializeField] private string ironsrcKey = "ea6bb931";
    [SerializeField]bool testMode = true;
    [SerializeField]string placementId = "banner";

    private void OnApplicationPause(bool pauseStatus)
    {
        IronSource.Agent.onApplicationPause(pauseStatus);
    }

    private void Awake()
    {
        IronSource.Agent.validateIntegration();
    }

    void Start () {
        // IronSource.Agent.init (ironsrcKey, IronSourceAdUnits.REWARDED_VIDEO, IronSourceAdUnits.INTERSTITIAL, IronSourceAdUnits.BANNER);
        // ShowBanner();
    }
    
    void ShowBanner() {
        IronSource.Agent.displayBanner();
    }
    public static void ShowInterstitialAd() {
        IronSource.Agent.showInterstitial("DefaultInterstitial");
    }
}