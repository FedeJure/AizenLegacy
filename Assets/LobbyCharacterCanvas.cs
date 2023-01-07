using Lobby;
using TMPro;
using UnityEngine;
[RequireComponent(typeof(Canvas))]
public class LobbyCharacterCanvas : MonoBehaviour
{
    private CanvasRenderer canvas;
    private Camera camera;
    [SerializeField] private TMP_Text nameText;
    [SerializeField] private LobbyCharacter controller;
    void Awake()
    {
        canvas = GetComponent<CanvasRenderer>();
        canvas.cull = false;
    }

    private void OnEnable()
    {
        camera = Camera.main;
        nameText.text = controller.CharacterLobbySelector.selection.characterName;
    }

    void Update()
    {
        var cameraPos = camera.transform.position;
        if (!canvas.cull && Vector3.Distance(cameraPos, transform.position) <=  10) canvas.cull = true;
        
        var lookPos = transform.position - cameraPos;
        lookPos.y = 0;
        transform.rotation = Quaternion.LookRotation(lookPos);
    }
}
