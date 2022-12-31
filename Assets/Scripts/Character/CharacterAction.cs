using System;
using UnityEngine;

namespace Character
{
    public interface CharacterAction
    {
        void Execute();
    }

    public class FrontAction : CharacterAction
    {
        private readonly Transform _target;
        private readonly ICharacterState _state;
        private readonly float completeRotation = 360;
        private float _actualAngle;

        public FrontAction(Transform target, ICharacterState _state)
        {
            _target = target;
            this._state = _state;
        }
        public void Execute()
        {
            if (!_state.currentPosition.HasValue) return;
            var deltaAngle = completeRotation * Time.deltaTime;
            // if (_actualAngle >= completeRotation) return;
            _target.Rotate(_target.TransformVector(_target.right * deltaAngle), Space.Self);
            _actualAngle += deltaAngle;
        }
    }

    public class BackAction : CharacterAction
    {
        private readonly Transform _target;
        private readonly float completeRotation = 360;
        private float _actualAngle;
        private readonly ICharacterState _state;

        public BackAction(Transform target,  ICharacterState _state)
        {
            _target = target;
            this._state = _state;
        }
        public void Execute()
        {
            if (!_state.currentPosition.HasValue) return;
            var deltaAngle = completeRotation * Time.deltaTime;
            // if (_actualAngle >= completeRotation) return;
            _target.Rotate(_target.TransformVector(-_target.right * deltaAngle));
            _actualAngle += deltaAngle;
        }
    }

    public class HalfTwistAction : CharacterAction
    {
        private readonly Transform _target;
        private readonly float _completeRotation = 180;
        private float _durationInSeconds = 0.5f; 
        private float _actualAngle;
        private readonly ICharacterState _state;

        public HalfTwistAction(Transform target,  ICharacterState _state)
        {
            _target = target;
            this._state = _state;
        }
        public void Execute()
        {
            var deltaAngle = _completeRotation * Time.deltaTime * 1/_durationInSeconds;
            if (_actualAngle >= _completeRotation) return;
            _target.Rotate(Vector3.up * deltaAngle,Space.Self);
            _actualAngle += deltaAngle;
        }
    }
    
    public class StabilizateAction : CharacterAction {
        private readonly Transform _rotateTarget;
        private readonly float _rotateAngle;
        private readonly float _time;
        private readonly ICharacterState _state;

        private float _currentRotateAngle;

        public StabilizateAction(Transform rotateTarget,  ICharacterState _state, float rotateAngle, float time)
        {
            _rotateTarget = rotateTarget;
            _rotateAngle = rotateAngle;
            _time = time;
            this._state = _state;
        }
        public void Execute()
        {
            var rotateAngle = _rotateAngle * Time.deltaTime * 1/_time;
            if (Math.Abs(_currentRotateAngle) < Math.Abs(_rotateAngle)) _rotateTarget.Rotate(Vector3.right * rotateAngle, Space.Self);
            _currentRotateAngle += Math.Abs(rotateAngle);
        }
    }

    public class ThreeQuarter : CharacterAction
    {
        private ICharacterState _state;
        public ThreeQuarter(ICharacterState state)
        {
            _state = state;
        }
        public void Execute()
        {
            if (_state.RequestPerformUniqueAction())
            {
                
            }
        }
    }
}