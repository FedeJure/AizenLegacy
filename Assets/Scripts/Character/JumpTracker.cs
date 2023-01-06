using System;
using System.Collections.Generic;
using UnityEngine;

namespace Character
{
    public class JumpTracker: MonoBehaviour
    {
        [SerializeField] private Transform playerTransform;
        private float cummulativeAngle = 0;
        private float lastAngle = 0;
        private CharacterState state;
        
        private bool toFront = false;
        private bool sideChangeLocked = false;
        private string salto = "";
        private float completeAngles = 0;

        
        private int  quarterSomersault = 0;
        private List<int> halfTwists = new List<int>();
        public event Action<JumpConfig> OnJumpReached = (_) => { }; 

        public void SetupState(CharacterState state)
        {
            this.state = state;
        }

        public void Reset()
        {
            CancelInvoke("ApplyHalfTwist");
            quarterSomersault = (int)Math.Round(completeAngles / 0.5f);
            halfTwists = new List<int>{0};
            JumpConfig jump;
            if (JumpsConfig.configs.TryGetValue(salto, out jump))
                OnJumpReached(jump);
            sideChangeLocked = false;
            lastAngle = 0;
            cummulativeAngle = 0;
            quarterSomersault = 0;
            completeAngles = 0;
            salto = "";
        }

        public void PerformHalfTwist(float duration)
        {
            Invoke("ApplyHalfTwist", duration);
        }

        public void ApplyHalfTwist()
        {
            try
            {
                Append("g");
                if (halfTwists.Count == 0) halfTwists.Add(0);
                halfTwists[halfTwists.Count - 1]++;
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }
        }

        private float lasTwistRotation = 0;
        private void Update()
        {
            var deltaRotation = lastAngle - playerTransform.rotation.x;
            if (!sideChangeLocked && Math.Abs(deltaRotation) > 0)
            {
                toFront = (deltaRotation < 0 && state.onFront) || (deltaRotation > 0 && !state.onFront);
                Append(toFront ?"ad": "at");
                sideChangeLocked = true;
            }
            cummulativeAngle += Math.Abs(deltaRotation);
            completeAngles += Math.Abs(deltaRotation);
            if (cummulativeAngle > 0.45)
            {
                cummulativeAngle = 0;
                quarterSomersault++;
                if (quarterSomersault > 4 && quarterSomersault % 4 == 1) halfTwists.Add(0);
                Append("m");
            }
            lastAngle = playerTransform.rotation.x;
        }

        private void Append(string key)
        {
            var prefix = salto.Length > 0 ? "," : "";
            salto += $"{prefix}{key}";
        }

    }
}
