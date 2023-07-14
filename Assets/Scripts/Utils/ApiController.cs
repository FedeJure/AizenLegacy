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
        
        public static async Task<List<PlayerPoints>> UpdatePlayerPoints(int points)
        {
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