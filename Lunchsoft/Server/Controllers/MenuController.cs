using Lunchsoft.Shared.Models;

namespace Lunchsoft.Server.Controllers
{
    [Route("menu")]
    public class MenuController : Controller
    {
        [HttpPost("crear")]
        public ActionResult Crear([FromBody] Menus modelo)
        {

            if (modelo.Precio <= 0)
            {
                return BadRequest("El campo no puede ser menor a cero");
            }


            if (modelo.Nombre == "" || modelo.Descripcion == "")
                return BadRequest("Los datos estan vacios");

            var producto = Data.Menu.Crear(modelo);
            // Valida la respuesta de la BD
            if (producto == true)
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

            var producto = Data.Menu.GetBy(id);

            if (producto != null)
            {
                return Ok(producto);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }
        [HttpGet("getMenu")]
        public ActionResult Get()
        {

            var menu = Data.Menu.GetMenus();

            if (menu != null)
            {
                return Ok(menu);
            }
            else
            {
                return BadRequest("El menu es incorrecto");
            }
        }

        [HttpPut("Update")]
        public ActionResult Update([FromBody] Menus modelo)
        {
            if (modelo.Id <= 0)
                return BadRequest("El id es incorrecto");

            if (modelo.Precio <= 0)
                return BadRequest("El Precio es incorrecto");


            if (modelo.Nombre == "" || modelo.Descripcion == "")
                return BadRequest("El campo esta vacio");

            var producto = Data.Menu.Update(modelo);


            if (producto == true)
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
            var prodEliminado = Data.Menu.Delete(id);


            if (prodEliminado)
            {
                return Ok("Producto eliminado con exito");
            }
            else
            {
                return BadRequest("Hubo un error al intentar eliminar el menu");
            }
        }
    }
}