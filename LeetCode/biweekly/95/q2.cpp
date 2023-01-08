/* For a stream of integers, implement a data structure that checks if the last k integers parsed in the stream are equal to value.

Implement the DataStream class:

DataStream(int value, int k) Initializes the object with an empty integer stream and the two integers value and k.
boolean consec(int num) Adds num to the stream of integers. Returns true if the last k integers are equal to value, and false otherwise. If there are less than k integers, the condition does not hold true, so returns false.
 */
#include <bits/stdc++.h>
using namespace std;

class DataStream
{
public:
    int value;
    int k;
    // vector<long long> v;
    // bool flag = false;
    // int since = 0;
    int count = 0;

    DataStream(int value, int k)
    {

        this->value = value;
        this->k = k;
    }

    bool consec(int num)
    {

        if (num == value)
            count++;
        else
            count = 0;
        if (count >= k)
            return true;
        else
            return false;
        // cout<<endl;

        /*  this->v.push_back(num * 1ll);
         // cout<<"vector: ";
         // for (int i = 0; i < v.size(); i++)
         // {
         //     cout<<v[i]<<" ";
         // }
         // cout<<endl;
         if (this->v.size() < k)
         {
             return false;
         }
         else
         {
             // reduce complexity

             /*  for (int i = v.size() - k; i<v.size(); i++)
              {
                  if (v[i] != value)
                  {
                      // cout<<v[i]<<" "<<value<<endl;
                      // cout<<"false"<<endl;
                      return false;
                  }
              } */
    }

};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */

int
main()
{
    int value, k, num;
    cin >> value >> k;
    DataStream obj(value, k);
    while (cin >> num)
    {
        cout << obj.consec(num) << endl;
    }
    return 0;
}
