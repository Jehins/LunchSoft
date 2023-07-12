using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Lunchsoft.Shared.Acceso
{
    public class Reserva
    {
        public static async Task<bool> CrearReserva(Shared.Models.Reserva nuevaReserva)
        {
            var url = $"{Url.Dominio}swagger/reserva/crear";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonReserva = JsonSerializer.Serialize(nuevaReserva, options);
                var content = new StringContent(jsonReserva, Encoding.UTF8, "application/json");

                var response = await httpClient.PostAsync(url, content);
                if (response.IsSuccessStatusCode)
                    return true;
                else
                    return false;

            }
        }


        public async Task<List<Shared.Models.Reserva>> ObtenerReserva()
        {
            var url = $"{Url.Dominio}reserva/Get";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var content = await response.Content.ReadAsStringAsync();
                    var reserva = JsonSerializer.Deserialize<List<Shared.Models.Reserva>>(content, options);
                    return reserva;
                }
                return new();
            }
        }




        public static async Task<bool> ActualizarEmpleado(Shared.Models.Reserva reservaoActualizado)
        {
            var url = $"{Url.Dominio}reserva/update";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonReserva = JsonSerializer.Serialize(reservaoActualizado, options);
                var content = new StringContent(jsonReserva, Encoding.UTF8, "application/json");

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


        public static async Task<bool> EliminarEmpleado(int Id)
        {
            var url = $"{Url.Dominio}reserva/delete?Id={Id}";
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
