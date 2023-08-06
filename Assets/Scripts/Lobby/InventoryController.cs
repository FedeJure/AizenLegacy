using DataStore;
using TMPro;
using UnityEngine;
using UniRx;

public class InventoryController : MonoBehaviour
{
    [SerializeField] private TMP_Text coinsText;
    [SerializeField] private TMP_Text energyText;

    private void Awake()
    {
        InventoryDataStore.Inventory.Do(data =>
        {
            coinsText.SetText(data.coin.ToString());
            energyText.SetText(data.rankedEnergy.ToString());
        }).Subscribe();
    }
}
