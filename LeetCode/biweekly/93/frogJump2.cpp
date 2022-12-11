#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxJump(vector<int> &stones)
    {
        int ans = stones[1] - stones[0];
        for (int i = 2; i < stones.size(); i++)
        {
            int res = stones[i] - stones[i - 2];
            ans = max(ans, res);
        }
        return ans;
    }
};
