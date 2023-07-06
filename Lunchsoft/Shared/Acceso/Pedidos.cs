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

        public async Task<bool> CrearPedido(Pedido nuevoPedido)
        {
            var url = "http://lunchsoft.somee.com/swagger/pedido/crear";
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


        public async Task<List<Pedido>> ObtenerPedido()
        {
            var url = "http://lunchsoft.somee.com/pedido/Get";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var content = await response.Content.ReadAsStringAsync();
                    var pedido = JsonSerializer.Deserialize<List<Pedido>>(content, options);

                    return pedido;
                }

                return new();
            }
        }




        public async Task<bool> ActualizarEmpleado(Pedido ActualizarPedido)
        {
            var url = $"http://lunchsoft.somee.com/empleados/update";
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


        public async Task<bool> EliminarPedido(Pedido EliminarPedido)
        {
            var url = $"http://lunchsoft.somee.com/pedido/delete";

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
