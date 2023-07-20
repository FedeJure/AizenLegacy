using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Models;
using UnityEngine;
using UnityEngine.Networking;

namespace Utils
{
    public class ApiController
    {
      
        public static async Task<List<PlayerPoints>> GetPlayerPointsAsync()
        {
            using var www = UnityWebRequest.Get(ApiConfig.ApiUrl + "/leaderboard");
            AddHeaders(www);
            var tcs = new TaskCompletionSource<List<PlayerPoints>>();

            www.SendWebRequest();

            while (!www.isDone)
            {
                await Task.Yield();
            }

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(www.error);
                tcs.SetResult(null);
            }
            else
            {
                var response = www.downloadHandler.text;
                var responseCured = $"{{ \"response\":  {response} }}";
                var playerPointsList = JsonUtility.FromJson<PlayerPointsList>(responseCured);
                tcs.SetResult(playerPointsList.response);
            }

            return await tcs.Task;
        }
        
        public static async Task<List<PlayerPoints>> UpdatePlayerPoints(float points)
        {
            await Task.Delay(2000);

            return new List<PlayerPoints>()
            {
                new PlayerPoints()
                {
                    email = "pepito@gmail.com",
                    points = 312,
                    league = "gold",
                    leaguePosition = 20,
                    name = "Federico Jure"
                },
                new PlayerPoints()
                {
                    email = "pepito5@gmail.com",
                    points = 310,
                    league = "gold",
                    leaguePosition = 21,
                    name = "Pedro Pepito"
                },
                new PlayerPoints()
                {
                    email = "pepito1@gmail.com",
                    points = 310,
                    league = "gold",
                    leaguePosition = 22,
                    name = "Pepito Uno"
                },
                new PlayerPoints()
                {
                    email = "mock@user.com",
                    points = 290,
                    league = "silver",
                    leaguePosition = 1,
                    name = "Federico Jure"
                },
                new PlayerPoints()
                {
                    email = "pepito6@gmail.com",
                    points = 280,
                    league = "silver",
                    leaguePosition = 2,
                    name = "Pepito Seis"
                },
                new PlayerPoints()
                {
                    email = "pepito7@gmail.com",
                    points = 277,
                    league = "wood",
                    leaguePosition = 3,
                    name = "Pepito Siete"
                },
                new PlayerPoints()
                {
                    email = "pepito2@gmail.com",
                    points = 250,
                    league = "wood",
                    leaguePosition = 4,
                    name = "Pepito Dos"
                }
            };
            using var www = UnityWebRequest.Post(ApiConfig.ApiUrl + "/player/update", new Dictionary<string, string>(){
                { "points", points.ToString() }});
            AddHeaders(www);
            var tcs = new TaskCompletionSource<List<PlayerPoints>>();

            www.SendWebRequest();

            while (!www.isDone)
            {
                await Task.Yield();
            }

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(www.error);
                tcs.SetResult(null);
            }
            else
            {
                var response = www.downloadHandler.text;
                var responseCured = $"{{ \"response\":  {response} }}";
                var playerPointsList = JsonUtility.FromJson<PlayerPointsList>(responseCured);
                tcs.SetResult(playerPointsList.response);
            }

            return await tcs.Task;
        }

        private static void AddHeaders(UnityWebRequest request)
        {
            request.SetRequestHeader("hash", ApiConfig.AppPrivateHash);
            request.SetRequestHeader("authorization", $"Bearer {FirebaseController.Instance.Token}");
        }
    }
    
}