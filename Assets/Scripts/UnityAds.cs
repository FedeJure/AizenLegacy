using UnityEngine;
using UnityEngine.Advertisements;

public class UnityAds : MonoBehaviour { 

    [SerializeField]string playstoreGameId = "3974677";
    [SerializeField]bool testMode = true;

    void Start () {
        Advertisement.Initialize (playstoreGameId, testMode);
    }
}