using UnityEngine;

namespace Character
{
    public interface ICharacterState
    {
        bool isOnTrampoline { get; }
        bool isStable { get; }
        bool onFront { get; }
        bool isFalling { get; }
        Position? currentPosition { get; }
    }
    public class CharacterState: ICharacterState
    {
        public bool isOnTrampoline { get; set; }
        public Position? currentPosition { get; set; }
        private Transform modelTransform;
        public bool isStable { get; set; }
        public bool isFalling { get; set; }

        public bool onFront
        {
            get { return modelTransform.transform.right.x > 0; }
        }


        public CharacterState(Transform modelTransform)
        {
            this.modelTransform = modelTransform;
        }
    }
}