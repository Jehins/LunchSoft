namespace Lunchsoft.Shared.Models
{
    public class Empleados
    {
        public int Id { get; set; }
        public string User { get; set; } = string.Empty;
        public string Name { get; set; } = string.Empty;
        public int Age { get; set; }
        public string Pass { get; set; } = string.Empty;
        public int TypeFk { get; set; }
    }
}
