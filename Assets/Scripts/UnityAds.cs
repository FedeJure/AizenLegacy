using System.Collections;
using UnityEngine;
using UnityEngine.Advertisements;

public class UnityAds : MonoBehaviour { 

    [SerializeField]string playstoreGameId = "3974677";
    [SerializeField]bool testMode = true;
    [SerializeField]string placementId = "banner";

    void Start () {
        Advertisement.Initialize (playstoreGameId, testMode);
        StartCoroutine(ShowBannerWhenInitialized());
    }
    
    IEnumerator ShowBannerWhenInitialized () {
        while (!Advertisement.isInitialized) {
            yield return new WaitForSeconds(0.5f);
        }
        Debug.Log("Init Bannvungler");
        Advertisement.Banner.SetPosition(BannerPosition.TOP_CENTER);
        Advertisement.Banner.Show (placementId);
    }
    public static void ShowInterstitialAd() {
        if (Advertisement.IsReady()) {
            Advertisement.Show();
        } 
        else {
            Debug.Log("Interstitial ad not ready at the moment! Please try again later!");
        }
    }
}