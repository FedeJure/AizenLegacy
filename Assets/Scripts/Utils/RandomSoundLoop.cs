using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Utils
{
    [RequireComponent(typeof(AudioSource))]
    public class RandomSoundLoop : MonoBehaviour
    {
        [SerializeField] private List<AudioClip> clips;

        private AudioSource source;

        private void Awake()
        {
            source = GetComponent<AudioSource>();
        }

        private void OnEnable()
        {
            PlayRandomTrack();
        }

        private void OnDisable()
        {
            CancelInvoke("PlayRandomTrack");
        }

        private void PlayRandomTrack()
        {
            if (clips.Count == 0) return;
            var clip = clips[Random.Range(0, clips.Count)];
            source.PlayOneShot(clip);
            Invoke("PlayRandomTrack", clip.length);
        }
    }
}
