using System.Collections.Generic;
using System.Threading.Tasks;
using Character;
using Models;
using UnityEngine;
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
    public class ApiController
    {
      
        public static async Task<List<PlayerPoints>> GetPlayerPointsAsync()
        {
            using var www = UnityWebRequest.Get(ApiConfig.ApiUrl + "/leaderboard");
            AddHeaders(www);
            AvoidHttpsCert(www);
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
                var responseCured = $"{{ \"leaderboard\":  {response} }}";
                var playerPointsList = JsonUtility.FromJson<PlayerPointsGetResponse>(responseCured);
                tcs.SetResult(playerPointsList.leaderboard);
            }

            return await tcs.Task;
        }

        private static void AvoidHttpsCert(UnityWebRequest www)
        {
            www.certificateHandler = new VoidCertValidation();
        }

        public static async Task<PlayerPointsUpdateResponse> UpdatePlayerPoints(int quarterSomersault, int[] halfTwists, Position position)
        {
            await Task.Delay(1000);

            return new PlayerPointsUpdateResponse()
            {
                leaderboard = new List<PlayerPoints>()
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
                },
                pointVariation = 10
            };
            using var www = UnityWebRequest.Post(ApiConfig.ApiUrl + "/player/update", new Dictionary<string, string>(){
                { "quarterSomersault", quarterSomersault.ToString() },
                { "halfTwists", halfTwists.ToString() },
                { "position", position.ToString() }
            });
            AddHeaders(www);
            var tcs = new TaskCompletionSource<PlayerPointsUpdateResponse>();

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
                var playerPointsList = JsonUtility.FromJson<PlayerPointsUpdateResponse>(response);
                tcs.SetResult(playerPointsList);
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