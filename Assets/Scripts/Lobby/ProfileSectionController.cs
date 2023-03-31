using TMPro;
using UnityEngine;
using Utils;

namespace Lobby
{
    public class ProfileSectionController: MonoBehaviour
    {
        [SerializeField] private TMP_Text userName;
        [SerializeField] private TMP_Text email;

        private void Awake()
        {
            gameObject.SetActive(false);
        }

        private void OnEnable()
        {
            userName.text = FirebaseController.Instance.User.DisplayName;
            email.text = FirebaseController.Instance.User.Email;
        }

        public void Close()
        {
            gameObject.SetActive(false);
        }
        
        public void LogOut()
        {
            FirebaseController.Instance.LogOut();
            EventBus.EmitOnLogout();
        }
    }
}