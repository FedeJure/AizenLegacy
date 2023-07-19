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
        bool canPerformAction { get; }
        float rotationSpeed { get; }
        void AddRotation(float deltaSpeed);

        bool RequestPerformUniqueAction();
    }
    public class CharacterState: ICharacterState
    {
        public bool isOnTrampoline { get; set; }
        public Position? currentPosition { get; set; }
        public Position lastPosition { get; set; }
        private Transform modelTransform;
        public bool isStable { get; set; }
        public bool isFalling { get; set; }
        public bool canPerformAction { get; set; }
        public float rotationSpeed { get; private set; }

        public void AddRotation(float deltaSpeed)
        {
            rotationSpeed += deltaSpeed;
        }

        public void ResetRotationSpeed()
        {
            rotationSpeed = 0;
        }
        public bool RequestPerformUniqueAction()
        {
            if (!canPerformAction) return false;
            canPerformAction = false;
            return true;
        }
        
        public bool onFront => modelTransform.right.x > 0;


        public CharacterState(Transform modelTransform)
        {
            this.modelTransform = modelTransform;
        }
    }
}