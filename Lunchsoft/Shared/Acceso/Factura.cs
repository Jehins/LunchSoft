using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Lunchsoft.Shared.Acceso
{
    public class Factura
    {
        public static async Task<bool> CrearFactura(Models.Factura nuevaFactura)
        {
            var url = $"{Url.Dominio}swagger/factura/crear";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonFactura = JsonSerializer.Serialize(nuevaFactura, options);
                var content = new StringContent(jsonFactura, Encoding.UTF8, "application/json");

                var response = await httpClient.PostAsync(url, content);
                if (response.IsSuccessStatusCode)
                    return true;
                else
                    return false;

            }
        }


        public async Task<List<Models.Factura>> ObtenerFactura()
        {
            var url = $"{Url.Dominio}factura/Get";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var content = await response.Content.ReadAsStringAsync();
                    var factura = JsonSerializer.Deserialize<List<Models.Factura>>(content, options);
                    return factura;
                }
                return new();
            }
        }




        public async Task<bool> ActualizarFactura(Models.Factura FacturaActualizado)
        {
            var url = $"{Url.Dominio}factura/update";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonFactura = JsonSerializer.Serialize(FacturaActualizado, options);
                var content = new StringContent(jsonFactura, Encoding.UTF8, "application/json");

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


        public async Task<bool> EliminarEmpleado(int Id)
        {
            var url = $"{Url.Dominio}factura/delete?Id={Id}";
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