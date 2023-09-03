using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Models;
using UnityEngine;
using UnityEngine.InputSystem.LowLevel;
using UnityEngine.Networking;

namespace Utils
{

    internal class VoidCertValidation : CertificateHandler
    {
        protected override bool ValidateCertificate(byte[] certificateData)
        {
            return true;
        }
    }
    public static class ApiController
    {
        
        public static async Task<bool> HelthCheck()
        {
            try
            {
                var result = Get("/healthCheck", Boolean.Parse);
                return await result;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                return false;
            }
          
        }
        public static async Task<PlayerInventory> GetPlayerInventory()
        {
            try
            {
                var result = Get("/wallet", JsonUtility.FromJson<PlayerInventory>);
                return await result;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                return null;
            }
        }
        
        public static async Task<List<PlayerPoints>> GetPlayerPointsAsync()
        {
            try
            {
                var result = Get(
                    "/player/leaderboard", 
                    JsonUtility.FromJson<PlayerPointsGetResponse>,
                    response => $"{{ \"leaderboard\":  {response} }}");
                return (await result).leaderboard;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                return null;
            }
        }

        private static void AvoidHttpsCert(UnityWebRequest www)
        {
            www.certificateHandler = new VoidCertValidation();
        }

        public static async Task<PlayerPointsUpdateResponse> UpdatePlayerPoints(PlayerPointsUpdateRequest data)
        {
            if (ApiConfig.MockApi)
            {
                await Task.Delay(1000);
                var mockLeaderBoard = new List<PlayerPoints>()
                {
                    new PlayerPoints()
                    {
                        email = "pepito@gmail.com",
                        points = 312,
                        league = "gold",
                        leaguePosition = 20,
                        name = "Federico Jure",
                        photoUrl = ""
                    },
                    new PlayerPoints()
                    {
                        email = "pepito5@gmail.com",
                        points = 310,
                        league = "gold",
                        leaguePosition = 21,
                        name = "Pedro Pepito",
                        photoUrl = ""
                    },
                    new PlayerPoints()
                    {
                        email = "pepito1@gmail.com",
                        points = 310,
                        league = "gold",
                        leaguePosition = 22,
                        name = "Pepito Uno",
                        photoUrl = ""
                    },
                    new PlayerPoints()
                    {
                        email = "mock@user.com",
                        points = 290,
                        league = "silver",
                        leaguePosition = 1,
                        name = "Federico Jure",
                        photoUrl = ""
                    },
                    new PlayerPoints()
                    {
                        email = "pepito6@gmail.com",
                        points = 280,
                        league = "silver",
                        leaguePosition = 2,
                        name = "Pepito Seis",
                        photoUrl = ""
                    },
                    new PlayerPoints()
                    {
                        email = "pepito7@gmail.com",
                        points = 277,
                        league = "wood",
                        leaguePosition = 3,
                        name = "Pepito Siete",
                        photoUrl = ""
                    },
                    new PlayerPoints()
                    {
                        email = "pepito2@gmail.com",
                        points = 250,
                        league = "wood",
                        leaguePosition = 4,
                        name = "Pepito Dos",
                        photoUrl = ""
                    }
                };
                mockLeaderBoard.Reverse();
                return new PlayerPointsUpdateResponse()
                {
                    pointVariation = 5f,
                    leaderBoard = mockLeaderBoard.ToArray(),
                };
            }

            try
            {
                var result = Post<PlayerPointsUpdateResponse>("/player/update", data);
                return await result;
            }
            catch (Exception)
            {
                return null;
            }
            
            
        }

        private static void AddHeaders(UnityWebRequest request)
        {
            request.SetRequestHeader("hash", ApiConfig.AppPrivateHash);
            request.SetRequestHeader("authorization", $"Bearer {FirebaseController.Instance.Token}");
        }

        public static async Task<CheckEnergyResponse> CheckEnergy()
        {
            try
            {
                return await Get("/energy/check", JsonUtility.FromJson<CheckEnergyResponse>);
            }
            catch (Exception)
            {
                return null;
            }

        }
        private static async Task<T> Post<T>(string endpoint, object payload)
        {
            var www = new UnityWebRequest();
            www.url = ApiConfig.ApiUrl + endpoint;
            www.method = "POST";
            www.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(JsonUtility.ToJson(payload)) );
            www.uploadHandler.contentType = "application/json";
            www.downloadHandler = new DownloadHandlerBuffer();
            AddHeaders(www);
            AvoidHttpsCert(www);
            var tcs = new TaskCompletionSource<T>();

            www.SendWebRequest();

            while (!www.isDone)
            {
                await Task.Yield();
            }

            if (www.result != UnityWebRequest.Result.Success)
            {
                var errorMessage = $"[POST | {endpoint}] Error: {www.error}";
                Debug.LogError(errorMessage);
                throw new Exception(errorMessage);
            }
            
            var response = www.downloadHandler.text;
            var playerPointsList = JsonUtility.FromJson<T>(response);
            tcs.SetResult(playerPointsList);
                
            return await tcs.Task;
        }
        private static async Task<T> Get<T>(string endpoint, Func<string, T> parser, Func<string, string> processRawResponse = null)
        {
            using var www = UnityWebRequest.Get(ApiConfig.ApiUrl + endpoint);
            AddHeaders(www);
            AvoidHttpsCert(www);
            var tcs = new TaskCompletionSource<T>();
            www.SendWebRequest();
            
            while (!www.isDone)
            {
                await Task.Yield();
            }
            if (www.result != UnityWebRequest.Result.Success)
            {
                var errorMessage = $"[GET | {endpoint}] Error: {www.error}";
                Debug.LogError(errorMessage);
                throw new Exception(errorMessage);
            }

            var textResponse = processRawResponse != null
                ? processRawResponse(www.downloadHandler.text)
                : www.downloadHandler.text;
            var response = parser(textResponse);
            tcs.SetResult(response);
            
            
            return await tcs.Task;
        }
    }
}