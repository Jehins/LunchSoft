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
            if(modelo.Descripcion == "")
            {
                return BadRequest("La descripcion es incorrecta");
            }
            if (modelo.ReservaFk <= 0)
                return BadRequest("La reserva es incorrecta");

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
        public ActionResult GetBy()
        {

            var Pedidos = Data.Pedido.GetAll();

            if (Pedidos != null)
            {
                return Ok(Pedidos);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }
        [HttpGet("getPedido")]
        public ActionResult Get()
        {

            var pedido = Data.Pedido.GetPedido();

            if (pedido != null)
            {
                return Ok(pedido);
            }
            else
            {
                return BadRequest("El menu es incorrecto");
            }
        }
    }
}
