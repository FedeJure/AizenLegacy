using UnityEngine;

namespace Character
{
    [CreateAssetMenu(fileName = "CharacterStats", menuName = "ScriptableObjects/CharacterStats", order = 0)]
    public class CharacterStats : ScriptableObject
    {
        public float maxEnergy;
    }
}