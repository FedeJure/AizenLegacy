using UnityEngine;

namespace Tutorial
{
    public class FailTutorialWidgetController: MonoBehaviour
    {
        public void RestartTutorial()
        {
            GameSceneManager.GetInstance().LoadTutorialScene();
        }
    }
}