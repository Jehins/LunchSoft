namespace Lunchsoft.Server.Data
{
    public class Pedido
    {

        // C R U D

        public static bool Crear(Shared.Models.Pedido modelo)
        {
            try
            {
                string query = $"""INSERT INTO PEDIDOS (`HORA`, `EMPLEADO_FK`, MENU_FK) VALUES ('{modelo.Hora:yyyy-MM-dd HH:mm}','{modelo.ReservaFk}') """;
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
        public static List<Shared.Models.Pedido> GetAll(int id)
        {
            try
            {

                string query = $"""SELECT * FROM PEDIDOS WHERE USUARIO_FK = {id} """;

                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();

                List<Shared.Models.Pedido> pedidos = new();


                while (resultado.Read())
                {

                    Shared.Models.Pedido modelo = new ()
                    {
                        Id = resultado.GetInt32(0),
                        Hora = resultado.GetDateTime(1),
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


    }
}
