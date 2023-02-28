using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace FoodOrderingSystem.Helpers
{
    static class Logger
    {
        public static void Log(string message)
        {
            message = DateTime.Now.ToString("yyyy-MM-DD_HH-mm-ss") + " : " + message;
            File.AppendAllText(".\\log.txt", message);
        }
    }
}
