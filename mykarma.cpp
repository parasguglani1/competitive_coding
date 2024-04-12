#include <bits/stdc++.h>
using namespace std;

struct Compare
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        if (a.first == b.first)
        {
            return a.second > b.second; // For the same first value, order by second value in decreasing order
        }
        return a.first < b.first; // Otherwise, order by first value in increasing order
    }
};
// int getMinimumTime(vector<int> processSize, vector<int> capacity)
// {
//     int n = processSize.size();
//     int m = capacity.size();

//     sort(processSize.rbegin(), processSize.rend());
//     sort(capacity.begin(), capacity.end());
//     multiset<pair<int, int>> s;
//     for (int i = 0; i < m; i++)
//     {
//         s.insert({0, capacity[i]});
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int secondValueToFind = processSize[i];
//         // auto it = s.begin();
//         auto it = find_if(s.begin(), s.end(), [secondValueToFind](const pair<int, int> &elem)
//                           { return elem.second <= secondValueToFind; });
//         if (it == s.end())
//         {
//             it = s.begin();
//         }
//         pair<int, int> p = *it;
//         s.erase(it);
//         p.first++;
//         s.insert(p);
//     }

//     int ans = s.begin()->first;
//     return ans * 2 - 1;
// }

int getMinimumTime(vector<int> processSize, vector<int> capacity)
{
    int n = processSize.size();
    int m = capacity.size();

    sort(processSize.rbegin(), processSize.rend());
    sort(capacity.begin(), capacity.end());

    vector<pair<int, int>> capacityTime;
    for (int i = 0; i < m; i++)
    {
        capacityTime.push_back({capacity[i], 0});
    }
    if (capacity[m - 1] < processSize[0])
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        // cout<<processSize[i]<<" ";

        // search for the first element greater than or equal to processSize[i] in capacity
        auto it = lower_bound(capacity.begin(), capacity.end(), processSize[i]);

        int index = it - capacity.begin();
        if (capacityTime[index].second == 0)
        {
            capacityTime[index].second = 1;
        }
        else
        {
            // get minimum second time from ind to end of capacityTime and increment it
            int minTime = capacityTime[index].second;
            int mindIndex = index;
            for (int j = index; j < m; j++)
            {
                if (capacityTime[j].second < minTime)
                {
                    minTime = capacityTime[j].second;
                    mindIndex = j;
                }
            }
            capacityTime[mindIndex].second++;
        }
    }

    int totalTime = 0;
    for (int i = 0; i < m; i++)
    {
        totalTime = max(totalTime, capacityTime[i].second);
    }
    return totalTime * 2 - 1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> processSize(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> processSize[i];
    }
    int m;
    cin >> m;
    vector<int> capacity(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> capacity[i];
    }

    cout << getMinimumTime(processSize, capacity) << endl;
    return 0;
}
