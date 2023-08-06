using TMPro;
using UnityEngine;
using Utils;

public class InventoryController : MonoBehaviour
{
    [SerializeField] private TMP_Text coinsText;
    [SerializeField] private TMP_Text energyText;
    [SerializeField] private InventoryState inventory;
    public void OnEnable()
    {
        UpdateWallet();
    }

    async void UpdateWallet()
    {
        var wallet = await ApiController.GetPlayerWallet();
        inventory.coins = wallet.coin;
        inventory.energy = wallet.rankedEnergy;
        coinsText.SetText(wallet.coin.ToString());
        energyText.SetText(wallet.rankedEnergy.ToString());
    }
}
