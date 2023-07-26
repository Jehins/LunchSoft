namespace Lunchsoft.Server.Data
{
    public class Factura
    {

        public static bool Crear(Shared.Models.Factura modelo)
        {
            try
            {
                string query = $"""INSERT INTO FACTURA (VALOR, PEDIDOD_FK) VALUES ('{modelo.Valor}', '{modelo.PedidoFk}') """;
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
                string query = $""" SELECT * FROM FACTURA WHERE PEDIDOD_FK = {pedidoFk} """;

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
        public static List<Shared.Models.Factura>? GetFactura()
        {
            try
            {
                string query = $"""SELECT * FROM FACTURA""";
                var conexion = DataBase.GetConnection();
                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);
                var resultado = comando.ExecuteReader();

                List<Shared.Models.Factura> facturaList = new();

                while (resultado.Read())
                {
                    Shared.Models.Factura modelo = new()
                    {
                        Id = resultado.GetInt32(0),
                        Valor = resultado.GetInt32(1),
                        PedidoFk = resultado.GetInt32(2)

                    };
                    facturaList.Add(modelo);
                }
                return facturaList;
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
                string query = $"""UPDATE FACTURA SET VALOR = '{modelo.Valor}' AND PEDIDOD_FK = '{modelo.PedidoFk}' WHERE ID = '{modelo.Id}'""";

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
