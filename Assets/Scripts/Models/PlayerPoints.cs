using System;
using System.Collections.Generic;

namespace Models
{
    [Serializable]
    public class PlayerPoints
    {
        public string email;
        public int points;
        public string name;
        public string league;
        public string leaguePosition;
    }

    [Serializable]
    public class PlayerPointsList
    {
        public List<PlayerPoints> response;
    }
}