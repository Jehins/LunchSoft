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
            var url = "http://lunchsoft.somee.com/menu/crear";
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

        public async Task<List<Menus>> ObtenerMenu()
        {
            var url = $"http://lunchsoft.somee.com/menu/get";

            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };
            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var Content = await response.Content.ReadAsStringAsync();
                    var menus = JsonSerializer.Deserialize<List<Menus>>(Content, options);
                    return menus;
                }
                return new();
            }
        }
        public static async Task<bool> ActualizarMenu(Menus menuActualizado)
        {
            var url = $"http://lunchsoft.somee.com/menu/update";
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
        public static async Task<bool> EliminarMenu(Menus menuId)
        {
            var url = $"http://lunchsoft.somee.com/menu/delete";

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
