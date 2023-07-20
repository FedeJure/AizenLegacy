using System;
using UnityEngine;

namespace Utils
{
    public class AsyncGameObject: MonoBehaviour
    {
        [SerializeField] private GameObject[] ObjectsToHide;
        [SerializeField] private GameObject SpinnerTemplate;

        private GameObject createdSpinner;

        private void OnEnable()
        {
            foreach (var ob in ObjectsToHide)
            {
                ob.SetActive(false);
            }

            createdSpinner = Instantiate(SpinnerTemplate, transform);
        }

        public void Load()
        {
            if (createdSpinner != null) Destroy(createdSpinner);
            foreach (var ob in ObjectsToHide)
            {
                ob.SetActive(true);
            }
        }
    }
}