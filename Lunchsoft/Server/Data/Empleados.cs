namespace Lunchsoft.Server.Data
{
    public class Empleados
    {
        public static bool Crear(Shared.Models.Empleados modelo)
        {
            try
            {
                string query = $""" INSERT INTO `EMPLEADO` (`USER`, `NAME`, `AGE`, `PASS`, `TYPE_FK`) VALUES ('{modelo.User}','{modelo.Name}','{modelo.Age}','{modelo.Pass}','{modelo.TypeFk}') """;
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }


        public static Shared.Models.Empleados? GetBy(string User, string Pass, int TypeFk)
        {
            try
            {
                string query = $""" SELECT * FROM EMPLEADO WHERE USER = '{User}' AND PASS = '{Pass}' AND TYPE_FK = {TypeFk} """;

                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();

                while (resultado.Read())
                {

                    Shared.Models.Empleados modelo = new ()
                    {
                        Id = resultado.GetInt32(0),
                        User = resultado.GetString(1),
                        Name = resultado.GetString(2),
                        Age = resultado.GetInt32(3),
                        Pass = resultado.GetString(4),
                        TypeFk = resultado.GetInt32(5)
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
        public static bool Update(Shared.Models.Empleados modelo)
        {
            try
            {
                string query = $"""UPDATE EMPLEADO SET USER = '{modelo.User}', NAME = '{modelo.Name}', AGE = '{modelo.Age}',  PASS = '{modelo.Pass}', TYPE_FK = '{modelo.TypeFk}' WHERE ID = '{modelo.Id}'""";

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
                string query = $"DELETE FROM `EMPLEADO` WHERE `ID` = {id}";
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