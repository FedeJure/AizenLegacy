using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Utils;

public class InventoryController : MonoBehaviour
{
    [SerializeField] private TMP_Text coinsText;
    [SerializeField] private TMP_Text energyText;
    public void OnEnable()
    {
        UpdateWallet();
    }

    async void UpdateWallet()
    {
        var wallet = await ApiController.GetPlayerWallet();
        coinsText.SetText(wallet.coin.ToString());
        energyText.SetText(wallet.rankedEnergy.ToString());
    }
}
