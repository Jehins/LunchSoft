using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Lunchsoft.Shared.Acceso
{
    public class Bebida
    {

        public static async Task<bool> CrearBebida(Shared.Models.Bebida nuevaBebida)
        {
            var url = $"{Url.Dominio}Bebida/crear";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonMenu = JsonSerializer.Serialize(nuevaBebida, options);
                var content = new StringContent(jsonMenu, Encoding.UTF8, "application/json");

                var response = await httpClient.PostAsync(url, content);
                if (response.IsSuccessStatusCode)
                    return true;
                else
                    return false;

            }
        }

        public static async Task<List<Models.Bebida>> ObtenerBebida(int codigo)
        {
            var url = $"{Url.Dominio}Bebida/Get";

            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };
            using (var httpClient = new HttpClient())
            {
                httpClient.DefaultRequestHeaders.Add("codigo", codigo.ToString());
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var Content = await response.Content.ReadAsStringAsync();
                    var bebida = JsonSerializer.Deserialize<List<Models.Bebida>>(Content, options);
                    return bebida;
                }
                return new();
            }
        }

        public static async Task<List<Models.Bebida>> Obtener()
        {
            var url = $"{Url.Dominio}Bebida/getBebida";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };
            using (var httpClient = new HttpClient())
            {
                httpClient.DefaultRequestHeaders.Add("HeaderName", "HeaderValue");
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var Content = await response.Content.ReadAsStringAsync();
                    var bebida = JsonSerializer.Deserialize<List<Models.Bebida>>(Content, options);
                    return bebida;
                }
                return new();
            }
        }
        public static async Task<bool> ActualizarBebida(Models.Bebida bebidaActualizado)
        {
            var url = $"{Url.Dominio}Bebida/Update";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonMenu = JsonSerializer.Serialize(bebidaActualizado, options);
                var content = new StringContent(jsonMenu, Encoding.UTF8, "application/json");

                var response = await httpClient.PutAsync(url, content);
                if (response.IsSuccessStatusCode)
                {
                    return true;
                }
                else
                {
                    return false;
                }

            }
        }
        public static async Task<bool> EliminarBebida(int Id)
        {
            var url = $"{Url.Dominio}Bebida/Delete?Id={Id}";

            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.DeleteAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    return true;
                }
                else
                {
                    return false;
                }

            }
        }
    }
}
