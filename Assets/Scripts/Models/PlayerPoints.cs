using System;
using System.Collections.Generic;
using Character;

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
        public string photoUrl;
    }

    [Serializable]
    public class PlayerPointsUpdateResponse
    {
        public List<PlayerPoints> leaderboard;
        public int pointVariation;
    }
    
    [Serializable]
    public class PlayerPointsGetResponse
    {
        public List<PlayerPoints> leaderboard;
    }
    
    [Serializable]
    public class PlayerPointsUpdateRequest
    {
        public int quarterSomersault;
        public int[] halfTwists;
        public Position position;
    }
}