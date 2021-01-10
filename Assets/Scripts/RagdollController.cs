using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;

public class RagdollController : MonoBehaviour
{
    private Collider[] colliders;
    private Rigidbody[] rbodies;
    
    private List<IDisposable> disposer = new List<IDisposable>();
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
    }

    private void OnEnable()
    {
        EventBus.OnLoseStability()
            .Do(_ =>
            {
                SetEnable(true);
            })
            .Subscribe()
            .AddTo(disposer);
    }

    private void OnDisable()
    {
        disposer.ForEach(d => d.Dispose());
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