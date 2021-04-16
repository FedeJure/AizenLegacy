using System;
using System.Collections.Generic;
using UnityEngine;

namespace Character
{
    public enum BodyParts
    {
        Hair,
        Head,
        Pants,
        Shoes,
        Body,
        Torso
    }
    public class SkinInit : MonoBehaviour
    {
        
        [SerializeField] private CharacterSkin skin;
        [SerializeField] private BodyPartsLocation[] locations;

        private Dictionary<BodyParts, BodyPartsLocation> indexed = new Dictionary<BodyParts, BodyPartsLocation>();
        private void Awake()
        {
            foreach (var bodyPartsLocation in locations)
            {
                indexed.Add(bodyPartsLocation.part, bodyPartsLocation);
            }

            if (skin == null)
                skin = SelectedCharacterRepository.Get()?.skin;
        }

        private void OnEnable()
        {
            if (skin == null) return;
            foreach (var s in skin.skines)
            {
                indexed[s.bodyPart].location.sharedMesh = s.mesh;
                for (var i = 0; i < s.materials.Length; i++)
                {
                    var mats = indexed[s.bodyPart].location.materials;
                    mats[i] = s.materials[i];
                    indexed[s.bodyPart].location.materials = mats;
                }
            }
        }
    }

    [Serializable]
    public class BodyPartsLocation
    {
        public BodyParts part;
        public SkinnedMeshRenderer location;
    }
}