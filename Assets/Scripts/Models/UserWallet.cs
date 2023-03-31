using System;

namespace Models
{
    [Serializable]
    public class UserWallet
    {
        public int points;

        public UserWallet(int points)
        {
            points = points;
        }
    }
}