using ConsoleApp1.Helpers;
using ConsoleApp1.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FoodOrderingSystem.Entity;
using FoodOrderingSystem.Helpers;
using ConsoleApp1.Interfaces;

namespace FoodOrderingSystem.Services
{
    internal class OrderingService : IOrderingService
    {
        private RestaurantService _resService = ServiceFactory.GetRestaurantService();
        private UniqueIdGenerator _unqGen = new UniqueIdGenerator("Order");
        public string PlaceOrder(string userName, List<OrderItem> order, string strategy)
        {
            string orderId = "none";
            try
            {
                List<Restaurant> restaurants = _resService.GetRestaurant();
                List<Restaurant> validRest = restaurants.Where(res => res.CanSatisfyOrder(order)).ToList();
                IStrategy strat = StrategyFactory.GetStrategy(strategy);
                Restaurant res = strat.GetRestaurant(validRest, order, out double amount);

                if (res == null)
                {
                    Console.WriteLine("No Restaurant Available!");
                    return orderId;
                }
                Order ord = new Order(order, _unqGen.GetUid(), amount, res.Name, userName);
                if (res.AddOrder(ord))
                {
                    ord.Status = OrderStatus.Accepted;
                    orderId = ord.OrderId;
                }
                else
                {
                    Console.WriteLine("All Restaurants are booked!");
                }
            }
            catch(Exception ex)
            {
                Console.WriteLine("Unknown Failure Occured! Sorry For Inconvenience!");
                Logger.Log("Place Order : " + ex.Message);
            }
            return orderId;
        }
        public void UpdateOrderStatus(string orderId)
        {
            try
            {
                List<Restaurant> restaurants = _resService.GetRestaurant();
                var resList = restaurants.Where(re => re.ContainsOrder(orderId));
                if (!resList.Any())
                {
                    Console.WriteLine("No Such OrderId Found");
                    return;
                }
                Restaurant res = resList.First();
                res.UpdateOrder(orderId);
                Console.WriteLine("Order Updated!");
                return;
            }
            catch (Exception ex )
            {
                Console.WriteLine("Unknown Failure Occured! Sorry For Inconvenience!");
                Logger.Log("Update Order : " + ex.Message);
            }
        }
    }
}
