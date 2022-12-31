using System;
using UnityEngine;

namespace Character
{
    public class JumpTracker: MonoBehaviour
    {
        [SerializeField] private Transform innerTransformr;
        private float cummulativeAngle = 0;
        private float lastAngle = 0;
        private CharacterState state;
        
        private bool toFront = false;
        private bool sideChangeLocked = false;
        private string salto = "";

        private int allowedTwists = 0;
        public void SetupState(CharacterState state)
        {
            this.state = state;
        }

        public void Reset()
        {
            CancelInvoke("ApplyHalfTwist");
            Debug.Log(salto);
            sideChangeLocked = false;
            lastAngle = 0;
            cummulativeAngle = 0;
            salto = "";
            allowedTwists = 0;
        }

        public void PerformHalfTwist(float duration)
        {
            Invoke("ApplyHalfTwist", duration);
            allowedTwists++;
        }

        public void ApplyHalfTwist()
        {
            salto += ",medio giro";
        }

        private float lasTwistRotation = 0;
        private void Update()
        {
            var twistRotation = Math.Abs(innerTransformr.rotation.y - lasTwistRotation);
            // if (allowedTwists > 0 && twistRotation > 0.8f)
            // {
            //     salto += ",medio giro";
            //     lasTwistRotation = Math.Abs(innerTransformr.rotation.y) > 0.8f ? 1f : 0f;
            //     allowedTwists--;
            // }
            var deltaRotation = lastAngle - transform.rotation.x;
            if (!sideChangeLocked && Math.Abs(deltaRotation) > 0)
            {
                toFront = (deltaRotation < 0 && state.onFront) || (deltaRotation > 0 && !state.onFront);
                salto += toFront ? "adelante, " : "atras, ";
                sideChangeLocked = true;
            }
            cummulativeAngle += Math.Abs(deltaRotation);
            if (cummulativeAngle > 0.8)
            {
                cummulativeAngle = 0;
                salto += ",medio mortal";
            }
            lastAngle = transform.rotation.x;
        }

    }
}
