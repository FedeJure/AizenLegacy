
using Character;

namespace Lobby
{
    using UnityEngine;

    [CreateAssetMenu(fileName = "CharacterSelection", menuName = "ScriptableObjects/CharacterSelection", order = 1)]
    public class CharacterSelection : ScriptableObject
    {
        [SerializeField] public CharacterStat characterStats;
        [SerializeField] public CharacterSkin characterSkin;
        [SerializeField] public string characterName;
        [SerializeField] public float scale;
    }
}

