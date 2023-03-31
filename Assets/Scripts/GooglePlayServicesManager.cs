// using System;
// using System.Threading.Tasks;
// using GooglePlayGames;
// using GooglePlayGames.BasicApi;
// using UniRx;
// using Unity.Services.Core;
// using UnityEngine;
// using UnityEngine.SocialPlatforms;
//
// public class LoginPayload
// {
//     public bool status;
//     public string message = "";
// }
//
// public class GooglePlayServicesManager : MonoBehaviour
// {
//     public static IObservable<LoginPayload> Login()
//     {
//         // #if UNITY_EDITOR
//         // return Observable.Return(true);       
//         // #endif
//         var subject = new Subject<LoginPayload>();
//             
//         try
//         {
//             if (PlayGamesPlatform.Instance.IsAuthenticated())
//             {
//                 return  Observable.Return(new LoginPayload {message = "Already Authenticated",  status = true});
//             }
//             PlayGamesPlatform.Instance.Authenticate(sucess =>
//             {
//                 try
//                 {
//                     subject.OnNext(new LoginPayload {message = sucess ? "Login success" : "Login Fail",  status = sucess});
//                 }
//                 catch (Exception e)
//                 {
//                     subject.OnNext(new LoginPayload {message = $"{e.Message} || {e.StackTrace}",  status = false});
//                 }
//             });
//         }
//         catch (Exception e)
//         {
//             subject.OnNext(new LoginPayload {message = $"{e.Message} || {e.StackTrace}",  status = false});
//         }
//             
//             
//         return subject;
//     }
//
//     public static ILocalUser GetLocalUser()
//     {
//         return Social.localUser;
//     }
//         
//     public static async Task InitializePlayGamesLogin()
//     {
//         var config = new PlayGamesClientConfiguration.Builder()
//             .RequestServerAuthCode(false)
//             .RequestIdToken()
//             .Build();
//         PlayGamesPlatform.InitializeInstance(config);
//         PlayGamesPlatform.DebugLogEnabled = true;
//         PlayGamesPlatform.Activate();
//         await UnityServices.InitializeAsync();
//     }
//
// }