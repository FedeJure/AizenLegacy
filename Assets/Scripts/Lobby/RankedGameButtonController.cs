using DataStore;
using TMPro;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

namespace Lobby
{
    [RequireComponent(typeof(Button))]
    public class RankedGameButtonController: MonoBehaviour
    {
        private Button button;
        [SerializeField] private TMP_Text energy;
        private void Awake()
        {
            button = GetComponent<Button>();

            InventoryDataStore.Inventory.Do(data =>
            {
                energy.SetText(data.rankedEnergy.ToString());
                button.interactable = data.rankedEnergy >= 1;
            }).Subscribe().AddTo(this);
        }
    }
}