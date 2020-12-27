using System;
using UnityEngine;

namespace Character
{
    public interface CharacterAction
    {
        LTDescr Execute(CharacterAction nextAction);
    }

    public class FrontAction : CharacterAction
    {
        private readonly GameObject _target;
        private readonly Vector3 _axis;
        private readonly Action _onStart;

        public FrontAction(GameObject target, Vector3 axis, Action onStart)
        {
            _target = target;
            _axis = axis;
            _onStart = onStart;
        }
        public LTDescr Execute(CharacterAction nextAction)
        {
            _onStart();
            return LeanTween.rotateAround(_target, _axis, 360 , 0.5f );
        }
    }

    public class HalfTwistAction : CharacterAction
    {
        private readonly GameObject _target;
        private readonly Action _onStart;
        private readonly Action _onComplete;

        public HalfTwistAction(GameObject target,Action onStart, Action onComplete)
        {
            _target = target;
            _onStart = onStart;
            _onComplete = onComplete;
        }
        public LTDescr Execute(CharacterAction nextAction)
        {
            _onStart();
            return LeanTween.rotateAroundLocal(_target, Vector3.up, 180, 0.5f)
                .setOnComplete(() =>_onComplete());
        }
    }
    
    public class BackAction : CharacterAction
    {
        private readonly GameObject _target;
        private readonly Vector3 _axis;
        private readonly Action _onStart;

        public BackAction(GameObject target, Vector3 axis, Action onStart)
        {
            _target = target;
            _axis = axis;
            _onStart = onStart;
        }
        public LTDescr Execute(CharacterAction nextAction)
        {
            _onStart();
            return LeanTween.rotateAround(_target, _axis, -360, 0.5f);
        }
    };
}