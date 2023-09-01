using System;
using System.Collections.Generic;
using System.Linq;
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
        Torso,
        Hands
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
                skin = SelectedCharacterRepository.Get()?.characterSkin;
        }

        private void OnEnable()
        {
            if (skin == null) return;
            foreach (var s in skin.skines)
            {
                indexed[s.bodyPart].location.sharedMesh = s.mesh;
                var materials = s.materials.Length == 0 
                    ? indexed[s.bodyPart].location.materials.ToList() 
                    : new List<Material>();
                for (var i = 0; i < s.materials.Length; i++)
                {
                    var materialInfo = s.materials[i];
                    var material = Instantiate(materialInfo.material);
                    if (materialInfo.overrideMaterialColor)
                        material.color = materialInfo.color;
                    materials.Add(material);
                }
                indexed[s.bodyPart].location.materials = materials.ToArray();
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