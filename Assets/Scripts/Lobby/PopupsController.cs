using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Lobby
{
    public class PopupsController : MonoBehaviour
    {
        private static List<Transform> childs = new List<Transform>();
        public static bool Open
        {
            get
            {
                return childs.Exists(c => c.gameObject.activeSelf);
            }
        }

        private static PopupsController _instance;

        private void Awake()
        {
            _instance = this;
            childs = _instance.GetComponentsInChildren<Transform>().ToList().Where(c => c.parent == transform).ToList();
            
            childs.ForEach(c => c.gameObject.SetActive(true));
        }

        private void Start()
        {
            childs.ForEach(c =>
            {
                if (c == transform) return;
                c.gameObject.SetActive(false);
            });
        }
    }
}
