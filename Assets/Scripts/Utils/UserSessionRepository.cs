using System;
using System.Threading.Tasks;
using JetBrains.Annotations;
using Models;
using UnityEngine;

namespace Utils
{
    public class UserSessionRepository
    {
        [CanBeNull] private UserSessionState state;
        private static UserSessionRepository _instance = null;
        public static UserSessionRepository Instance => _instance ??= new UserSessionRepository();

        private UserSessionRepository(){}

        public async Task InitSession()
        {
            try
            { 
                var wallet = await DatabaseManager.Instance.Get<PlayerWallet>("wallet");
                if (wallet == null)
                {
                     wallet = new PlayerWallet(0);
                     await DatabaseManager.Instance.Save("wallet", wallet);   
                }
                state = new UserSessionState(wallet);
            }
            catch (Exception e)
            {
                Debug.LogError(e.StackTrace);
            }
            
        }

        public UserSessionState GetCurrentSessionState()
        {
            if (state == null) throw new Exception("session not initialized. InitSession method must be called first!");
            return state;
        }
        
    }
}