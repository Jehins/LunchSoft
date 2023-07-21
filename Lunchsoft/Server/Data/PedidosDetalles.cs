using Lunchsoft.Server;

namespace Lunchsoft.Server.Data
{
    public class PedidosDetalles
    {
        public static bool Crear(Shared.Models.PedidosDetalles modelo)
        {
            try
            {
                string query = $"""INSERT INTO PEDIDOS_DETALLES (DESCRIPCION, MENU_FK, PEDIDO_FK) VALUES ('{modelo.Descripcion}', '{modelo.MenuFk}', '{modelo.PedidoFk}')""";
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }
        public static List<Shared.Models.PedidosDetalles> GetBy(int PedidoFk)
        {
            try
            {

                string query = $""" SELECT * FROM PEDIDOS_DETALLES WHERE PEDIDO_FK {PedidoFk}""";
                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();


                List<Shared.Models.PedidosDetalles> lista = new();

                while (resultado.Read())
                {
                    Shared.Models.PedidosDetalles modelo = new ()
                    {
                        Id = resultado.GetInt32(0),
                        Descripcion = resultado.GetString(1),
                        MenuFk = resultado.GetInt32(2),
                        PedidoFk = resultado.GetInt32(3),
                    };
                    lista.Add(modelo);


                }
                return lista;

            }
            catch
            {
                return new();
            }
        }
        public static List<Shared.Models.PedidosDetalles>? GetPedDet()
        {
            try
            {
                string query = $"""SELECT * FROM PEDIDOS_DETALLES""";
                var conexion = DataBase.GetConnection();
                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);
                var resultado = comando.ExecuteReader();

                List<Shared.Models.PedidosDetalles> PedDList = new();

                while (resultado.Read())
                {
                    Shared.Models.PedidosDetalles modelo = new()
                    {
                        Id = resultado.GetInt32(0),
                        Descripcion = resultado.GetString(1),
                        MenuFk = resultado.GetInt32(2),
                        PedidoFk = resultado.GetInt32(3)
                        

                    };
                    PedDList.Add(modelo);
                }
                return PedDList;
            }
            catch
            {
                return null;
            }
        }
        public static bool Update(Shared.Models.PedidosDetalles modelo)
        {
            try
            {
                string query = $"""UPDATE PEDIDOS_DETALLES SET DESCRIPCION = '{modelo.Descripcion}', MENU_FK = '{modelo.MenuFk}', PEDIDO_FK = '{modelo.PedidoFk}' WHERE Id = '{modelo.Id}'""";

                DataBase.Execute(query);

                return true;

            }
            catch
            {

            }
            return false;
        }
        public static bool Delete(int id)
        {
            try
            {
                string query = $"""DELETE FROM `PEDIDOS_DETALLES` WHERE `ID` = {id}""";
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
