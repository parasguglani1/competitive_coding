using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FoodOrderingSystem.Entity
{
    public enum OrderStatus
    {
        Created,
        Accepted, 
        Completed
    }
    internal class Order
    {
        public Order(List<OrderItem> orderItems, string orderId, double price, string restaurantName, string user)
        {
            Status = OrderStatus.Created;
            OrderItems = orderItems;
            OrderId = orderId;
            Price = price;
            RestaurantName = restaurantName;
            User = user;
        }

        public OrderStatus Status { get; set; }
        public List<OrderItem> OrderItems { get; set; }
        public string OrderId { get; set; }
        public double Price { get; set; }
        public string RestaurantName { get; set; }
        public string User { get; set; }

    }
}
