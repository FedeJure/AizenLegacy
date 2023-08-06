using UnityEngine;

namespace Models
{
    public class CheckEnergyResponse
    {
        [SerializeField] public bool updated;
        [SerializeField] public long nextUpdateOnMillis;
    }
}