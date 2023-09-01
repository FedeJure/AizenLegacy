using System;
using System.Collections.Generic;
using System.Linq;
using UniRx;
using UnityEngine;
using UnityEngine.UI;

struct SoundConfig
{
    public string id;
    public float value;
}
public class SoundController : MonoBehaviour
{
    private static ReactiveProperty<List<SoundConfig>> configs = new ReactiveProperty<List<SoundConfig>>(new List<SoundConfig>());

    [SerializeField] private string id = "";
    [SerializeField] private Slider slider;
    [SerializeField] private Toggle toggle;
    [SerializeField] private AudioSource source;

    private void Awake()
    {
        if (slider != null && toggle != null)
        {
            var defaultToggleValue = Convert.ToBoolean(PlayerPrefs.GetInt($"{id}-sound-toggle", Convert.ToInt32(toggle.isOn)));
            var defaultSliderValue = PlayerPrefs.GetFloat($"{id}-sound-value", slider.value);
            slider.SetValueWithoutNotify(defaultSliderValue);
            toggle.SetIsOnWithoutNotify(defaultToggleValue);
            configs.Value.Add(new SoundConfig
            {
                id = id,
                value = toggle.isOn ? 0 : slider.value
            });
            configs.SetValueAndForceNotify(configs.Value);
            slider.onValueChanged.AddListener(OnSliderChange);
            toggle.onValueChanged.AddListener(OnToggleChange);
        }
        if (source != null)
        {
            configs.Do(UpdateVolume)
                .Subscribe().AddTo(gameObject);
        }
    }


    private void UpdateVolume(List<SoundConfig> list)
    {
        try
        {
            var newConfig = list.Find(c => c.id == id);
            if (newConfig.id != id) return;
            source.volume = newConfig.value;
        }
        catch (Exception _)
        {
            // ignored
        }
    }

    private void OnDestroy()
    {
        if (slider == null || toggle == null) return;
        slider.onValueChanged.RemoveListener(OnSliderChange);
        toggle.onValueChanged.RemoveListener(OnToggleChange);
    }

    private void OnSliderChange(float value)
    {
        PlayerPrefs.SetFloat($"{id}-sound-value", value);
        configs.SetValueAndForceNotify(configs.Value.Select(c =>
        {
            if (c.id != id) return c;
            return new SoundConfig()
            {
                id = id,
                value = value
            };
        }).ToList());
    }

    private void OnToggleChange(bool value)
    {
        PlayerPrefs.SetInt($"{id}-sound-toggle", Convert.ToInt32(value));
        configs.SetValueAndForceNotify(configs.Value.Select(c =>
        {
            if (c.id != id) return c;
            return new SoundConfig()
            {
                id = id,
                value = value ? 0 : slider.value
            };
        }).ToList());
    }
    
    
}
