using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Lobby
{
    [RequireComponent(typeof(Button))]
    public class RankedGameButtonController: MonoBehaviour
    {
        private Button button;
        [SerializeField] private InventoryState inventory;
        [SerializeField] private TMP_Text energy;
        private void Awake()
        {
            button = GetComponent<Button>();
        }

        private void OnEnable()
        {
            energy.SetText(inventory.energy.ToString());
            button.interactable = inventory.energy >= 1;
        }
    }
}