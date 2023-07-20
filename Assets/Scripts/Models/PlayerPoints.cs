using System;
using System.Collections.Generic;

namespace Models
{
    [Serializable]
    public class PlayerPoints
    {
        public string email;
        public float points;
        public string name;
        public string league;
        public int leaguePosition;
    }

    [Serializable]
    public class PlayerPointsList
    {
        public List<PlayerPoints> response;
    }
}