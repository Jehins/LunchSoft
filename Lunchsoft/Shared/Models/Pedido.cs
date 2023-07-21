namespace Lunchsoft.Shared.Models
{
    public class Pedido
    {

        public int Id { get; set; }
        public string Descripcion { get; set; } = string.Empty;
        public int ReservaFk { get; set; }

    }
}




