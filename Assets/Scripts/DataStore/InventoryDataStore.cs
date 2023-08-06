using System.Threading.Tasks;
using Models;
using UniRx;
using UnityEngine;
using Utils;

namespace DataStore
{
    public class InventoryDataStore : MonoBehaviour
    {
        private static InventoryDataStore _instance;

        public static readonly BehaviorSubject<PlayerInventory> Inventory = new BehaviorSubject<PlayerInventory>(
            new PlayerInventory()
            {
                uid = "",
                coin = 0,
                rankedEnergy = 0
            });
        private void Awake()
        {
            if (_instance is null)
                _instance = this;
            else
                Destroy(this);
        }

        public static async Task UpdateDatastore()
        {
            var inventory = await ApiController.GetPlayerInventory();
            Inventory.OnNext(inventory);
        }
    }
}
