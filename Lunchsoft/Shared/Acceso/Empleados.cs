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
            var url = "http://lunchsoft.somee.com/empleados/crear";

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
        public static async Task<List<Models.Empleados>> ObtenerEmpleado(string User, string Pass, int TypeFk)
        {
            var url = $"http://lunchsoft.somee.com/empleados/Get?User={User}&Pass={Pass}&TypeFk={TypeFk}";
            var options = new JsonSerializerOptions { PropertyNameCaseInsensitive = true };

            using (var httpClient = new HttpClient())
            {
                var response = await httpClient.GetAsync(url);
                if (response.IsSuccessStatusCode)
                {
                    var content = await response.Content.ReadAsStringAsync();
                    var empleado = JsonSerializer.Deserialize<List<Models.Empleados>>(content, options);

                    return empleado;
                }

                return new List<Models.Empleados>();
            }
        }





        public async Task<bool> ActualizarEmpleado(Models.Empleados empleadoActualizado)
        {
            var url = $"http://lunchsoft.somee.com/empleados/update";
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
            var url = $"http://lunchsoft.somee.com/empleados/delete?Id={Id}";

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
