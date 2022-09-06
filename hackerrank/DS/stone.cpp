#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> weights)
{
    priority_queue<int> pq;
    for (int i = 0; i < weights.size(); i++)
    {
        pq.push(weights[i]);
    }
    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        if (x != y)
        {
            pq.push(abs(x - y));
        }
    }
    if (pq.size() == 0)
    {   
        return 0;
    }
    return pq.top();
}
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << lastStoneWeight(a);
    return 0;
}
