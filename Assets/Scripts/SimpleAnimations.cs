using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

[Serializable]
struct AnimType
{
    public AnimationClip anim;
    [SerializeField, Range(0, 1)] public float probability;
}
[RequireComponent(typeof(Animation))]
public class SimpleAnimations : MonoBehaviour
{
    [SerializeField] private List<AnimationClip> idleAnims;
    [SerializeField] private List<AnimType> probAnim;
    private Animation anim;
    private bool lastAnimWasIdle = false;
    private void Awake()
    {
        anim = GetComponent<Animation>();
    }

    private void Start()
    {   
        
    }

    private void PlayAnimation()
    {
        if (!lastAnimWasIdle)
        {
            lastAnimWasIdle = true;
            var nextAnim = idleAnims[Random.Range(0, idleAnims.Count - 1)];
            _PlayAnimation(nextAnim);
        }
        else
        {
            lastAnimWasIdle = false;
            foreach (var nextAnim in probAnim)
            {
                var rand = Random.Range(0f, 1f);
                if (rand > nextAnim.probability) continue;
                _PlayAnimation(nextAnim.anim);
                return;
            }
            PlayAnimation();
        }
    }

    private void _PlayAnimation(AnimationClip clip)
    {
        if (anim.GetClip(clip.name) == null) anim.AddClip(clip, anim.name);
        anim.Play(clip.name);
        Invoke("PlayAnimation", clip.length);
    }
}
