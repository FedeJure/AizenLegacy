using System;
using UniRx;

public static class EventBus
{
        static ISubject<Unit> onPositionStarted = new Subject<Unit>();
        static ISubject<Unit> onPositionEnded = new Subject<Unit>();
        static ISubject<Unit> onEnterTrampoline = new Subject<Unit>();
        static ISubject<Unit> onExitTrampoline = new Subject<Unit>();

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
}