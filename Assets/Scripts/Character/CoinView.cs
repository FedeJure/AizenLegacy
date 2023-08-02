using System.Linq;
using Models;
using TMPro;
using UnityEngine;

namespace Character
{
    public class CoinView: MonoBehaviour
    {
        [SerializeField] private TMP_Text text;

        public void Setup(RankedReward[] rewards)
        {
            var amount = rewards
                .Where(r => RewardType.Coin.Equals(r.type))
                .Select(r => r.amount)
                .Aggregate(0, (a, b) => a + b);
            text.SetText(amount.ToString());
                
        }
    }
}