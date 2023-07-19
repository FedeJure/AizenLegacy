using System;
using System.Collections.Generic;
using System.Linq;
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
        
        //Nuevas variables
        private string prefix = "";

        public void SetupState(CharacterState state)
        {
            this.state = state;
        }

        private float GetJumpPoints()
        {
            var completeSomersaults = quarterSomersault / 4;
            var somersaultPoints = quarterSomersault * 0.1f;
            var somersaultBonus = 0f;
            var position = state.currentPosition ?? Position.CPosition;
            var isBorAPosition = position != Position.CPosition;
            var extraBonus = isBorAPosition ? completeSomersaults * 0.1f : 0;
            switch (Math.Min(completeSomersaults, 4))
            {
                case 1:
                    somersaultBonus = 0.1f + (isBorAPosition && quarterSomersault > 4 ? 0.1f : 0);
                    break;
                case 2:
                    somersaultBonus = 0.2f + extraBonus;
                    break;
                case 3:
                    somersaultBonus = 0.4f + extraBonus;
                    break;
                case 4:
                    somersaultBonus = 0.6f + extraBonus;
                    break;
                case 5:
                    somersaultBonus = 0.6f + extraBonus;
                    break;
                case 6:
                    somersaultBonus = 0.6f + extraBonus;
                    break;
                case 7:
                    somersaultBonus = 0.6f + extraBonus;
                    break;
            }

            var finalSomersaultPoints = somersaultPoints + somersaultBonus;

            var halfTwistsCount = halfTwists.Aggregate(0, (a, b) => a + b);
        return finalSomersaultPoints + halfTwistsCount;
    }

        public void Reset()
        {
            CancelInvoke("ApplyHalfTwist");
            quarterSomersault = (int)Math.Round(completeAngles / 0.5f);
            var points = GetJumpPoints();
            var key = $"{prefix},{GetSomersaultAndTwists()}";
            if (JumpsConfig.configs.TryGetValue(key, out var jump))
            {
                EventBus.EmitOnJumpData(new JumpConfigWithCalculatedPoints()
                {
                    name = jump.name,
                    points = points
                });
            }
            halfTwists = new List<int>{0};
            sideChangeLocked = false;
            lastAngle = 0;
            cummulativeAngle = 0;
            quarterSomersault = 0;
            completeAngles = 0;
            salto = "";
            prefix = "";
        }

        private string GetSomersaultAndTwists()
        {
            var result = "";
            result += quarterSomersault;   
            halfTwists.ForEach(h =>
            {
                result += h;
            });
            return result;
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
                prefix = toFront ? "ad" : "at";
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
