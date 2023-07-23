using Lunchsoft.Server.Data;

namespace Lunchsoft.Server.Controllers
{
    [Route("Bebida")]
    public class BebidaController : Controller
    {
        [HttpPost("crear")]
        public ActionResult Crear([FromBody] Shared.Models.Bebida modelo)
        {

            if (modelo.Precio <= 0)
            {
                return BadRequest("El campo no puede ser menor a cero");
            }


            if (modelo.Nombre == "" || modelo.Descripcion == "")
                return BadRequest("Los datos estan vacios");

            var bebida = Data.Bebida.Crear(modelo);
            // Valida la respuesta de la BD
            if (bebida == true)
            {
                return Created("", "Creado con exito");
            }
            else
            {
                return BadRequest("Hubo algun error al intentar crear");
            }
        }

        [HttpGet("Get")]
        public ActionResult GetBy([FromHeader] int id)
        {
            if (id <= 0)
                return BadRequest("El id es incorrecto");

            var bebida = Data.Menu.GetBy(id);

            if (bebida != null)
            {
                return Ok(bebida);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }
        [HttpGet("getBebida")]
        public ActionResult Get()
        {

            var bebida = Data.Bebida.GetBebida();

            if (bebida != null)
            {
                return Ok(bebida);
            }
            else
            {
                return BadRequest("La bebida es incorrecto");
            }
        }

        [HttpPut("Update")]
        public ActionResult Update([FromBody] Shared.Models.Bebida modelo)
        {
            if (modelo.Id <= 0)
                return BadRequest("El id es incorrecto");

            if (modelo.Precio <= 0)
                return BadRequest("El Precio es incorrecto");


            if (modelo.Nombre == "" || modelo.Descripcion == "")
                return BadRequest("El campo esta vacio");

            var bebida = Data.Bebida.Update(modelo);


            if (bebida == true)
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
            var bebidaEliminado = Data.Bebida.Delete(id);


            if (bebidaEliminado)
            {
                return Ok("Bebida eliminado con exito");
            }
            else
            {
                return BadRequest("Hubo un error al intentar eliminar la bebida");
            }
        }
    }
}
