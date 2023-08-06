using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "InventoryState", menuName = "ScriptableObjects/InventoryState", order = 1)]
public class InventoryState : ScriptableObject
{
    [SerializeField] public int coins;
    [SerializeField] public int energy;
}
