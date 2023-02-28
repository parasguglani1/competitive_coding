using ConsoleApp1.Interfaces;
using FoodOrderingSystem.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FoodOrderingSystem.Helpers
{
    internal class StrategyFactory
    {
        public static IStrategy GetStrategy(string strategyName)
        {
            switch(strategyName)
            {
                case "LowestPrice":
                    return new LowestPriceStrategy();
                default:
                    Console.WriteLine("Strategy Not Found!");
                    return new LowestPriceStrategy();
            }
        }
    }
}
