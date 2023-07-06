using Lunchsoft.Server.Data;
using Lunchsoft.Shared.Models;
using Microsoft.AspNetCore.Http.HttpResults;

namespace Lunchsoft.Server.Controllers
{
    [Route("pedidos")]
    public class PedidosController : Controller
    {
        [HttpPost("crear")]
        public ActionResult Crear([FromBody] Shared.Models.Pedido modelo)
        {
            if (modelo.ReservaFk <= 0)
                return BadRequest("El empleado es incorrecto");

            var pedido = Data.Pedido.Crear(modelo);
            // Valida la respuesta de la BD
            if (pedido == true)
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

            var Pedidos = Data.Pedido.GetAll(id);

            if (Pedidos != null)
            {
                return Ok(Pedidos);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }
    }
}
