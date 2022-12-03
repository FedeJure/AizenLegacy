﻿using System;
using UniRx;

public static class EventBus
{
        static ISubject<Unit> onPositionStarted = new Subject<Unit>();
        static ISubject<Unit> onPositionEnded = new Subject<Unit>();
        static ISubject<Unit> onEnterTrampoline = new Subject<Unit>();
        static ISubject<Unit> onExitTrampoline = new Subject<Unit>();
        static ISubject<Unit> onSideChange = new Subject<Unit>();
        static ISubject<Unit> onLoseStability = new Subject<Unit>();
        static ISubject<Unit> onGameplayEnd = new Subject<Unit>();
        static ISubject<Unit> onGameplayStart = new Subject<Unit>();
        static ISubject<float> onConsumeEnergy = new Subject<float>();

        public static IObservable<Unit> OnPositionStarted()
        {
                return onPositionStarted;
        }
        
        public static IObservable<Unit> OnPositionEnded()
        {
                return onPositionEnded;
        }

        public static IObservable<Unit> OnEnterTrampoline()
        {
                return onEnterTrampoline;
        }
        
        public static IObservable<Unit> OnExitTrampoline()
        {
                return onExitTrampoline;
        }
        
        public static IObservable<Unit> OnSideChange()
        {
                return onSideChange;
        }
        
        public static IObservable<Unit> OnGameplayEnd()
        {
                return onGameplayEnd;
        }
        
        public static IObservable<Unit> OnGameplayStart()
        {
                return onGameplayStart;
        }

        public static IObservable<Unit> OnLoseStability()
        {
                return onLoseStability;
        }

        public static IObservable<float> OnConsumeEnergy()
        {
                return onConsumeEnergy;
        }

        public static void EmitOnPositionStarted()
        {
                onPositionStarted.OnNext(Unit.Default);
        }
        
        public static void EmitOnPositionEnded()
        {
                onPositionEnded.OnNext(Unit.Default);
        }
        
        public static void EmitOnEnterTrampoline()
        {
                onEnterTrampoline.OnNext(Unit.Default);
        }
        
        public static void EmitOnExitTrampoline()
        {
                onExitTrampoline.OnNext(Unit.Default);
        }

        public static void EmitOnSideChange()
        {
                onSideChange.OnNext(Unit.Default);
        }

        public static void EmitOnLoseStability()
        {
                onLoseStability.OnNext(Unit.Default);
        }

        public static void EmitOnGameplayEnd()
        {
                onGameplayEnd.OnNext(Unit.Default);
        }
        
        public static void EmitOnGameplayStart()
        {
                onGameplayStart.OnNext(Unit.Default);
        }

        public static void EmitConsumeEnergy(float energy)
        {
                onConsumeEnergy.OnNext(energy);
        }
}