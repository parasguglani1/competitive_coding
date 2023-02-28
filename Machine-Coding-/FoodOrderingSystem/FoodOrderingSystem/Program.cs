using ConsoleApp1.Helpers;
using ConsoleApp1.Interfaces;
using ConsoleApp1.Services;
using FoodOrderingSystem.Entity;
using FoodOrderingSystem.Services;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            IRestaurantService _restaurantService = ServiceFactory.GetRestaurantServiceForUser();
            List<MenuItem> menu1 =  new List<FoodOrderingSystem.Entity.MenuItem>();
            menu1.Add(new MenuItem("FarmHouse1", 300));
            menu1.Add(new MenuItem("FarmHouse2", 200));
            menu1.Add(new MenuItem("FarmHouse10", 400));
            _restaurantService.AddRestaurant("Dominoz", 4.0, 1, menu1);
            List<MenuItem> menu2 = new List<FoodOrderingSystem.Entity.MenuItem>();
            menu2.Add(new MenuItem("FarmHouse1", 200));
            menu2.Add(new MenuItem("FarmHouse2", 400));
            menu2.Add(new MenuItem("FarmHouse3", 100));
            _restaurantService.AddRestaurant("PizzaHut", 3.0, 3, menu2);
            _restaurantService.UpdateMenuItem("PizzaHut", new MenuItem("FarmHouse1", 350));
            _restaurantService.UpdateMenuItem("PizzaHut2", new MenuItem("FarmHouse1", 350));
            _restaurantService.UpdateMenuItem("PizzaHut", new MenuItem("FarmHouse1", 350));
            _restaurantService.AddMenuItem("Dominoz", new MenuItem("FarmHouse7", 350));

            IOrderingService _orderService = ServiceFactory.GetOrderingServiceForUser();
            List<OrderItem> order = new List<OrderItem>();
            order.Add(new OrderItem("FarmHouse1", 2));
            order.Add(new OrderItem("FarmHouse2", 2));
            order.Add(new OrderItem("FarmHouse10", 2));
            string uid = _orderService.PlaceOrder("Ajay", order, "LowestPrice");
            string uid1 = _orderService.PlaceOrder("Ajay2", order, "LowestPrice");
            _orderService.UpdateOrderStatus(uid);

        }
    }
}