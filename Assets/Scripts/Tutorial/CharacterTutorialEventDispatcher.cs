﻿using System;
using System.Collections.Generic;
using Character;
using TMPro;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Tutorial
{
    public class CharacterTutorialEventDispatcher: MonoBehaviour
    {

        [SerializeField] private Animator charAnimator;
        [SerializeField] private Animator trampAnimator;
        [SerializeField] private CharacterInput input;

        [SerializeField] private List<string> stepMessages;

        [SerializeField] private GameObject textContainer;
        [SerializeField] private TMP_Text text;
        [SerializeField] private GameObject[] toHideOnFinish = new GameObject[0];
        [SerializeField] private GameObject successFeedback;
        [SerializeField] private GameObject failFeedback;
        
        private Queue<string> stackMessages;

        private IDisposable _holdDisposer;


        private void Awake()
        {
            stackMessages = new Queue<string>(stepMessages);
            textContainer.SetActive(false);
            successFeedback.SetActive(false);
            failFeedback.SetActive(false);
        }

        public void PressCPositionAndHold()
        {
            ShowMessage();
            StopAnimations();
            _holdDisposer?.Dispose();
            _holdDisposer = input.c.
                Where(value => value)
                .First()
                .Do(_ => ResumeAnimations())
                .SelectMany(input.c.Where(value => !value))
                .First()
                .Do(_ => Fail())
                .Subscribe();
        }

        public void PressRightOnce()
        {
            ShowMessage();
            StopAnimations();
            input.forward.
                Where(value => value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void PressRightTwice()
        {
            ShowMessage();
            StopAnimations();
            input.forward.
                Where(value => value)
                .Take(2)
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void PressAPositionAndHold()
        {
            ShowMessage();
            StopAnimations();
            _holdDisposer?.Dispose();
            _holdDisposer = input.a.
                Where(value => value)
                .First()
                .Do(_ => ResumeAnimations())
                .SelectMany(input.a.Where(value => !value))
                .First()
                .Do(_ => Fail())
                .Subscribe();
        }

        public void PressLeftOnce()
        {
            ShowMessage();
            StopAnimations();
            input.back.
                Where(value => value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void PressTwistTwiceAndRemoveHold()
        {
            ShowMessage();
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
            ShowMessage();
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
            ShowMessage();
            StopAnimations();
            _holdDisposer?.Dispose();
            input.c.
                Where(value => !value)
                .First()
                .DoOnCompleted(ResumeAnimations)
                .Subscribe();
        }

        public void SuccessTutorial()
        {
            HideUi();
            successFeedback.SetActive(true);
        }

        private void HideUi()
        {
            foreach (var o in toHideOnFinish) { o.SetActive(false); }
        }

        public void ShowMessage()
        {
            if (stackMessages.Count <= 0) return;
            textContainer.SetActive(true);
             text.text = stackMessages.Dequeue();
        }

        public void DismissMessage()
        {
            textContainer.SetActive(false);
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
            DismissMessage();
        }

        private void Fail()
        {
            HideUi();
            failFeedback.SetActive(true);
        }

        public void GoToHome()
        {
            SceneManager.LoadSceneAsync((int)Scenes.Main);
        }
    }
}