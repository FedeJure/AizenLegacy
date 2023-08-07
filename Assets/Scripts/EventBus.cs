using System;
using Character;
using Models;
using UniRx;
public static class EventBus
{
        static ISubject<Unit> onPositionStarted = new Subject<Unit>();
        static ISubject<Unit> onPositionEnded = new Subject<Unit>();
        static ISubject<Unit> onEnterTrampoline = new Subject<Unit>();
        static ISubject<Unit> onExitTrampoline = new Subject<Unit>();
        static ISubject<Unit> onSideChange = new Subject<Unit>();
        static ISubject<PlayerPointsUpdateRequest> onGameEnd = new Subject<PlayerPointsUpdateRequest>();
        static ISubject<Unit> onGameplayEnd = new Subject<Unit>();
        static ISubject<Unit> onGameplayStart = new Subject<Unit>();
        static ISubject<float> onConsumeEnergy = new Subject<float>();
        private static ISubject<ProcessedJumpConfig> onJumpData = new Subject<ProcessedJumpConfig>();
        private static ISubject<Unit> onLogged = new Subject<Unit>();
        private static ISubject<Unit> onLogout = new Subject<Unit>();
        private static ISubject<Unit> onEnterLobby = new Subject<Unit>();
        private static ISubject<Unit> onSerieEnds = new Subject<Unit>();
        private static ISubject<Unit> onSerieFails = new Subject<Unit>();
        private static ISubject<Unit> onTutorialEnter = new Subject<Unit>();
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
        
        public static IObservable<Unit> OnEnterLobby()
        {
                return onEnterLobby;
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

        public static IObservable<PlayerPointsUpdateRequest> OnGameEnds()
        {
                return onGameEnd;
        }
        
        public static IObservable<float> OnConsumeEnergy()
        {
                return onConsumeEnergy;
        }

        public static IObservable<Unit> OnLogged()
        {
                return onLogged;
        }

        public static IObservable<Unit> OnLogout()
        {
                return onLogout;
        }

        public static IObservable<ProcessedJumpConfig> OnJumpData()
        {
                return onJumpData;
        }
        
        public static IObservable<Unit> OnSerieEnds()
        {
                return onSerieEnds;
        }

        public static void EmitOnSerieEnds()
        {
                onSerieEnds.OnNext(Unit.Default);
        }
        
        public static IObservable<Unit> OnSerieFails()
        {
                return onSerieFails;
        }
        
        public static IObservable<Unit> OnTutorialEnter()
        {
                return onTutorialEnter;
        }

        public static void EmitOnTutorialEnter()
        {
                onTutorialEnter.OnNext(Unit.Default);
        }

        public static void EmitOnSerieFails()
        {
                onSerieFails.OnNext(Unit.Default);
        }

        public static void EmitOnJumpData(ProcessedJumpConfig processedJumpData)
        {
                onJumpData.OnNext(processedJumpData);
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

        public static void EmitOnGameEnd(PlayerPointsUpdateRequest gameData)
        {
                onGameEnd.OnNext(gameData);
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

        public static void EmitOnLogged()
        {
                onLogged.OnNext(Unit.Default);
        }
        
        public static void EmitOnLogout()
        {
                onLogout.OnNext(Unit.Default);
        }
        
        public static void EmitEnterLobby()
        {
                onEnterLobby.OnNext(Unit.Default);
        }
        
}