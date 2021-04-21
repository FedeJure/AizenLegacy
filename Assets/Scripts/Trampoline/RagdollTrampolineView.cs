using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using Utils;

namespace Trampoline
{
    public class RagdollTrampolineView : MonoBehaviour
    {
        [SerializeField] private Transform topLimit;
        private int maxTimes = 10;
        private readonly float initialForce = 200;
        private float force;
        private int times = 0;
        private bool enable = false;
        private bool canExpulse = true;
        
        private List<IDisposable> disposer = new List<IDisposable>();
        private ComponentGetter getter;

        private RagdollController target;

        private void Awake()
        {
            force = initialForce;
            getter = new ComponentGetter();
            EventBus.OnGameplayEnd()
                .Do(_ => ResetState())
                .Subscribe()
                .AddTo(disposer);
            
            EventBus.OnLoseStability()
                .Do(_ => enable = true)
                .Subscribe()
                .AddTo(disposer);
        }

        private void OnTriggerStay(Collider other)
        {
            if (!enable || other.transform.position.y >= topLimit.position.y - 0.4f) return;
            if (times <= maxTimes )
            {
                target?.ExpulseWithForce(force);
                force /= 2;
                canExpulse = false;
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (target == null || target.gameObject != other.gameObject || !enable) return;
            canExpulse = true;
        }    

        private void OnTriggerEnter(Collider other)
        {
            if (!enable) return;
            if (target == null) getter.TryGetComponent(other.gameObject, out target);
            if (target == null) return;
            times++;
        }

        private void ResetState()
        {
            target = null;
            enable = false;
            force = initialForce;
            canExpulse = true;
            times = 0;
        }

        private void OnDestroy()
        {
            disposer.ForEach(d => d.Dispose());
        }
    }
}