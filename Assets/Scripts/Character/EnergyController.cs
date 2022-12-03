using System;
using UniRx;
using UnityEngine;

namespace Character
{
    public class EnergyController: MonoBehaviour
    {
        [SerializeField] private RectTransform bar;

        private float maxEnergy;
        private float currentEnergy;
        private void OnEnable()
        {
            var selectedChar = SelectedCharacterRepository.Get();
            if (selectedChar != null)
                maxEnergy = selectedChar.characterStats.energy;
            currentEnergy = maxEnergy;
            EventBus.OnConsumeEnergy()
                .Subscribe(energy => { ChangeEnergy(-energy); });
            Observable.Interval(TimeSpan.FromMilliseconds(200))
                .Subscribe(_ => { ChangeEnergy(1); });
        }

        private void ChangeEnergy(float value)
        {
            currentEnergy = Math.Min(maxEnergy, Math.Max(0f, currentEnergy + value));
            //bar.localScale.Set(currentEnergy / maxEnergy, 1, 1);
            bar.LeanScaleX(currentEnergy / maxEnergy, 0.1f);
            if (currentEnergy == 0)
            {
                EventBus.EmitOnLoseStability();
            }
        }
        
        
    }
}