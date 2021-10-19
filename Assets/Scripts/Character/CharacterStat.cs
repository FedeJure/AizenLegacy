namespace Character
{
    using UnityEngine;

    [CreateAssetMenu(fileName = "CharacterStat", menuName = "ScriptableObjects/CharacterStat", order = 1)]
    public class CharacterStat : ScriptableObject
    {
        [SerializeField] public float energy;
        [SerializeField] public float height;
    }
}