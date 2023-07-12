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
        public async Task<bool> CrearPedido(Shared.Models.PedidosDetalles nuevoPedido)
        {
            var url = $"{Url.Dominio}swagger/pedido/crear";
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


        public async Task<List<Shared.Models.PedidosDetalles>> ObtenerPedido()
        {
            var url = $"{Url.Dominio}pedido/Get";
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




        public async Task<bool> ActualizarEmpleado(Shared.Models.PedidosDetalles ActualizarPedido)
        {
            var url = $"{Url.Dominio}empleados/update";
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


        public async Task<bool> EliminarPedido(int Id)
        {
            var url = $"{Url.Dominio}factura/delete?id={Id}";

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
