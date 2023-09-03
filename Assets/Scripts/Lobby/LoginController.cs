using System;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;
using Utils;

namespace Lobby
{
    public class LoginController : MonoBehaviour
    {
        [SerializeField] private GameObject spinner;
        [SerializeField] private Button login;

        private void OnEnable() 
        {
            login.interactable = true;
        }

        private void Awake()
        {
            gameObject.SetActive(true);
        }

        private void Start()
        {
            // Login();
        }

        public async void Login()
        {
            login.interactable = false;
            spinner.SetActive(true);
            await PerformLogin();
            var apiHealthCheck = await ApiController.HelthCheck();
            Debug.Log($"Äpi health check: {apiHealthCheck}");
            login.interactable = true;
            spinner.SetActive(false);
            
            if (FirebaseController.Instance.Token == "")
            {
                DialogController.ShowDialog(LocalizationSettings.StringDatabase.GetLocalizedString("LocalizedTable","tid_error_title"),
                    LocalizationSettings.StringDatabase.GetLocalizedString("LocalizedTable","tid_authentication_error"),
                    DialogStatus.Error);
                return;
            }
            if (!apiHealthCheck)
            {
                DialogController.ShowDialog(LocalizationSettings.StringDatabase.GetLocalizedString("LocalizedTable","tid_error_title"),
                    LocalizationSettings.StringDatabase.GetLocalizedString("LocalizedTable","tid_server_maintenance"),
                    DialogStatus.Error);
                return;
            }
            
            EventBus.EmitOnLogged();
        }

        private async Task PerformLogin()
        {
            try
            {
                await FirebaseController.Instance.InitFirebase();
                await FirebaseController.Instance.SignInFirebaseWithGoogle();
                // await UserSessionRepository.Instance.InitSession();
            }
            catch (Exception e)
            {
                Debug.LogError(e.StackTrace);
            }
            
        }
    }
}
