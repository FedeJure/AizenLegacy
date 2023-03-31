using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

namespace Utils
{
    public static class ImageUtils
    {
        public static async Task<Texture2D> GetTexture(string url)
        {
            using (UnityWebRequest www = UnityWebRequestTexture.GetTexture(url))
            {
                // Enviar la solicitud a la URL
                var asyncOperation = www.SendWebRequest();

                // Esperar a que la solicitud termine
                while (!asyncOperation.isDone)
                {
                    await Task.Delay(10);
                }

                // Manejar cualquier error que pueda haber ocurrido
                if (www.result != UnityWebRequest.Result.Success)
                {
                    Debug.LogError($"Error al cargar la imagen de la URL: {url}. Error: {www.error}");
                    return null;
                }

                // Obtener la textura cargada
                return ((DownloadHandlerTexture)www.downloadHandler).texture;
            }
        }
    }
}