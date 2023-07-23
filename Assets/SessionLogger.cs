using System;
using TMPro;
using UnityEngine;
using Utils;

[RequireComponent(typeof(TMP_Text))]
public class SessionLogger : MonoBehaviour
{
    private TMP_Text log;

    private void Awake()
    {
        log = GetComponent<TMP_Text>();
    }

    public async void Login()
    {
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

    public async void GetLeaderboardInfo()
    {
        var result = await ApiController.GetPlayerPointsAsync();
        log.SetText("");
        foreach (var playerPoint in result)
        {
            log.SetText($"{log.text}PlayerPoint: {playerPoint} \n");
            Debug.Log(playerPoint);
        }
        
    }

    public void ShowLoginLog()
    {
        log.SetText("Login info: \n" +
                    $"email: {FirebaseController.Instance.User.Email} \n"+
                    $"userId: {FirebaseController.Instance.User.UserId} \n"+
                    $"token: {FirebaseController.Instance.Token} \n");
    }
}
