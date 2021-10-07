using UnityEngine;
using UnityEngine.SceneManagement;

namespace Tutorial
{
    public class FailTutorialWidgetController: MonoBehaviour
    {
        public void RestartTutorial()
        {
            SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex);
        }
    }
}