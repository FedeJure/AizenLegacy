using System;
using JetBrains.Annotations;
using UnityEngine;

namespace Character
{
    [Serializable]
    public struct League
    {
        public string id;
        public Sprite image;
        public string text;
        public Color color;
        [CanBeNull] public GameObject complexImage;
    }
    [CreateAssetMenu(fileName = "Assets/LeageConfig", menuName = "ScriptableObjects/LeagueConfig", order = 0)]
    public class LeagueInfo: ScriptableObject
    {
        public League[] leagues;
    }
}