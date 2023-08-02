using System;
using System.Collections.Generic;
using Character;
using UnityEngine;

namespace Models
{
    [Serializable]
    public class PlayerPoints
    {
        [SerializeField]public string email;
        [SerializeField]public float points;
        [SerializeField]public string name;
        [SerializeField]public string league;
        [SerializeField]public int leaguePosition;
        [SerializeField]public string photoUrl;
    }

    [Serializable]
    public class PlayerPointsUpdateResponse
    {
        [SerializeField]public PlayerPoints[] leaderBoard;
        [SerializeField]public float pointVariation;
        [SerializeField]public RankedReward[] rewards;
        public PlayerPointsUpdateResponse() {}
    }
    
    [Serializable]
    public class PlayerPointsGetResponse
    {
        public List<PlayerPoints> leaderboard;
        public PlayerPointsGetResponse() {}
    }

    [Serializable]
    public class JumpData
    {
       public int quarterSomersault;
       public int[] halfTwists;
       public Position position;
       public Direction direction;
    }

    [Serializable]
    public class PlayerPointsUpdateRequest
    {
        public JumpData[] jumps;
        public PlayerPointsUpdateRequest() {}
    }
}