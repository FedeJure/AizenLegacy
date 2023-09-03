using System;
using UnityEngine;

namespace Utils
{
    public class ExtractAllChildrens: MonoBehaviour
    {
        void Start()
        {
            // Get all the children of the game object
            Transform[] children = transform.GetComponentsInChildren<Transform>();

            // Iterate over the children
            foreach (Transform child in children)
            {
                // Set the parent of the child to the game object's parent
                child.parent = transform.parent;
            }
        }
    }
}