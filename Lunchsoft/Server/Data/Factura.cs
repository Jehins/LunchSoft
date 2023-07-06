namespace Lunchsoft.Server.Data
{
    public class Factura
    {

        public static bool Crear(Shared.Models.Factura modelo)
        {
            try
            {
                string query = $"""INSERT INTO FACTURA (VALOR, PEDIDO_FK) VALUES ('{modelo.Valor}', '{modelo.PedidoFk}') """;
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }
        public static Shared.Models.Factura? GetBy(int pedidoFk)
        {
            try
            {
                string query = $""" SELECT * FROM FACTURA WHERE PEDIDO_FK = {pedidoFk} """;

                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();


                while (resultado.Read())
                {

                    Shared.Models.Factura modelo = new ()
                    {
                        Id = resultado.GetInt32(0),
                        Valor = resultado.GetDecimal(1),
                        PedidoFk = resultado.GetInt32(2)
                    };

                    return modelo;
                }

                return null;
            }
            catch
            {
                return null;
            }
        }
        public static bool Update(Shared.Models.Factura modelo)
        {
            try
            {
                string query = $"""UPDATE FACTURA SET VALOR = '{modelo.Valor}' AND PEDIDO = '{modelo.PedidoFk}' WHERE ID = '{modelo.Id}'""";

                DataBase.Execute(query);

                return true;

            }
            catch
            {
                return false;
            }
        }
        public static bool Delete(int id)
        {
            try
            {
                string query = $"""DELETE FROM `FACTURA` WHERE `ID` = {id}""";
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }
    }
}
