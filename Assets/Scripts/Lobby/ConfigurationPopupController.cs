using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.Localization.Settings;

namespace Lobby
{
    public class ConfigurationPopupController: MonoBehaviour
    {
        [SerializeField] private TMP_Dropdown languageDropdown;

        private List<Locale> locales;
        private void Awake()
        {
            locales = LocalizationSettings.Instance.GetAvailableLocales().Locales;
            languageDropdown.AddOptions(locales.Select(l => l.LocaleName).ToList());
            languageDropdown.value = locales.FindIndex(l => l.name == LocalizationSettings.Instance.GetSelectedLocale().name);
            languageDropdown.onValueChanged.AddListener(HandleChange);
        }

        private void HandleChange(int index)
        {
            LocalizationSettings.Instance.SetSelectedLocale(locales[index]);
        }
    }
}