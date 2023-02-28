using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ConsoleApp1.Interfaces;
using FoodOrderingSystem.Entity;
using FoodOrderingSystem.Helpers;
namespace ConsoleApp1.Services
{
    internal class RestaurantService : IRestaurantService
    {
        private Dictionary<string, Restaurant> _nameToRestaurant = new Dictionary<string, Restaurant>();
        public void AddRestaurant(string name, double rating, int maxOrders, List<MenuItem> menu)
        {
            try
            {
                if (_nameToRestaurant.ContainsKey(name))
                {
                    Console.Write("Restaurant by Name : {0} already exists!", name);
                    return;
                }
                Logger.Log("Adding Restaurant : " + name);
                _nameToRestaurant.Add(name, new Restaurant(name, rating, maxOrders, menu ));
                Console.WriteLine("Restaurant Added!");
            }
            catch (Exception ex)
            {
                Logger.Log("Unknown Exception : " + ex.Message);
            }
        }
        public void UpdateMenuItem(string restaurantname, MenuItem item)
        {
            try
            {
                if (!_nameToRestaurant.ContainsKey(restaurantname))
                {
                    Console.Write("Restaurant by Name : {0} doesn't exists!", restaurantname);
                    return;
                }
                Restaurant rest = _nameToRestaurant[restaurantname];
                if (!rest.Menu.Where(it => it.ItemName == item.ItemName).Any())
                {
                    Console.Write("Restaurant by Name : {0} doesn't contain the supplied MenuItem!", restaurantname);
                    return;
                }
                MenuItem mitem = rest.Menu.Where(menu => menu.ItemName == item.ItemName).First();
                mitem.Price = item.Price;
                Logger.Log(String.Format("Price of Menu Item {0} in Restaurant {1} Updated to {2} : ",item.ItemName, restaurantname, item.Price));
            }
            catch (Exception ex)
            {
                Logger.Log("Unknown Exception : " + ex.Message);
            }
        }
        public void AddMenuItem(string restaurantname, MenuItem item)
        {
            try
            {
                if (!_nameToRestaurant.ContainsKey(restaurantname))
                {
                    Console.Write("Restaurant by Name : {0} doesn't exists!", restaurantname);
                    return;
                }
                Restaurant rest = _nameToRestaurant[restaurantname];
                if (rest.Menu.Contains(item))
                {
                    Console.Write("Restaurant by Name : {0} already contain the supplied MenuItem!", restaurantname);
                    return;
                }
                rest.Menu.Add(item);
                Logger.Log(String.Format("Price of Menu Item {0} in Restaurant {1} Updated to {2} : ", item.ItemName, restaurantname, item.Price));
            }
            catch (Exception ex)
            {
                Logger.Log("Unknown Exception : " + ex.Message);
            }
          
        }
        public List<Restaurant> GetRestaurant()
        {
            return _nameToRestaurant.Values.ToList();
        }
    }
}
