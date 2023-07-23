namespace Lunchsoft.Server.Data
{
    public class Bebida
    {
        public static bool Crear(Shared.Models.Bebida modelo)
        {
            try
            {
                string query = $"""INSERT INTO BEBIDA (NAME, PRICE, DESCRIPCION,IMAGEN)VALUES('{modelo.Nombre}', '{modelo.Precio}', '{modelo.Descripcion}', '{modelo.Imagen}')""";
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }
        public static Shared.Models.Bebida? GetBy(int id)
        {
            try
            {
                string query = $"""SELECT * FROM BEBIDA WHERE ID = '{id}' """;

                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();


                while (resultado.Read())
                {

                    Shared.Models.Bebida modelo = new()
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

        public static List<Shared.Models.Bebida>? GetBebida()
        {
            try
            {
                string query = $"""SELECT * FROM BEBIDA""";
                var conexion = DataBase.GetConnection();
                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);
                var resultado = comando.ExecuteReader();

                List<Shared.Models.Bebida> menuList = new();

                while (resultado.Read())
                {
                    Shared.Models.Bebida modelo = new()
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
        public static bool Update(Shared.Models.Bebida modelo)
        {
            try
            {
                string query = $"""UPDATE BEBIDA SET NAME = '{modelo.Nombre}', PRICE = '{modelo.Precio}', DESCRIPCION = '{modelo.Descripcion}',IMAGEN = '{modelo.Imagen}' WHERE ID = '{modelo.Id}'""";

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
                string query = $"""DELETE FROM `BEBIDA` WHERE `ID` = '{id}' """;
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
