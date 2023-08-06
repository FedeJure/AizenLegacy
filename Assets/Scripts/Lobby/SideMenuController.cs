using UnityEngine;

[RequireComponent(typeof(Animator))]
public class SideMenuController : MonoBehaviour
{
    private Animator anim;
    private bool open;
    void Awake()
    {
        anim = GetComponent<Animator>();
    }
    public void HandleClick()
    {
        open = !open;
        anim.SetTrigger(open ? "open" : "close");
    }
    
}
