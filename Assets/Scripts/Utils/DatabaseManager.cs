using System;
using System.Threading.Tasks;
using Firebase.Database;
using JetBrains.Annotations;
using UnityEngine;

namespace Utils
{
    public class DatabaseManager
    {
        private DatabaseReference db;
        private DatabaseManager()
        {
            db = FirebaseDatabase.GetInstance("https://aizengame-default-rtdb.firebaseio.com").RootReference;
        }

        public Task Save<T>(string collectionName, T data)
        {
            var userId = FirebaseController.Instance.User.UserId;
            if (string.IsNullOrEmpty(userId)) throw new Exception("the user must be Authenticated");
            return db.Child(collectionName).Child(FirebaseController.Instance.User.UserId).SetValueAsync(JsonUtility.ToJson(data));
        }
        
        [CanBeNull]
        public async Task<T> Get<T>(string collectionName)
        {
            var userId = FirebaseController.Instance.User.UserId;
            if (string.IsNullOrEmpty(userId)) throw new Exception("the user must be Authenticated");
            var result = await db.Child(collectionName).Child(FirebaseController.Instance.User.UserId).GetValueAsync();
            Debug.Log($"AAA {result.Value}");
            return result.Value == null ? default : JsonUtility.FromJson<T>(result.Value.ToString());
        }
        
        

        private static DatabaseManager _instance = null;
        public static DatabaseManager Instance => _instance ??= new DatabaseManager();
    }
}