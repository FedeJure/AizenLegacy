using System;
using UnityEngine;

namespace Character
{
    public interface CharacterAction
    {
        Vector3 Execute(Vector3 angularVelocity);
    }

    public class FrontAction : CharacterAction
    {
        private readonly Transform _target;
        private readonly float completeRotation = 360;

        public FrontAction(Transform target)
        {
            _target = target;
        }
        public Vector3 Execute(Vector3 angularVelocity)
        {
            _target.Rotate(_target.TransformVector(_target.right * (completeRotation * Time.deltaTime )), Space.Self);
            return angularVelocity ;
        }
    }

    public class BackAction : CharacterAction
    {
        private readonly Transform _target;
        private readonly float completeRotation = 360;

        public BackAction(Transform target)
        {
            _target = target;
        }
        public Vector3 Execute(Vector3 angularVelocity)
        {
            _target.Rotate(_target.TransformVector(-_target.right * (completeRotation * Time.deltaTime )));
            return angularVelocity ;
        }
    }

    public class HalfTwistAction : CharacterAction
    {
        private readonly Transform _target;
        private readonly float _completeRotation = 180;
        private float _durationInSeconds = 0.5f; 
        private DateTime _startTime;

        public HalfTwistAction(Transform target)
        {
            _target = target;
            _startTime = DateTime.Now;
        }
        public Vector3 Execute(Vector3 angularVelocity)
        {
            if (DateTime.Now > _startTime.AddSeconds(_durationInSeconds)) return angularVelocity;
            _target.Rotate(Vector3.up * (_completeRotation * Time.deltaTime * (1/_durationInSeconds)),Space.Self);
            return angularVelocity;
        }
    }
}