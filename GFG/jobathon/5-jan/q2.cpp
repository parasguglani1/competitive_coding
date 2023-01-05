#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define rep(i, n) for (int i = 0; i < n; ++i)

class Solution
{
public:
    long long findGoodPairs(vector<int> a, int n, int k)
    {
        ll res = 0;
        map<int, vector<int>> mpp;
        rep(i, n)
        {
            mpp[a[i]].pb(i);
        }
        for (auto x : mpp)
        {
            vector<int> v = x.second;
            int sz = v.size();
            rep(i, sz)
            {
                res += v.end() - lower_bound(v.begin(), v.end(), v[i] + k);
            }
        }
        return res;
    }
};
