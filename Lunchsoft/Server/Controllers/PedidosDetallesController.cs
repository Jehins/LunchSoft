using Lunchsoft.Shared.Models;

namespace Lunchsoft.Server.Controllers
{

    [Route("pedidosDetalles")]
    public class PedidosDetallesController : Controller
    {
        [HttpPost("crear")]
        public ActionResult Crear([FromBody] PedidosDetalles modelo)
        {

            if (modelo.MenuFk <= 0)
                return BadRequest("El producto no esta bien");

            if (modelo.PedidoFk <= 0)
                return BadRequest("El pedido esta mal");

            if (modelo.Descripcion == "")
                return BadRequest("El campo esta vacio");



            var PedidoDetalle = Data.PedidosDetalles.Crear(modelo);
            // Valida la respuesta de la BD
            if (PedidoDetalle == true)
            {
                return Created("", "Creado con exito");
            }
            else
            {
                return BadRequest("Hubo algun error al intentar crear");
            }

        }

        [HttpGet("Get")]
        public ActionResult GetBy([FromHeader] int PedidoFk)
        {
            if (PedidoFk <= 0)
                return BadRequest("El Pedido es incorrecto");

            var PedidosD = Data.PedidosDetalles.GetBy(PedidoFk);

            if (PedidosD != null)
            {
                return Ok(PedidosD);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }

        [HttpPut("Update")]
        public ActionResult Update([FromBody] PedidosDetalles modelo)
        {
            if (modelo.Id <= 0)
                return BadRequest("El id es incorrecto");

            if (modelo.MenuFk <= 0)
                return BadRequest("El producto no esta bien");

            if (modelo.PedidoFk <= 0)
                return BadRequest("El pedido esta mal");

            if (modelo.Descripcion == "")
                return BadRequest("El campo esta vacio");

            var PedidoDetalle = Data.PedidosDetalles.Update(modelo);


            if (PedidoDetalle == true)
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
            var pediEliminado = Data.PedidosDetalles.Delete(id);


            if (pediEliminado)
            {
                return Ok("Pedido detalle eliminado con éxito");
            }
            else
            {
                return BadRequest("Hubo un error al intentar eliminar el Pedido detalle");
            }
        }
    }
}


