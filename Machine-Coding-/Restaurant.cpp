#include <bits/stdc++.h>
using namespace std;
class restaurant
{
public:
    map<string, int> menu;
    int rating;
    int maxorders;
    int currorder;
    string name;
    restaurant(string name, map<string, int> menu, int rating, int maxorders)
    {
        this->name = name;
        this->maxorders = maxorders;
        this->menu = menu;
        this->rating = rating;
    }
    void updatemenu(string str, int val)
    {
        menu[str] = val;
    }
    bool isorderpossible(order od)
    {
        if (currorder = maxorders)
        {
            return false;
        }
        for (int i = 0; i < od.ordd.size(); i++)
        {
            if (menu.find(od.ordd[i]) == menu.end())
            {
                return false;
            }
        }
        return true;
        currorder++;
    }
};
class foodmanagementSystem
{
public:
    vector<restaurant> v;
    void insertrestaurant(restaurant *res)
    {
        v.push_back(*res);
        sort(v.begin(), v.end());
    }
};
class order
{
public:
    vector<string, int> ordd;
    
};

int main()
{
    foodmanagementSystem fs;
    map<string, int> mp = {{"butter", 10}, {"paneer", 49}};
    restaurant *res1 = new restaurant("r1", mp, 5, 5);
    fs.insertrestaurant(res1);
    // create menu driven program
    int choice;
    do
    {
        cout << "Enter your choice" << endl;
        cout << "1. for inserting restaurant" << endl;
        cout << "2. for updating restaurant menu" << endl;
        cout << "3. for inserting restaurant" << endl;
        cout << "4. for giving order" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:

            break;

        default:
            break;
        }

    }

    while (choice != -1);

    return 0;
    // https://leetcode.com/discuss/study-guide/3231299/secret-to-cracking-machine-coding-rounds
}
