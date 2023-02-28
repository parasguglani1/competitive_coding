using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FoodOrderingSystem.Entity
{
    internal class OrderItem
    {
        public OrderItem(string itemName, int quantity)
        {
            ItemName = itemName;
            Quantity = quantity;
        }

        public string ItemName { get; set; }
        public int Quantity { get; set; }
    }
}
