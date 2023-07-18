using Lunchsoft.Shared.Models;
using Microsoft.Extensions.Primitives;

namespace Lunchsoft.Server.Data
{
    public class Reservas
    {

        public static bool Crear(Reserva modelo)
        {
            try
            {
                string query = $""" INSERT INTO `RESERVA` (`NUMERO`, `IMAGEN`, `HORA`, `EMPLEADO_FK`) VALUES ('{modelo.Numero}', '{modelo.Imagen}','{modelo.Hora:yyyy-MM-dd HH:mm}','{modelo.EmpleadoFk}') """;
                DataBase.Execute(query);
                return true;
            }
            catch
            {
                return false;
            }
        }
        //organizar el fecha y hora de reserva
        public static Reserva? GetBy(int Numero)
        {
            try
            {
                string query = $""" SELECT * FROM RESERVA WHERE NUMERO = {Numero} """;

                MySql.Data.MySqlClient.MySqlConnection conexion = DataBase.GetConnection();

                MySql.Data.MySqlClient.MySqlCommand comando = new(query, conexion);

                var resultado = comando.ExecuteReader();

                while (resultado.Read())
                {

                    Reserva modelo = new ()
                    {
                        Id = resultado.GetInt32(0),
                        Numero = resultado.GetInt32(1),
                        Imagen = resultado.GetString(2),
                        Hora = resultado.GetDateTime(3),
                        EmpleadoFk = resultado.GetInt32(4)
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

        public static bool Update(Reserva modelo)
        {
            try
            {
                string query = $"""UPDATE RESERVA SET NUMERO = '{modelo.Numero}', IMAGEN = '{modelo.Imagen}', HORA = '{modelo.Hora}', EMPLEADO_FK = '{modelo.EmpleadoFk}' WHERE ID = '{modelo.Id}'""";

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
                string query = $"""DELETE FROM `RESERVA ` WHERE `ID` = {id}""";
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
