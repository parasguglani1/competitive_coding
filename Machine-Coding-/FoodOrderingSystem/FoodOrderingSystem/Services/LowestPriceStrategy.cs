using ConsoleApp1.Interfaces;
using FoodOrderingSystem.Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FoodOrderingSystem.Services
{
    internal class LowestPriceStrategy : IStrategy
    {
        public Restaurant GetRestaurant(List<Restaurant> restaurants, List<OrderItem> order, out double amount)
        {
            amount = 0;
            if(restaurants.Any() == false) { return null; }
            double price = double.MaxValue;
            Restaurant bestres = null;
            foreach(var res  in restaurants)
            {
                double temp = res.ComputeOrderPrice(order);
                if(temp < price)
                {
                    price = temp;
                    bestres = res;
                }
            }
            amount = price;
            return bestres;
        }
    }
}
