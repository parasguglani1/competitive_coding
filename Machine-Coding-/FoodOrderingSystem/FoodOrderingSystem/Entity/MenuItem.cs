using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FoodOrderingSystem.Entity
{
    internal class MenuItem
    {
        public MenuItem()
        {
            Price = 0;
        }
        public MenuItem(string itemName, double price)
        {
            ItemName = itemName;
            Price = price;
        }

        public string ItemName { get; set; }
        public double Price { get; set; }
    }
}
