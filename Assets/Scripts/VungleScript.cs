// using UnityEngine;
//
// public class VungleScript : MonoBehaviour {
//     string appID = "";
//     [SerializeField] string androidAppID = "";
//
//     private void Start()
//     {
//     #if UNITY_IPHONE
//         return;
//     #elif UNITY_ANDROID
//             appID = androidAppID;
//     #elif UNITY_WSA_10_0 || UNITY_WINRT_8_1 || UNITY_METRO
//         return;
//     #endif
//         Vungle.onInitializeEvent += () => {
//             Debug.Log("Vungle initialized");
//         };
//         Vungle.onErrorEvent += err => { Debug.LogError(err); };
//         Vungle.init(appID);
//     }
// }