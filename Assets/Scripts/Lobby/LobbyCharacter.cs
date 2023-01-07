using UnityEngine;

namespace Lobby
{
    public class LobbyCharacter: MonoBehaviour
    {
        [SerializeField] private CharacterSelector characterLobbySelector;

        public CharacterSelector CharacterLobbySelector => characterLobbySelector;
    }
}