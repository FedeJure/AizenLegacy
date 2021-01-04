using System;

namespace Character
{
    using UnityEngine;

    [CreateAssetMenu(fileName = "CharacterSkin", menuName = "ScriptableObjects/CharacterSkin", order = 1)]
    public class CharacterSkin : ScriptableObject
    {
        [SerializeField] public SkinMesh[] skines;
    }
    [Serializable]
    public class SkinMesh
    {
        [SerializeField] public Mesh mesh;
        [SerializeField] public Material[] materials;
        [SerializeField] public BodyParts bodyPart;
    }
}