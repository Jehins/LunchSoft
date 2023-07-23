using Lunchsoft.Server;

namespace Lunchsoft.Server.Data
{
    public class Menu
    {

        public static bool Crear(Shared.Models.Menus modelo)
        {
            try
            {
                string query = $"""INSERT INTO MENU (NAME, PRICE, DESCRIPCION,IMAGEN)VALUES('{modelo.Nombre}', '{modelo.Precio}', '{modelo.Descripcion}', '{modelo.Imagen}')""";
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }
        public static Shared.Models.Menus? GetBy(int id)
        {
            try
            {
                string query = $"""SELECT * FROM MENU WHERE ID = {id} """;

                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();


                while (resultado.Read())
                {

                    Shared.Models.Menus modelo = new ()
                    {
                        Id = resultado.GetInt32(0),
                        Nombre = resultado.GetString(1),
                        Precio = resultado.GetInt32(2),
                        Descripcion = resultado.GetString(3),
                        Imagen = resultado.GetString(4)
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

        public static List<Shared.Models.Menus>? GetMenus()
        {
            try
            {
                string query = $"""SELECT * FROM MENU""";
                var conexion = DataBase.GetConnection();
                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);
                var resultado = comando.ExecuteReader();

                List<Shared.Models.Menus> menuList = new();

                while (resultado.Read())
                {
                    Shared.Models.Menus modelo = new()
                   {
                       Id = resultado.GetInt32(0),
                       Nombre = resultado.GetString(1),
                       Precio = resultado.GetInt32(2),
                       Descripcion = resultado.GetString(3),
                       Imagen = resultado.GetString(4)
                       
                   };
                    menuList.Add(modelo);
                }
                return menuList;
            }
            catch
            {
                return null;
            }
        }
        public static bool Update(Shared.Models.Menus modelo)
        {
            try
            {
                string query = $"""UPDATE MENU SET NAME = '{modelo.Nombre}', PRICE = '{modelo.Precio}', DESCRIPCION = '{modelo.Descripcion}',IMAGEN = '{modelo.Imagen}' WHERE ID = '{modelo.Id}'""";

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
                string query = $"""DELETE FROM `MENU` WHERE `ID` = '{id}'""";
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