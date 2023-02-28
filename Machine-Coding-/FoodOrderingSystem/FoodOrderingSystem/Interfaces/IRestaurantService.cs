using FoodOrderingSystem.Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1.Interfaces
{
    internal interface IRestaurantService
    {
        void AddRestaurant(string name, double rating, int maxOrders, List<MenuItem> menu);
        void UpdateMenuItem(string restaurantname, MenuItem item);
        void AddMenuItem(string restaurantname, MenuItem item);
    }
}
