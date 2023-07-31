using System;
using Lobby;
using TMPro;
using UnityEngine;
[RequireComponent(typeof(Canvas))]
public class LobbyCharacterCanvas : MonoBehaviour
{
    private Canvas canvas;
    private Camera camera;
    private float yPosition;

    [SerializeField] private TMP_Text nameText;
    [SerializeField] private LobbyCharacter controller;
    [SerializeField] private Renderer[] _renderers;
    [SerializeField] private PlayerInfo playerInfo;
    void Awake()
    {
        canvas = GetComponent<Canvas>();
        canvas.enabled = false;
        yPosition = transform.position.y;
        canvas.worldCamera = camera;

    }

    private void OnEnable()
    {
        camera = Camera.main;
        nameText.text = controller.CharacterLobbySelector.selection.characterName;
        UpdateYPosition();

    }

    void UpdateYPosition()
    {
        var bodyBounds = _renderers[0].bounds;
 
        for (int i = 1; i < _renderers.Length; ++i)
            bodyBounds.Encapsulate(_renderers[i].bounds);
        yPosition = bodyBounds.max.y + 0.4f;
    }

    void Update()
    {
        try
        {
            var cameraPos = camera.transform.position;
            if (Vector3.Distance(cameraPos, transform.position) <= 10)
            {
                canvas.enabled = true;
                UpdateYPosition();
            }

            if (Vector3.Distance(cameraPos, transform.position) > 10)
            {
                canvas.enabled = false;
                playerInfo.Close();
            }

            var currentPost = transform.position;
            var newPosition = new Vector3(currentPost.x, yPosition, currentPost.z);
            transform.position = newPosition;
            var lookPos = newPosition - cameraPos;
            lookPos.y = 0;
            transform.rotation = Quaternion.LookRotation(lookPos);
            
        }
        catch (Exception e)
        {
            if (camera == null)
            {
                camera = Camera.main;
            }
        }

    }
}
