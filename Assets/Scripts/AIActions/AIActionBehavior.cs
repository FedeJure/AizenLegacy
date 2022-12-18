using System;
using System.Threading.Tasks;
using UnityEngine;

namespace AIActions
{
    public abstract class AIActionBehavior: MonoBehaviour
    {
        private void Awake()
        {
            gameObject.SetActive(false);
        }

        public abstract Task RequestFinish();
        public abstract void StartAction();
    }
}