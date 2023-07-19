﻿using System;
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
            var position = state.lastPosition;
            var isBorAPosition = position != Position.CPosition;
            var extraBonus = isBorAPosition ? completeSomersaults * 0.1f : 0;
            var somersaultBonus = Math.Min(completeSomersaults, 4) switch
            {
                1 => 0.1f + (isBorAPosition && quarterSomersault > 4 ? 0.1f : 0),
                2 => 0.2f + extraBonus,
                3 => 0.4f + extraBonus,
                4 => 0.6f + extraBonus,
                5 => 0.6f + extraBonus,
                6 => 0.6f + extraBonus,
                7 => 0.6f + extraBonus,
                _ => 0
            };

            var finalSomersaultPoints = somersaultPoints + somersaultBonus;

            var halfTwistsCount = halfTwists.Aggregate(0, (a, b) => a + b);
        return finalSomersaultPoints + halfTwistsCount;
    }

        public void Reset()
        {
            CancelInvoke("ApplyHalfTwist");
            quarterSomersault = (int)Math.Round(completeAngles / 0.5f);
            var twistsCount = halfTwists.Aggregate(0, (a, b) => a + b);
            if (quarterSomersault > 0 || twistsCount > 0 && state.isStable)
            {
                var points = GetJumpPoints();
                var key = $"{prefix},{GetSomersaultAndTwists()}";

                var jumpName = JumpsConfig.configs.TryGetValue(key, out var jump) 
                    ? jump.name 
                    : $"{quarterSomersault} Quarters and {twistsCount} Twists";
                var position = state.lastPosition switch
                {
                    Position.CPosition => "Tuck",
                    Position.BPosition => "Pike",
                    _ => "Straight"
                };
                EventBus.EmitOnJumpData(new ProcessedJumpConfig()
                {
                    name = $"{position} {jumpName}",
                    points = points,
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
