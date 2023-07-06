namespace Lunchsoft.Shared.Models
{
    public class Reserva
    {
        public int Id { get; set; }
        public int Numero { get; set; }
        public DateTime Hora { get; set; }
        public string Imagen { get; set; }
        public int EmpleadoFk { get; set; }
    }
}


