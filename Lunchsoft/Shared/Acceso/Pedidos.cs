using Lunchsoft.Shared.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Lunchsoft.Shared.Acceso
{
    public class Pedidos
    {

        public static async Task<bool> CrearPedido(Shared.Models.Pedido nuevoPedido)
        {
            var url = $"{Url.Dominio}pedidos/crear";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonPedido = JsonSerializer.Serialize(nuevoPedido, options);
                var content = new StringContent(jsonPedido, Encoding.UTF8, "application/json");

                var response = await httpClient.PostAsync(url, content);
                if (response.IsSuccessStatusCode)
                    return true;
                else
                    return false;

            }
        }


        public static async Task<List<Shared.Models.Pedido>> ObtenerPedido()
        {
            var url = $"{Url.Dominio}pedidos/Get";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var content = await response.Content.ReadAsStringAsync();
                    var pedido = JsonSerializer.Deserialize<List<Shared.Models.Pedido>>(content, options);
                    return pedido;
                }
                return new();
            }
        }
        public static async Task<List<Models.Pedido>> Obtener()
        {
            var url = $"{Url.Dominio}pedidos/getPedido";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };
            using (var httpClient = new HttpClient())
            {
                httpClient.DefaultRequestHeaders.Add("HeaderName", "HeaderValue");
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var Content = await response.Content.ReadAsStringAsync();
                    var pedido = JsonSerializer.Deserialize<List<Models.Pedido>>(Content, options);
                    return pedido;
                }
                return new();
            }
        }
    }
}
