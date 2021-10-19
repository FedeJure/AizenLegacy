using Character;
using JetBrains.Annotations;
using Lobby;

public static class SelectedCharacterRepository
{
        private static CharacterSelection selectedCharacter = null;
        [CanBeNull]
        public static CharacterSelection Get()
        {
                return selectedCharacter;
        }

        public static void Set(CharacterSelection selected)
        {
                selectedCharacter = selected;
        }

        public static void Clear()
        {
                selectedCharacter = null;
        }
}