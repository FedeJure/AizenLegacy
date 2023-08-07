using System;
using System.Collections.Generic;
using UniRx;
using UnityEngine;
using Random = UnityEngine.Random;

public class RagdollController : MonoBehaviour
{
    private Collider[] colliders;
    private Rigidbody[] rbodies;

    [SerializeField] private Rigidbody rbody;
    [SerializeField] private GameObject ragdollContainer;

    private List<IDisposable> disposer = new List<IDisposable>();

    private Vector3? direction;
    private void Awake()
    {
        colliders = ragdollContainer.GetComponentsInChildren<Collider>();
        rbodies = ragdollContainer.GetComponentsInChildren<Rigidbody>();
        
        foreach (var rbody in rbodies)
        {
            rbody.detectCollisions = false;
            rbody.collisionDetectionMode = CollisionDetectionMode.ContinuousSpeculative;
        }
        SetEnable(false);
    }

    private void OnEnable()
    {
        EventBus.OnGameplayStart()
            .Subscribe(_ => direction = null);
        EventBus.OnSerieFails()
            .Subscribe(_ => SetEnable(true))
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

    public void ExpulseWithForce(float force)
    {
        if (direction == null) direction = new Vector3(Random.Range(0, force/2), force, Random.Range(-(force / 2), force/2));
        rbody.AddForce(direction.Value,ForceMode.Impulse);
    }
}