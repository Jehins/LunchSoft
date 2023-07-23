using Lunchsoft.Server.Data;
using Lunchsoft.Shared.Models;

namespace Lunchsoft.Server.Controllers
{
    [Route("reserva")]
    public class ReservaController : Controller
    {
        [HttpPost("crear")]
        public ActionResult Crear([FromBody] Shared.Models.Reserva modelo)
        {
            if (modelo.Numero <= 0)
                return BadRequest("el numero es incorrecto o vacio");

            if (modelo.Hora.Date == DateTime.MinValue.Date || modelo.Hora.Hour == 0 && modelo.Hora.Minute == 0)
            {
                return BadRequest("La fecha está vacía o es igual a la medianoche");
            }
            if(modelo.EmpleadoFk <= 0)
            {
                return BadRequest("El empleado es incorrecto");
            }


            // 
            var reserva = Reservas.Crear(modelo);
            // Valida la respuesta de la BD
            if (reserva == true)
            {
                return Created("", "Creado con exito");
            }
            else
            {
                return BadRequest("Hubo algun error al intentar crear");
            }

        }

        [HttpGet("Get")]
        public ActionResult GetBy([FromHeader] int Numero)
        {
            if (Numero <= 0)
                return BadRequest("El numero es incorrecto");



            var Reserva = Reservas.GetBy(Numero);

            if (Reserva != null)
            {
                return Ok(Reserva);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }
        [HttpGet("GetReserva")]
        public ActionResult Get()
        {
            var Reserva = Data.Reservas.GetReserva();

            if (Reserva != null)
            {
                return Ok(Reserva);
            }
            else
            {
                return BadRequest("Se encontró algun error");
            }
        }

        [HttpPut("Update")]
        public ActionResult Update([FromBody] Reserva modelo)
        {
            if (modelo.Id <= 0)
                return BadRequest("El id es incorrecto");

            if (modelo.Numero <= 0)
                return BadRequest("Esta vacio");

            if (modelo.EmpleadoFk <= 0)
            {
                return BadRequest("El empleado es incorrecto");
            }

            var PedidoDetalle = Reservas.Update(modelo);


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
            var reservaEliminado = Data.Reservas.Delete(id);


            if (reservaEliminado)
            {
                return Ok("Reserva eliminada con éxito");
            }
            else
            {
                return BadRequest("Hubo un error al intentar eliminar la reserva");
            }
        }
    }
}
