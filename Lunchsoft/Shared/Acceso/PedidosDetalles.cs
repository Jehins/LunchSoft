using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Lunchsoft.Shared.Acceso
{
    public class PedidosDetalles
    {
        public static async Task<bool> CrearPedidoD(Shared.Models.PedidosDetalles nuevoPedido)
        {
            var url = $"{Url.Dominio}pedidodetalle/crear";
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


        public static async Task<List<Shared.Models.PedidosDetalles>> ObtenerPedidoD()
        {
            var url = $"{Url.Dominio}pedidodetalle/Get";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var content = await response.Content.ReadAsStringAsync();
                    var pedido = JsonSerializer.Deserialize<List<Shared.Models.PedidosDetalles>>(content, options);
                    return pedido;
                }
                return new();
            }
        }
        public static async Task<List<Models.PedidosDetalles>> ObtenerDetalle()
        {
            var url = $"{Url.Dominio}pedidodetalle/GetPedDet";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };
            using (var httpClient = new HttpClient())
            {
                httpClient.DefaultRequestHeaders.Add("HeaderName", "HeaderValue");
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var Content = await response.Content.ReadAsStringAsync();
                    var pedDeta = JsonSerializer.Deserialize<List<Models.PedidosDetalles>>(Content, options);
                    return pedDeta;
                }
                return new();
            }
        }



        public static async Task<bool> ActualizarPedidosD(Shared.Models.PedidosDetalles ActualizarPedido)
        {
            var url = $"{Url.Dominio}pedidodetalle/update";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonPedido = JsonSerializer.Serialize(ActualizarPedido, options);
                var content = new StringContent(jsonPedido, Encoding.UTF8, "application/json");

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


        public static async Task<bool> EliminarPedidoD(int Id)
        {
            var url = $"{Url.Dominio}pedidodetalle/delete?id={Id}";

            using (HttpClient httpClient = new())
            {

                var response = await httpClient.DeleteAsync(url);
                if (response.IsSuccessStatusCode)
                    return true;
                else
                    return false;

            }
        }
    }
}
