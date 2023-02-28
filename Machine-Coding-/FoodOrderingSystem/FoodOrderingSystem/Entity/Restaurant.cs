using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace FoodOrderingSystem.Entity
{
    internal class Restaurant
    {
        public Restaurant(string name, double rating, int maxOrders, List<MenuItem> menu)
        {
            Name = name;
            Rating = rating;
            MaxCapacity = maxOrders;
            Menu = menu;
        }
        public string Name { get; set; }
        public int MaxCapacity { get; private set; }
        public double Rating { get; private set; }
        public List<MenuItem> Menu { get; private set; }
        public List<Order> Orders { get; private set; } = new List<Order>();

        public bool CanSatisfyOrder(List<OrderItem> orders)
        {
            HashSet<string> itemNames =  new HashSet<string>();
            foreach (var order in orders) { itemNames.Add(order.ItemName); }

            return (Menu.Where(it => itemNames.Contains(it.ItemName)).Count() == itemNames.Count); 
        }
        public double ComputeOrderPrice(List<OrderItem> orders)
        {
            double price = 0;   
            foreach(var ord in orders)
            {
                MenuItem item = Menu.Where(it => it.ItemName == ord.ItemName).FirstOrDefault();
                price += ord.Quantity * item.Price;
            }
            return price;
        }
        public bool CanAcceptOrder()
        {
            return MaxCapacity > Orders.Count;
        }
        public bool AddOrder(Order order)
        {
            if(CanAcceptOrder() == false)
            {
                return false;
            }
            Orders.Add(order);
            return true;
        }
        public bool ContainsOrder(string orderId)
        {
            return Orders.Where(or => or.OrderId == orderId).Any();
        }
        public bool UpdateOrder(string orderId)
        {
            if (!ContainsOrder(orderId))
            {
                return false;
            }
            Order ord =  Orders.Where(or => or.OrderId == orderId).FirstOrDefault();
            ord.Status = OrderStatus.Completed;
            Orders.Remove(ord);
            return true;
        }
    }
}
