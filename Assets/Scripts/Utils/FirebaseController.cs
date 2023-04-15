using System;
using System.Threading.Tasks;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Extensions;
using Google;
using UnityEngine;

namespace Utils
{
    public class MockFirebaseUser: IUserInfo
    {
        public string DisplayName { get; }
        public string Email { get; }
        public Uri PhotoUrl { get; }
        public string ProviderId { get; }
        public string UserId { get; }

        public MockFirebaseUser()
        {
            DisplayName = "Mock User";
            Email = "mock@user.com";
            PhotoUrl = new Uri("https://i.pinimg.com/originals/8b/16/7a/8b167af653c2399dd93b952a48740620.jpg",
                UriKind.Absolute);
            ProviderId = "-1";
            UserId = "-2";
        }
    }
    public class FirebaseController
    {
        private static FirebaseController instance;
        public static FirebaseController Instance => instance ??= new FirebaseController();
        private FirebaseAuth auth;
        public IUserInfo User {  get; private set; }
        private static string googleWebApi = "757986856191-0cm7jt7hgbhjicmkreg9ird68vtbqaba.apps.googleusercontent.com";
        private GoogleSignInConfiguration config = new()
        {
            WebClientId = googleWebApi,
            RequestIdToken = true
        };

        private FirebaseController()
        {
        }

        public async Task InitFirebase()
        {
            #if UNITY_EDITOR
            return;
            #endif
            try
            {
                await FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
                {
                    var dependencyStatus = task.Result;
                    if (dependencyStatus == DependencyStatus.Available)
                    {
                        var app = FirebaseApp.Create(AppOptions.LoadFromJsonConfig(
                                "{\"project_info\":{\"project_number\":\"757986856191\",\"firebase_url\":\"https://aizengame-default-rtdb.firebaseio.com\",\"project_id\":\"aizengame\",\"storage_bucket\":\"aizengame.appspot.com\"},\"client\":[{\"client_info\":{\"mobilesdk_app_id\":\"1:757986856191:android:977ba1f7539a7f074390ca\",\"android_client_info\":{\"package_name\":\"com.aizen.trampoline\"}},\"oauth_client\":[{\"client_id\":\"757986856191-ndfuoh0reeq8l9hreskpq2tvghqptr3f.apps.googleusercontent.com\",\"client_type\":1,\"android_info\":{\"package_name\":\"com.aizen.trampoline\",\"certificate_hash\":\"ec4f6ab2fba2df2f5904be4ec5e697ae81503259\"}},{\"client_id\":\"757986856191-ulh1acd0vule43vtppg4bh7vhmj6tkfj.apps.googleusercontent.com\",\"client_type\":1,\"android_info\":{\"package_name\":\"com.aizen.trampoline\",\"certificate_hash\":\"83d083332ad51176b00773665044ab95c3840019\"}},{\"client_id\":\"757986856191-0cm7jt7hgbhjicmkreg9ird68vtbqaba.apps.googleusercontent.com\",\"client_type\":3}],\"api_key\":[{\"current_key\":\"AIzaSyCU3hTKDlyb_73B04SRNt97pcQPz71NJv0\"}],\"services\":{\"appinvite_service\":{\"other_platform_oauth_client\":[{\"client_id\":\"757986856191-0cm7jt7hgbhjicmkreg9ird68vtbqaba.apps.googleusercontent.com\",\"client_type\":3}]}}},{\"client_info\":{\"mobilesdk_app_id\":\"1:757986856191:android:7d47c3cdc09f4e534390ca\",\"android_client_info\":{\"package_name\":\"com.trampoline.gymnastics\"}},\"oauth_client\":[{\"client_id\":\"757986856191-as5rdqb0p6tbt9r4b7md9ra94pe6beav.apps.googleusercontent.com\",\"client_type\":1,\"android_info\":{\"package_name\":\"com.trampoline.gymnastics\",\"certificate_hash\":\"83d083332ad51176b00773665044ab95c3840019\"}},{\"client_id\":\"757986856191-0cm7jt7hgbhjicmkreg9ird68vtbqaba.apps.googleusercontent.com\",\"client_type\":3}],\"api_key\":[{\"current_key\":\"AIzaSyCU3hTKDlyb_73B04SRNt97pcQPz71NJv0\"}],\"services\":{\"appinvite_service\":{\"other_platform_oauth_client\":[{\"client_id\":\"757986856191-0cm7jt7hgbhjicmkreg9ird68vtbqaba.apps.googleusercontent.com\",\"client_type\":3}]}}}],\"configuration_version\":\"1\"}"),
                            "myFirebaseApp");

                        auth = FirebaseAuth.GetAuth(app);
                    }
                    else
                    {
                        Debug.LogError("Firebase is not available");
                    }
                });
            }
            catch (Exception e)
            {
                Debug.LogError($"{e.Message} {e.StackTrace}");
            }
        }
        
        public async Task SignInFirebaseWithGoogle()
        {
            #if UNITY_EDITOR
            User = new MockFirebaseUser();
            return;
            #endif
            GoogleSignIn.Configuration = config;
            GoogleSignIn.Configuration.UseGameSignIn = false;
            GoogleSignIn.Configuration.RequestIdToken = true;
            GoogleSignIn.Configuration.RequestEmail = true;
            GoogleSignIn.DefaultInstance.EnableDebugLogging(true);
            await GoogleSignIn.DefaultInstance.SignIn().ContinueWithOnMainThread(OnGoogleAuthFinished);
        }

        public void LogOut()
        {
            #if UNITY_EDITOR
            return;
            #endif
            auth.SignOut();
            GoogleSignIn.DefaultInstance.SignOut();
        }

        private void OnGoogleAuthFinished(Task<GoogleSignInUser> task)
        {
            if (task.IsFaulted)
            {
                Debug.Log("Failed Auth");
            }
            else if (task.IsCanceled)
            {
                Debug.Log("Auth Cancelled");
            }
            else
            {
                try
                {
                    Credential credential = GoogleAuthProvider.GetCredential(task.Result.IdToken, null);
                    auth.SignInWithCredentialAsync(credential).ContinueWithOnMainThread(response =>
                    {
                        if (response.IsCanceled)
                        {
                            Debug.LogError("SignInWithCredentialAsync was cancelled");
                            return;
                        }

                        if (response.IsFaulted)
                        {
                            Debug.LogError("SignInWithCredentialAsync fail: " + response.Exception);
                            return;
                        }

                        User = auth.CurrentUser;
                    });
                }
                catch (Exception e)
                {
                    Debug.LogError($"{e.Message} {e.StackTrace}");
                }
                
            }
        }
    }
    
}