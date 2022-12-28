#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        priority_queue<int> pq;
        cout << piles.size() << endl;
        for (int i = 0; i < piles.size(); i++)
        {
            cout << piles[i] << " ";

            pq.push(piles[i]);
            
        }
        cout << pq.size() << endl;
        for (int i = 0; i < k; i++)
        {
            int x = pq.top();
            x -= x / 2;
            pq.pop();
            pq.push(x);
        }
        cout << pq.size() << endl;

        int sum = 0;
        for (int i = 0; i <= pq.size(); i++)
        {
            sum += pq.top();
            cout << pq.top() << " ";

            pq.pop();
        }
        cout << pq.top();

        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> piles = {5, 4, 9};
    int k = 2;
    cout << s.minStoneSum(piles, k);
    return 0;
}
