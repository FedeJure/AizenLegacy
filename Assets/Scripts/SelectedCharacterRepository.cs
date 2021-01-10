using Character;
using JetBrains.Annotations;

public static class SelectedCharacterRepository
{
        private static SelectedCharacter selectedCharacter = null;
        [CanBeNull]
        public static SelectedCharacter Get()
        {
                return selectedCharacter;
        }

        public static void Set(SelectedCharacter selected)
        {
                selectedCharacter = selected;
        }

        public static void Clear()
        {
                selectedCharacter = null;
        }
}

public class SelectedCharacter
{
        public readonly CharacterSkin skin;

        public SelectedCharacter(CharacterSkin skin)
        {
                this.skin = skin;
        }
}