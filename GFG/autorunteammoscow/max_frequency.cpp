#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int N, int y, vector<int> A)
    {
        map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            mp[A[i]]++;
        }
        int ans = 0;
        for (auto i : mp)
        {

               ans= max(ans, i.second);
        }
        return ans;

        // code here
    }
};
