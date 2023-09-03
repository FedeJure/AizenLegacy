using TMPro;
using UnityEngine;
using UnityEngine.UI;

public enum DialogStatus
{
    Info,
    Success,
    Error
}

public class DialogController : MonoBehaviour
{
    [SerializeField] private TMP_Text title;
    [SerializeField] private TMP_Text content;
    [SerializeField] private GameObject dialog;
    [SerializeField] private Image background;

    [SerializeField] private Color successColor;
    [SerializeField] private Color infoColor;
    [SerializeField] private Color errorColor;

    private static DialogController _instance;

    private void Awake()
    {
        if (_instance != null)
            Destroy(_instance.gameObject);
        _instance = this;
        _instance.dialog.SetActive(false);
    }

    public static void ShowDialog(string title, string content, DialogStatus status = DialogStatus.Info)
    {
        if (_instance == null) return;
        _instance.title.SetText(title);
        _instance.content.SetText(content);
        _instance.dialog.SetActive(true);

        _instance.background.color = status switch
        {
            DialogStatus.Info => _instance.infoColor,
            DialogStatus.Success => _instance.successColor,
            DialogStatus.Error => _instance.errorColor,
            _ => _instance.background.color
        };
    }
}
