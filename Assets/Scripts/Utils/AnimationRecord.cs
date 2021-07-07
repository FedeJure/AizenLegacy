using System.Collections.Generic;
using UnityEditor.Animations;
using UnityEngine;

namespace Utils
{
    public class AnimationRecord : MonoBehaviour
    {
        [SerializeField] private AnimationClip clip;
        [SerializeField] private bool record;

        private bool _inited = false;
        private GameObjectRecorder _recorder;

        void Init()
        {
            clip.ClearCurves();
            _recorder = new GameObjectRecorder(gameObject);
            var childList = new List<GameObject>();
            GetChildRecursive(gameObject, childList);
            childList.ForEach(obj => _recorder.BindComponentsOfType<Transform>(obj, false));
            _inited = true;
        }
        
        private void GetChildRecursive(GameObject obj, ICollection<GameObject> list){
            if (null == obj)
                return;

            foreach (Transform child in obj.transform){
                if (null == child)
                    continue;
                list.Add(child.gameObject);
                GetChildRecursive(child.gameObject, list);
            }
        }

        private void Update()
        {
            if (record && !_inited) Init();
        }

        void LateUpdate()
        {
            if (!record) return;
            _recorder.TakeSnapshot(Time.deltaTime);

        }

        void OnDisable()
        {
            if (clip == null)
                return;
            if (_recorder.isRecording)
            {
                _recorder.SaveToClip(clip);
            } 

        }
    }
}

