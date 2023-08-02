using System;
using UnityEngine;

namespace Models
{
    [Serializable]
    public struct RankedReward
    {
        [SerializeField] public RewardType type;
        [SerializeField] public int amount;
        
    }
}