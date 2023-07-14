using System;
using System.Collections.Generic;

namespace Models
{
    [Serializable]
    public class PlayerPoints
    {
        public string email;
        public int points;
    }

    [Serializable]
    public class PlayerPointsList
    {
        public List<PlayerPoints> response;
    }
}