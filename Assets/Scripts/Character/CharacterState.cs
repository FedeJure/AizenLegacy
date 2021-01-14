using UniRx;
using UnityEngine;

namespace Character
{
    [CreateAssetMenu(fileName = "CharacterState", menuName = "ScriptableObject/CharacterState", order = 0)]
    public class CharacterState : ScriptableObject
    {
        public BoolReactiveProperty isFalling = new BoolReactiveProperty(true);
        public BoolReactiveProperty isStable = new BoolReactiveProperty(true);
        public BoolReactiveProperty isRotating = new BoolReactiveProperty();
        public BoolReactiveProperty rotatingForward = new BoolReactiveProperty();

        public FloatReactiveProperty energy;

        public CharacterState(CharacterStats stats)
        {
            energy = new FloatReactiveProperty(stats.maxEnergy);
        }
    }
}