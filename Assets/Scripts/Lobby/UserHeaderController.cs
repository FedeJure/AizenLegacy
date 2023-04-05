using System;
using UnityEngine;
using UnityEngine.UI;
using Utils;

namespace Lobby
{
    public class UserHeaderController: MonoBehaviour
    {
        [SerializeField] private RawImage avatar;
        private async void OnEnable()
        {
            try
            {
                var user = FirebaseController.Instance.User;
                avatar.texture = await ImageUtils.GetTexture(user.PhotoUrl.AbsoluteUri);
            }
            catch (Exception e)
            {
                Debug.LogError(e);  
            }
        }
    }
}