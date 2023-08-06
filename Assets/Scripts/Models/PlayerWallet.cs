using System;

namespace Models
{
    [Serializable]
    public class PlayerWallet
    {
        public string uid;
        public int coin;
        public int rankedEnergy;

        public PlayerWallet(int points)
        {
            points = points;
        }
    }
}