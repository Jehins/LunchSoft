using System.Security.Cryptography;
using System.Text;
using System;

namespace Lunchsoft.Shared.Security
{

    // Clase
    public class Encriptar
    {


        // Acceso
        // Modificadores: static, override, abstract
        // Tipo que retorna
        // Recibe parametros ? Si / No
        // Cuales
        public static string Encripta(string clave)
        {
            var bytes = SHA256.HashData(Encoding.UTF8.GetBytes(clave));
            return Convert.ToBase64String(bytes);
        }



    }
}
