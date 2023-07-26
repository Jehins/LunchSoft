using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using System.Net.Http;
using Lunchsoft.Shared.Models;

namespace Lunchsoft.Shared.Acceso
{
    public class Menus
    {
        public static async Task<bool> CrearMenu(Shared.Models.Menus nuevoMenu)
        {
            var url = $"{Url.Dominio}menu/crear";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonMenu = JsonSerializer.Serialize(nuevoMenu, options);
                var content = new StringContent(jsonMenu, Encoding.UTF8, "application/json");

                var response = await httpClient.PostAsync(url, content);
                if (response.IsSuccessStatusCode)
                    return true;
                else
                    return false;

            }
        }

        public static async Task<List<Models.Menus>> ObtenerMenu(int codigo)
        {
            var url = $"{Url.Dominio}menu/Get";

            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };
            using (var httpClient = new HttpClient())
            {
                httpClient.DefaultRequestHeaders.Add("codigo", codigo.ToString());
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var Content = await response.Content.ReadAsStringAsync();
                    var menus = JsonSerializer.Deserialize<List<Models.Menus>>(Content, options);
                    return menus;
                }
                return new();
            }
        }

        public static async Task<List<Models.Menus>> Obtener()
        {
            var url = $"{Url.Dominio}menu/getMenu";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };
            using (var httpClient = new HttpClient())
            {
                httpClient.DefaultRequestHeaders.Add("HeaderName", "HeaderValue");
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var Content = await response.Content.ReadAsStringAsync();
                    var menus = JsonSerializer.Deserialize<List<Models.Menus>>(Content, options);
                    return menus;
                }
                return new();
            }
        }
        public static async Task<bool> ActualizarMenu(Models.Menus menuActualizado)
        {
            var url = $"{Url.Dominio}menu/Update";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonMenu = JsonSerializer.Serialize(menuActualizado, options);
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
        public static async Task<bool> EliminarMenu(int Id)
        {
            var url = $"{Url.Dominio}menu/Delete?Id={Id}";

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
