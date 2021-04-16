using System.Collections.Generic;
using UnityEngine;

namespace Utils
{
    public class ComponentGetter
    {
        private Dictionary<int, object> cache;
        
        public ComponentGetter()
        {
            cache = new Dictionary<int, object>();    
        }
        
        public bool TryGetComponent<T>(GameObject gameObject, out T value)
        {
            var objectHash = gameObject.GetInstanceID();
            if (cache.ContainsKey(objectHash))
            {
                value = (T)cache[objectHash];
                return true;
            }
            if (!gameObject.TryGetComponent(out T component))
            {
                value = default;
                return false;
            }

            cache.Add(objectHash, component);
            value = component;
            return true;
        }
    }
}