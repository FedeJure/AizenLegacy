using System;
using UnityEngine;

namespace DataStore
{
    public class DataStoreController : MonoBehaviour
    {
        private void Awake()
        {
            DontDestroyOnLoad(this);
        }
    }
}
