using System;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.Localization.Tables;
using UnityEngine.UI;
using Utils;

namespace Lobby
{
    public class LoginController : MonoBehaviour
    {
        [SerializeField] private GameObject spinner;
        [SerializeField] private Button login;
        [SerializeField] private GameObject errorPopup;
        [SerializeField] private TMP_Text errorMessage;

        private void OnEnable() 
        {
            login.interactable = true;
        }

        private void Awake()
        {
            gameObject.SetActive(true);
            errorPopup.SetActive(false);
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
            login.interactable = true;
            spinner.SetActive(false);
            
            if (FirebaseController.Instance.Token == "")
            {
                errorMessage.SetText(LocalizationSettings.StringDatabase.GetLocalizedString("LocalizedTable","tid_authentication_error"));
                errorPopup.SetActive(true);
                return;
            }
            if (!apiHealthCheck)
            {
                errorMessage.SetText(LocalizationSettings.StringDatabase.GetLocalizedString("LocalizedTable","tid_server_maintenance"));
                errorPopup.SetActive(true);
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
