using Microsoft.AspNetCore.Hosting.Server;
using MySql.Data.MySqlClient;
using System.Security.Cryptography.X509Certificates;

namespace Lunchsoft.Server
{
    public class DataBase
    {
        public static MySqlConnection GetConnection()
        {
            MySql.Data.MySqlClient.MySqlConnection conexion = new(@"Server=db4free.net; UserID = grupo3;Password=LunchSoft123;Database=lunchsoftdata;");
            conexion.Open();
            return conexion;
        }

        /// <summary>
        /// Ejecuta un comado (INSERT, UPDATE, DELETE)
        /// </summary>
        /// <param name="consulta"></param>
        public static void Execute(string consulta)
        {

            MySql.Data.MySqlClient.MySqlConnection conexion = GetConnection();

            MySql.Data.MySqlClient.MySqlCommand comando = new(consulta, conexion);

            comando.ExecuteScalar();

        }

    }
}
