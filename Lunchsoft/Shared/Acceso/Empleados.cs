using System.Collections.Generic;
using System.Net.Http;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Lunchsoft.Shared.Acceso
{
    public class Empleados
    {


        public static async Task<bool> CrearEmpleado(Models.Empleados nuevoEmpleado)
        {
            var url = $"{Url.Dominio}empleados/crear";
            Console.WriteLine(url);
            using (var httpClient = new HttpClient())
            {
                var jsonEmpleado = JsonSerializer.Serialize(nuevoEmpleado);
                var content = new StringContent(jsonEmpleado, Encoding.UTF8, "application/json");

                var response = await httpClient.PostAsync(url, content);
                if (response.IsSuccessStatusCode)
                    return true;
                else
                    return false;

            }
        }
        public static async Task<Models.Empleados>  ObtenerEmpleado(string user, string pass)
        {
            var url = $"{Url.Dominio}empleados/Get";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                httpClient.DefaultRequestHeaders.Add("User", user);
                httpClient.DefaultRequestHeaders.Add("Pass", pass);

                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var content = await response.Content.ReadAsStringAsync();
                    var empleado = JsonSerializer.Deserialize<Models.Empleados>(content, options);

                    return empleado;
                }

                return new Models.Empleados();
            }
        }

        public async Task<bool> ActualizarEmpleado(Models.Empleados empleadoActualizado)
        {
            var url = $"{Url.Dominio}empleados/Update";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var jsonEmpleado = JsonSerializer.Serialize(empleadoActualizado, options);
                var content = new StringContent(jsonEmpleado, Encoding.UTF8, "application/json");

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
            var url = $"{Url.Dominio}empleados/Delete?Id={Id}";

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
