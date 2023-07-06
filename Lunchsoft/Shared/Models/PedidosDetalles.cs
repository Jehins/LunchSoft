namespace Lunchsoft.Shared.Models
{
    public class PedidosDetalles
    {
        public int Id { get; set; }
        public string Descripcion { get; set; } = string.Empty;
        public int MenuFk { get; set; }
        public int PedidoFk { get; set; }
    }
}
