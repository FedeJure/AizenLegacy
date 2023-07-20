using System;
using UnityEngine;
using UnityEngine.UI;

namespace Character
{
    [Serializable]
    public struct League
    {
        public string id;
        public Sprite image;
        public string text;
        public Color color;
    }
    [CreateAssetMenu(fileName = "Assets/LeageConfig", menuName = "ScriptableObjects/LeagueConfig", order = 0)]
    public class LeagueInfo: ScriptableObject
    {
        public League[] leagues;
    }
}