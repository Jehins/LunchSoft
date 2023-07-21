namespace Lunchsoft.Server.Data
{
    public class Pedido
    {

        // C R U D

        public static bool Crear(Shared.Models.Pedido modelo)
        {
            try
            {
                string query = $"""INSERT INTO PEDIDOS (`DESCRIPCION`, RESERVA_FK) VALUES ('{modelo.Descripcion}','{modelo.ReservaFk}') """;
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }
        /// <summary>
        /// Obtiene todos los pedidos de un cliente
        /// </summary>
        public static List<Shared.Models.Pedido> GetAll()
        {
            try
            {

                string query = $"""SELECT * FROM PEDIDOS """;

                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();

                List<Shared.Models.Pedido> pedidos = new();


                while (resultado.Read())
                {

                    Shared.Models.Pedido modelo = new ()
                    {
                        Id = resultado.GetInt32(0),
                        Descripcion = resultado.GetString(1),
                        ReservaFk = resultado.GetInt32(2)
                    };

                    pedidos.Add(modelo);
                }


                return pedidos;
            }
            catch
            {
                return new List<Shared.Models.Pedido>();
            }
        }

        public static List<Shared.Models.Pedido>? GetPedido()
        {
            try
            {
                string query = $"""SELECT * FROM PEDIDOS""";
                var conexion = DataBase.GetConnection();
                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);
                var resultado = comando.ExecuteReader();

                List<Shared.Models.Pedido> pedList = new();

                while (resultado.Read())
                {
                    Shared.Models.Pedido modelo = new()
                    {
                        Id = resultado.GetInt32(0),
                        Descripcion = resultado.GetString(1),
                        ReservaFk = resultado.GetInt32(2)
                    };
                    pedList.Add(modelo);
                }
                return pedList;
            }
            catch
            {
                return null;
            }
        }
    }
}
