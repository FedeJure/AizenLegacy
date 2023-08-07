using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

namespace Character
{
    public class EnergyController: MonoBehaviour
    {
        [SerializeField] private RectTransform bar;
        [SerializeField] private JumpTracker jumpTracker;
        private List<IDisposable> disposer = new List<IDisposable>();

        private float maxEnergy;
        private float currentEnergy;
        private void OnEnable()
        {
            var selectedChar = SelectedCharacterRepository.Get();
            if (selectedChar != null)
                maxEnergy = selectedChar.characterStats.energy;
            currentEnergy = maxEnergy;
            EventBus.OnConsumeEnergy()
                .Subscribe(energy => { ChangeEnergy(-energy); }).AddTo(disposer);
            Observable.Interval(TimeSpan.FromMilliseconds(200))
                .Subscribe(_ => { ChangeEnergy(selectedChar.characterStats.energySpeedCharge); }).AddTo(disposer);
        }

        private void OnDisable()
        {
            disposer.ForEach(d => d.Dispose());
            disposer = new List<IDisposable>();
        }

        private void ChangeEnergy(float value)
        {
            currentEnergy = Math.Min(maxEnergy, Math.Max(0f, currentEnergy + value));
            bar.LeanScaleX(currentEnergy / maxEnergy, 0.1f);
            if (currentEnergy <= 0)
            {
                EventBus.EmitOnSerieFails();
            }
        }
        
        
    }
}