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
                string query = $""" INSERT INTO `RESERVA` (`NUMERO`, `HORA`, `IMAGEN`, `EMPLEADO_FK`) VALUES ('{modelo.Numero}','{modelo.Hora:yyyy-MM-dd HH:mm}', '{modelo.Imagen}', '{modelo.EmpleadoFk}') """;
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
                        Hora = resultado.GetDateTime(2),
                        Imagen = resultado.GetString(3),
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
                string query = $"""UPDATE RESERVA SET NUMERO = '{modelo.Numero}', HORA = '{modelo.Hora}', IMAGEN = '{modelo.Imagen}', EMPLEADO_FK = '{modelo.EmpleadoFk}' WHERE ID = '{modelo.Id}'""";

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
