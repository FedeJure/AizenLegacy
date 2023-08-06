using Character;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfo : MonoBehaviour
{
    [SerializeField] private Button openButton;
    [SerializeField] private GameObject content;
    [SerializeField] private TMP_Text maxHeight;
    [SerializeField] private TMP_Text energy;
    [SerializeField] private TMP_Text energyRecovery;
    
    private void Awake()
    {
        content.SetActive(false);
        openButton.onClick.AddListener(() =>
        {
            content.SetActive(!content.activeSelf);
        });
        InitStats(SelectedCharacterRepository.Get()?.characterStats);
        SelectedCharacterRepository.OnChange += () =>
        {
            InitStats(SelectedCharacterRepository.Get()?.characterStats);
        };
    }

    private void InitStats(CharacterStat stats)
    {
        maxHeight.text = stats.height.ToString();
        energy.text = stats.energy.ToString();
        energyRecovery.text = stats.energySpeedCharge.ToString();
    }

    public void Close()
    {
        content.SetActive(false);
    }
}
