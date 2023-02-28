using ConsoleApp1.Interfaces;
using ConsoleApp1.Services;
using FoodOrderingSystem.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1.Helpers
{
    internal static class ServiceFactory
    {
        private static RestaurantService _restaurantService = null;
        private static OrderingService _orderService = null;
        public static IRestaurantService GetRestaurantServiceForUser()
        {
            if (_restaurantService == null)
            {
                _restaurantService = new RestaurantService();
            }
            return _restaurantService;
        }
        public static IOrderingService GetOrderingServiceForUser()
        {
            if (_orderService == null)
            {
                _orderService = new OrderingService();
            }
            return _orderService;
        }
        public static RestaurantService GetRestaurantService()
        {
            if (_restaurantService == null)
            {
                _restaurantService = new RestaurantService();
            }
            return _restaurantService;
        }
        public static OrderingService GetOrderingService()
        {
            if (_orderService == null)
            {
                _orderService = new OrderingService();
            }
            return _orderService;
        }
    }

    public class SingletonClass{
        private SingletonClass()
        {
                    
        }
        private SingletonClass obj = null;

        public SingletonClass getInstance()
        {
            if(obj == null)
            {
                obj = new SingletonClass();
            }
            return obj;
        }
    }
}
