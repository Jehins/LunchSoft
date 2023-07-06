using Lunchsoft.Shared.Models;
using Microsoft.AspNetCore.Http.HttpResults;
using System.Reflection;

namespace Lunchsoft.Server.Controllers
{
    [Route("factura")]
    public class FacturaController : Controller
    {

        [HttpPost("crear")]
        public ActionResult Crear([FromHeader] Factura modelo)
        {
            if (modelo.Valor <= 0)
            {
                return BadRequest("El valor de la factura es igual a cero");
            }


            if (modelo.PedidoFk <= 0)
                return BadRequest("El pedido es incorrecto");

            // 
            var Factura = Data.Factura.Crear(modelo);
            // Valida la respuesta de la BD
            if (Factura == true)
            {
                return Created("", "Factura creada con exito");
            }
            else
            {
                return BadRequest("Hubo algun error al intentar crear");
            }


        }

        [HttpGet("GetBy")]
        public ActionResult GetBy([FromHeader] int pedidoFk)
        {
            if (pedidoFk <= 0)
                return BadRequest("El pedido es incorrecto");

            var Factura = Data.Factura.GetBy(pedidoFk);
            if (Factura != null)
            {
                return Ok(Factura);
            }
            else
            {
                return BadRequest("Hubo algun error al intentar cambiar");
            }
        }

        [HttpPut("Update")]
        public ActionResult Update([FromBody] Factura modelo)
        {
            if (modelo.Id <= 0)
                return BadRequest("El id es incorrecto");

            if (modelo.Valor <= 0)
                return BadRequest("El valor de la factura es igual a cero");
            if (modelo.PedidoFk <= 0)
                return BadRequest("El Pedido esta incorrecto");

            var Factura = Data.Factura.Update(modelo);


            if (Factura == true)
            {
                return Ok("Factura actualizada con exito");
            }
            else
            {
                return BadRequest("Hubo algún error al intentar actualizar.");
            }
        }

        [HttpDelete("Delete")]
        public ActionResult Delete([FromQuery] int id)
        {

            var FacturaEliminado = Data.Factura.Delete(id);

            if (FacturaEliminado)
            {
                return Ok("Factura eliminada con exito");
            }
            else
            {
                return BadRequest("Hubo un error al intentar eliminar la factura");
            }
        }
    }
}
