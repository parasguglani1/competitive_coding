using FoodOrderingSystem.Entity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1.Interfaces
{
    internal interface IOrderingService
    {
        string PlaceOrder(string userName, List<OrderItem> order, string strategy);
        void UpdateOrderStatus(string orderId);

    }
}
