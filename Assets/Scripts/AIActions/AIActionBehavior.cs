using System;
using System.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

namespace AIActions
{
    public abstract class AIActionBehavior: MonoBehaviour
    {
        [SerializeField] protected Animator anim;
        [SerializeField] [CanBeNull] protected RuntimeAnimatorController customAnimator;
        [CanBeNull] private RuntimeAnimatorController _savedAnimatorController;
        private void Awake()
        {
            gameObject.SetActive(false);
        }

        public abstract Task RequestFinish();
        public abstract void StartAction();

        protected void UseSelfAnimator()
        {
            if (customAnimator is null) return;
            if (anim.runtimeAnimatorController == customAnimator) return;
            _savedAnimatorController = anim.runtimeAnimatorController;
            anim.runtimeAnimatorController = customAnimator;
        }

        protected void RecoverDefaultAnimator()
        {
            if (!(_savedAnimatorController is null))
                anim.runtimeAnimatorController = _savedAnimatorController;
        }
    }
}