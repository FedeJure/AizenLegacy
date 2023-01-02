using System;
using UnityEngine;

namespace Character
{
    public class JumpTracker: MonoBehaviour
    {
        private float cummulativeAngle = 0;
        private float lastAngle = 0;
        private CharacterState state;
        
        private bool toFront = false;
        private bool sideChangeLocked = false;
        private string salto = "";

        public void SetupState(CharacterState state)
        {
            this.state = state;
        }

        public void Reset()
        {
            CancelInvoke("ApplyHalfTwist");
            JumpConfig jump;
            JumpsConfig.configs.TryGetValue(salto, out jump);
            sideChangeLocked = false;
            lastAngle = 0;
            cummulativeAngle = 0;
            salto = "";
        }

        public void PerformHalfTwist(float duration)
        {
            Invoke("ApplyHalfTwist", duration);
        }

        public void ApplyHalfTwist()
        {
            Append("g");
        }

        private float lasTwistRotation = 0;
        private void Update()
        {
            var deltaRotation = lastAngle - transform.rotation.x;
            if (!sideChangeLocked && Math.Abs(deltaRotation) > 0)
            {
                toFront = (deltaRotation < 0 && state.onFront) || (deltaRotation > 0 && !state.onFront);
                Append(toFront ?"ad": "at");
                sideChangeLocked = true;
            }
            cummulativeAngle += Math.Abs(deltaRotation);
            if (cummulativeAngle > 0.8)
            {
                cummulativeAngle = 0;
                Append("m");
            }
            lastAngle = transform.rotation.x;
        }

        private void Append(string key)
        {
            var prefix = salto.Length > 0 ? "," : "";
            salto += $"{prefix}{key}";
        }

    }
}
