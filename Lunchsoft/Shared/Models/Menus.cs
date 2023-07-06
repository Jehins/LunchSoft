namespace Lunchsoft.Shared.Models
{
    public class Menus
    {
        public int Id { get; set; }
        public string Nombre { get; set; } = string.Empty;
        public decimal Precio { get; set; }
        public string Descripcion { get; set; } = string.Empty;
        public string Imagen { get; set; } = string.Empty;
    }
}
