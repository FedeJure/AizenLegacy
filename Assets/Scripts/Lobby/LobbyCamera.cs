using System;
using UnityEngine;

namespace Lobby
{
    public class LobbyCamera : MonoBehaviour
    {
        private Transform Target;
        public float SmoothTime = 0.3f;
        [SerializeField] private float distance = 1;
        [SerializeField] private float minDistance = 2;
        [SerializeField] private float maxDistance = 8;
        [SerializeField] private Vector3 offset;
        [SerializeField] private GameObject gameSection;
 
        private Vector3 velocity = Vector3.zero;
        private bool initted;
        public float rotationSpeed = 5;
        private Vector2 touchStartPosition;
        private bool isSwiping = false;

        public void SetupTarget(Transform target)
        {
            Target = target;
            initted = true;
        }

        private void LateUpdate()
        {
            if (!initted) return;
            var position = Target.position;
            var camPosition = transform.position;
            var targetPosition = offset + position + (camPosition - position).normalized * distance;
            var nextCamPosition = Vector3.SmoothDamp(camPosition, targetPosition, ref velocity, SmoothTime);
            transform.position = new Vector3(nextCamPosition.x, camPosition.y, nextCamPosition.z);
            transform.LookAt(position + offset);
        }

        private void Update()
        {
            if (!initted || gameSection.activeSelf) return;
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);

                if (touch.phase == TouchPhase.Began)
                {
                    touchStartPosition = touch.position;
                    isSwiping = true;
                }
                else if (touch.phase == TouchPhase.Moved)
                {
                    float horizontalSwipeDistance = touch.position.x - touchStartPosition.x;
                    float verticalSwipeDistance = touch.position.y - touchStartPosition.y;

                    if (Math.Abs(horizontalSwipeDistance) > Math.Abs(verticalSwipeDistance))
                    {
                        float rotationAmount = horizontalSwipeDistance * rotationSpeed * Time.deltaTime;
                        transform.RotateAround(Target.position, Vector3.up, rotationAmount);
                    }
                    else
                    {
                        distance = Math.Min(maxDistance, Math.Max(distance + verticalSwipeDistance/10, minDistance));
                    }
                    
                }
                else if (touch.phase == TouchPhase.Ended)
                {
                    isSwiping = false;
                }
            }
            else if (Input.GetMouseButtonDown(0))
            {
                touchStartPosition = Input.mousePosition;
                isSwiping = true;
            }
            else if (Input.GetMouseButton(0) && isSwiping)
            {
                float horizontalSwipeDistance = Input.mousePosition.x - touchStartPosition.x;
                float verticalSwipeDistance = Input.mousePosition.y - touchStartPosition.y;

                if (Math.Abs(horizontalSwipeDistance) > Math.Abs(verticalSwipeDistance))
                {
                   float rotationAmount = horizontalSwipeDistance * rotationSpeed * Time.deltaTime;
                   transform.RotateAround(Target.position, Vector3.up, rotationAmount); 
                }
                else
                {
                    distance = Math.Min(maxDistance, Math.Max(distance + verticalSwipeDistance/10, minDistance));
                }
                
                
            }
            else if (Input.GetMouseButtonUp(0))
            {
                isSwiping = false;
            }
        }
    }
}