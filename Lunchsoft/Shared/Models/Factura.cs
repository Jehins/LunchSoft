namespace Lunchsoft.Shared.Models
{
    public class Factura
    {
        public int Id { get; set; }
        public decimal Valor { get; set; }
        public int PedidoFk { get; set; } 
    }
}
