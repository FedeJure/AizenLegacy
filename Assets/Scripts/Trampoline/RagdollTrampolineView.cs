﻿using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Trampoline
{
    public class RagdollTrampolineView : MonoBehaviour
    {
        [SerializeField] private int maxTimes = 3;
        [SerializeField] private TrampolineView tramp;
        private float force = 1000;
        private int times = 0;
        private bool enable = false;
        
        private List<IDisposable> disposer = new List<IDisposable>();
 

        private void OnEnable()
        {
            enable = false;
            EventBus.OnLoseStability()
                .Do(_ =>
                {
                    enable = true;
                    tramp.ChangeFollowTarget(GameplayContext.GetInstance().ragdollPelvisRbody.transform);
                })
                .Subscribe()
                .AddTo(disposer);
        }

        private void OnTriggerStay(Collider other)
        {
            if (GameplayContext.GetInstance().ragdollPelvisRbody.gameObject.GetHashCode() != other.gameObject.GetHashCode() || !enable || other.transform.position.y > transform.position.y -0.5f) return;
            GameplayContext.GetInstance().ragdollPelvisRbody.AddForce(Random.Range(0, force/2), force, Random.Range(-force/2, force/2), ForceMode.Impulse);
            GameplayContext.GetInstance().ragdollPelvisRbody.AddForce(0, -GameplayContext.GetInstance().ragdollPelvisRbody.velocity.y, 0, ForceMode.Force);
        }

        private void OnTriggerExit(Collider other)
        {
            if (GameplayContext.GetInstance().ragdollPelvisRbody.gameObject.GetHashCode() != other.gameObject.GetHashCode() || !enable) return;
            if (enable)
            {
                force -= 10;
            }
            if (times >= maxTimes) force = 0;
        }    

        private void OnTriggerEnter(Collider other)
        {
            if (GameplayContext.GetInstance().ragdollPelvisRbody.gameObject.GetHashCode() != other.gameObject.GetHashCode() || !enable) return;
            times++;
        }

        private void OnDisable()
        {
            disposer.ForEach(d => d.Dispose());
        }
    }
}