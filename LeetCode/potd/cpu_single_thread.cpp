#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> getOrder(vector<vector<int>> &tasks)
    {
        ll n = tasks.size();

        for (int i = 0; i < n; i++)
        {
            tasks[i].push_back(i);
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        ll time = 0;
        sort(tasks.begin(), tasks.end());
        vector<int> ans;
        ll i = 0;
        while (i < n || !pq.empty())
        {
            if (pq.empty())
            {

                time = max(time, (ll)tasks[i][0]);
            }
            while (i < n && time >= tasks[i][0])
            {
                pq.push({tasks[i][1], tasks[i][2]});
                i++;
            }
            time += pq.top().first;
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
