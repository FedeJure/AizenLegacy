using System;
using UniRx;

namespace Character
{
    public static class CharacterSharedRepository
    {
        public static CharacterStateReactiveProperty characterState = new CharacterStateReactiveProperty();
        public static CharacterStatsReactiveProperty characterStats = new CharacterStatsReactiveProperty();
    }
    
    [Serializable]
    public class CharacterStateReactiveProperty : ReactiveProperty<CharacterState>
    {
        public CharacterStateReactiveProperty()
        {
        }

        public CharacterStateReactiveProperty(CharacterState initialValue)
            :base(initialValue)
        {
        }
    }
    
    [Serializable]
    public class CharacterStatsReactiveProperty : ReactiveProperty<CharacterStats>
    {
        public CharacterStatsReactiveProperty()
        {
        }

        public CharacterStatsReactiveProperty(CharacterStats initialValue)
            :base(initialValue)
        {
        }
    }
}