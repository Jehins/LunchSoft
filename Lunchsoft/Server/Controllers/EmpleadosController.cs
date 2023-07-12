using Lunchsoft.Server.Data;
using Lunchsoft.Shared.Models;
using Lunchsoft.Shared.Security;
using System.Reflection;
using System.Xml.Linq;

namespace Lunchsoft.Server.Controllers
{


    [Route("empleados")]
    public class EmpleadosController : Controller
    {
        // 1 Mesero
        // 2 Jefe
        // 3 Cajero

        // OK 
        // Created
        // BadRequest

        [HttpPost("crear")]
        public ActionResult Crear([FromBody] Shared.Models.Empleados modelo)
        {

            if (modelo.Age < 18)
            {
                return BadRequest("La edad no cumple con los requisitos.");
            }
            else if (modelo.Age > 70)
            {
                return BadRequest("La edad no es correcta");
            }

            if (modelo.TypeFk != 1 && modelo.TypeFk != 2 && modelo.TypeFk != 3)
            {
                return BadRequest("Tipo es inválido");
            }


            // Comprobar que los campos no esten vacios
            if (modelo.User == "" || modelo.Name == "" || modelo.Pass == "")
                return BadRequest("Algun campo esta vacio");


            // Encripta la contraseña
            modelo.Pass = Encriptar.Encripta(modelo.Pass);

            // Inserta en la base de datos
            var empleado = Data.Empleados.Crear(modelo);


            // Valida la respuesta de la BD
            if (empleado == true)
            {
                return Created("", "Creado con exito");
            }
            else
            {
                return BadRequest("Hubo algun error al intentar crear");
            }
        }



        [HttpGet("Get")]
        public ActionResult GetBy([FromHeader] string User, [FromHeader] string Pass)
        {
            if (User == "" || Pass == "")
            {
                return BadRequest("Algun campo está vacío");
            }

            Pass = Encriptar.Encripta(Pass);

            var empleados = Data.Empleados.GetBy(User, Pass);

            if (empleados != null)
            {
                return Ok(empleados);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }

        [HttpPut("Update")]
        public ActionResult Update([FromBody] Shared.Models.Empleados modelo)
        {
            if (modelo.Id <= 0)
            {
                return BadRequest("El id es incorrecto");
            }

            // Validación de edad
            if (modelo.Age < 18)
            {
                return BadRequest("La edad no cumple con los requisitos.");
            }
            else if (modelo.Age > 70)
            {
                return BadRequest("La edad no es correcta");
            }

            // Validación del tipo
            if (modelo.TypeFk != 1 && modelo.TypeFk != 2 && modelo.TypeFk != 3)
            {
                return BadRequest("Tipo inválido.");
            }

            // Validación de campos vacíos
            if (modelo.User == "" || modelo.User == "" || modelo.Pass == "")
            {
                return BadRequest("Algun campo está vacío.");
            }


            // Encriptar la contraseña
            modelo.Pass = Encriptar.Encripta(modelo.Pass);

            // Actualizar en la base de datos
            bool empleadoActualizado = Data.Empleados.Update(modelo);

            // Validar la respuesta de la BD
            if (empleadoActualizado)
            {
                return Ok("Actualizado con éxito.");
            }
            else
            {
                return BadRequest("Hubo algún error al intentar actualizar.");
            }
        }

        [HttpDelete("Delete")]
        public ActionResult Delete([FromQuery] int id)
        {
            // Eliminar el empleado de la base de datos
            var empleadoEliminado = Data.Empleados.Delete(id);

            // Validar la respuesta de la base de datos
            if (empleadoEliminado)
            {
                return Ok("Empleado eliminado con éxito");
            }
            else
            {
                return BadRequest("Hubo un error al intentar eliminar el empleado");
            }
        }
    }
}
