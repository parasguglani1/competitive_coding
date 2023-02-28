using FoodOrderingSystem.Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1.Interfaces
{
    internal interface IStrategy
    {
        Restaurant GetRestaurant(List<Restaurant> restaurants, List<OrderItem> order, out double amount);
    }
}
