using System;
using System.Threading.Tasks;
using Models;
using UniRx;
using UnityEngine;
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
            EventBus.OnLogout().Do(_ =>
            {
                login.interactable = true;
                gameObject.SetActive(true);
            }).Subscribe();
        }

        private void Start()
        {
            Login();
        }

        public async void Login()
        {
            login.interactable = false;
            await PerformLogin();
            spinner.SetActive(false);
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
