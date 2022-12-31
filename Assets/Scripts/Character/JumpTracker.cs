using System;
using UnityEngine;

namespace Character
{
    public class JumpTracker: MonoBehaviour
    {
        [SerializeField] private Transform innerTransformr;
        private float cummulativeBackAngle = 0;
        private float cummulativeFrontAngle = 0;
        private float lastAngle = 0;
        private CharacterState state;
        
        private bool toFront = false;
        private bool sideChangeLocked = false;
        private string salto = "";

        private bool lastTwistWasInvert = false;
        public void SetupState(CharacterState state)
        {
            this.state = state;
        }

        public void Reset()
        {
            Debug.Log(salto);
            sideChangeLocked = false;
            lastAngle = 0;
            cummulativeBackAngle = 0;
            cummulativeFrontAngle = 0;
            salto = "";
        }

        public void PerformHalfTwist()
        {
            salto += ",medio giro";
            sideChangeLocked = false;
        }

        private void LateUpdate()
        {
            var twistRotation = Math.Abs(innerTransformr.rotation.y);
            if (!lastTwistWasInvert && twistRotation > 0.8f && toFront)
            {
                sideChangeLocked = false;
                lastTwistWasInvert = true;
                salto += ",medio giro";
            }
            if (lastTwistWasInvert && sideChangeLocked && twistRotation < 0.2f && !toFront)
            {
                sideChangeLocked = false;
                lastTwistWasInvert = false;
                salto += ",medio giro";
            }
            var deltaRotation = lastAngle - transform.rotation.x;
            if (!sideChangeLocked && Math.Abs(deltaRotation) > 0)
            {
                toFront = (deltaRotation < 0 && state.onFront) || (deltaRotation > 0 && !state.onFront);
                sideChangeLocked = true;
            }
            if (toFront)
            {
                cummulativeFrontAngle += Math.Abs(deltaRotation);
            } 
            else
            {
                cummulativeBackAngle += Math.Abs(deltaRotation);
            }

            if (cummulativeFrontAngle > 0.8)
            {
                cummulativeFrontAngle = 0;
                salto += ",medio mortal adelante";
            }
            if (cummulativeBackAngle > 0.8)
            {
                cummulativeBackAngle = 0;
                salto += ",medio mortal atras";
            }
            lastAngle = transform.rotation.x;
        }

    }
}
