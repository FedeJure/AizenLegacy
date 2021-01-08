
namespace Lobby
{
    using UnityEngine;

    [CreateAssetMenu(fileName = "CharacterSelection", menuName = "ScriptableObjects/CharacterSelection", order = 1)]
    public class CharacterSelection : ScriptableObject
    {
        [SerializeField] private GameObject characterPrefab;
        [SerializeField] private string name;
    }
}

