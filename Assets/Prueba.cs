using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Prueba : MonoBehaviour
{
    public GameObject children;

    void Update()
    {
        transform.Rotate(1,0,0,Space.Self);
        children.transform.Rotate(0,2,0,Space.Self);
    }
}
