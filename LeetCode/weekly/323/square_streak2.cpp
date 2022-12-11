#include <bits/stdc++.h>
using namespace std;
class Solution
{

    // 2 4 16
public:
    bool isSquare(int n)
    {
        int sq = sqrt(n);
        if (sq * sq == n)
        {
            return true;
        }
        return false;
    }
    int longestSquareStreak(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        sort(nums.begin(), nums.end());
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            int sqr = nums[i];
            int streak = 1;
            while (true)
            {
                long long sq =1LL* sqr * sqr ;
                if (mp.find(sq) != mp.end() && mp[sq] != -1)
                {
                    sqr = sq;
                    streak++;
                }
                else
                {
                    mp[sq] = -1;
                    break;
                }
            }
            if (streak > 1)
            {
                ans = max(ans, streak);
            }
        }
        return ans;
    }
};
