using System;
using System.Security.Cryptography;
using System.Text;

namespace Utils
{
    public static class ApiConfig
    {
        private static string _AppPrivateHash = "IAJ2vR9k0rIOUq9JSojt6ea6LTWAml4b";
        public static string AppPrivateHash  
        {
            get
            {
                using var sha512 = SHA512.Create();
                var tokenBytes = Encoding.UTF8.GetBytes(_AppPrivateHash);
                var hashBytes = sha512.ComputeHash(tokenBytes);
                var hashedToken = BitConverter.ToString(hashBytes).Replace("-", "").ToLower();
                return hashedToken;
            }
        }

        public static bool MockApi = false;
#if  UNITY_EDITOR
        private static bool LocalApi = true;
#else
        private static bool LocalApi = false;
#endif
        
        public static string ApiUrl = LocalApi 
            ? "http://localhost:3000" 
            : "https://api.aizengame.tech";
    }
}