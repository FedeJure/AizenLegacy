using System;
using System.Collections.Generic;
using Character;
using UniRx;
using UnityEngine;

namespace Tutorial
{
    public class CharacterTutorialEventDispatcher: MonoBehaviour
    {

        [SerializeField] private Animator charAnimator;
        [SerializeField] private Animator trampAnimator;
        [SerializeField] private CharacterInput input;

        [SerializeField] private List<string> stepMessages;
        
        private Stack<string> stackMessages;

        private IDisposable _holdDisposer;


        private void Start()
        {
            stackMessages = new Stack<string>(stepMessages);
        }

        public void PressCPositionAndHold()
        {
            Debug.Log("press C and hold");
            StopAnimations();
            _holdDisposer?.Dispose();
            _holdDisposer = input.c.
                Where(value => value)
                .First()
                .Do(_ => ResumeAnimations())
                .SelectMany(input.c.Where(value => !value))
                .First()
                .DoOnCompleted(Fail)
                .Subscribe();
        }

        public void PressRightOnce()
        {
            Debug.Log("press Right once");
            StopAnimations();
            input.forward.
                Where(value => value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void PressRightTwice()
        {
            Debug.Log("press Right twice");
            StopAnimations();
            input.forward.
                Where(value => value)
                .Take(2)
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void PressAPositionAndHold()
        {
            Debug.Log("press A and hold");
            StopAnimations();
            _holdDisposer?.Dispose();
            _holdDisposer = input.a.
                Where(value => value)
                .First()
                .Do(_ => ResumeAnimations())
                .SelectMany(input.a.Where(value => !value))
                .First()
                .DoOnCompleted(Fail)
                .Subscribe();
        }

        public void PressLeftOnce()
        {
            Debug.Log("press left once");
            StopAnimations();
            input.back.
                Where(value => value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void PressTwistTwiceAndRemoveHold()
        {
            Debug.Log("press twist twice and remove hold");
            StopAnimations();
            _holdDisposer?.Dispose();
            input.twist.
                Where(value => value)
                .Take(2)
                .SelectMany(input.a)
                .Where(value => !value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void PressTwistAndRemoveHold()
        {
            Debug.Log("press twist and remove hold");
            StopAnimations();
            _holdDisposer?.Dispose();
            input.twist.
                Where(value => value)
                .First()
                .SelectMany(input.c)
                .Where(value => !value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void RemoveCHold()
        {
            Debug.Log("removeCHold");
            StopAnimations();
            _holdDisposer?.Dispose();
            input.c.
                Where(value => !value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        private void StopAnimations()
        {
            charAnimator.speed = 0;
            trampAnimator.speed = 0;
        }

        private void ResumeAnimations()
        {
            charAnimator.speed = 1;
            trampAnimator.speed = 1;
        }

        private void Fail()
        {
            Debug.Log("FAILED!");
        }
    }
}