﻿using System;
using JetBrains.Annotations;
using Lobby;

public static class SelectedCharacterRepository
{
        private static CharacterSelection selectedCharacter = null;
        public static event Action OnChange = () => {};
        

        [CanBeNull]
        public static CharacterSelection Get()
        {
                return selectedCharacter;
        }

        public static void Set(CharacterSelection selected)
        {
                selectedCharacter = selected;
                OnChange();
        }

        public static void Clear()
        {
                selectedCharacter = null;
        }
}