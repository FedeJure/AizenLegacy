using UniRx;
using UnityEngine;

public class RagdollController : MonoBehaviour
{
    private Collider[] colliders;
    private Rigidbody[] rbodies;
    private void Awake()
    {
        colliders = GetComponentsInChildren<Collider>();
        rbodies = GetComponentsInChildren<Rigidbody>();
        
        foreach (var rbody in rbodies)
        {
            rbody.detectCollisions = false;
            rbody.collisionDetectionMode = CollisionDetectionMode.Continuous;
        }
        SetEnable(false);

        EventBus.OnLoseStability()
            .Do(_ =>
            {
                SetEnable(true);
            })
            .Subscribe();
    }

    private void SetEnable(bool enable)
    {
        foreach (var collider in colliders)
        {
            collider.enabled = enable;
        }

        foreach (var rbody in rbodies)
        {
            rbody.isKinematic = !enable;
            rbody.detectCollisions = enable;
        }
    }
}