#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define vi vector<int>
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))

class Solution
{
public:
    int maximumpoints(vector<vector<int>> vec, int n, int x, int y)
    {
        int res = 0;
        vector<vector<int>> dp(1005, vector<int>(1005, 0));
        int mxx1 = 0, mxx2 = 0;

        rep(i, n)
        {
            int xx1 = vec[i][0], xx2 = vec[i][1];
            mxx1 = max(mxx1, xx1);
            mxx2 = max(mxx2, xx2);

            dp[xx1 + 1][xx2 + 1]++;
        }

        mxx1 = max(mxx1, x);
        mxx2 = max(mxx2, y);
        REP(i, 1, mxx1 + 5)
        {
            REP(j, 1, mxx2 + 5)
            {
                dp[i][j] += (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]);
            }
        }

        REP(i, x + 1, mxx1 + 5)
        {
            REP(j, y + 1, mxx2 + 5)
            {
                int p = dp[i][j] + dp[i - x - 1][j - y - 1] - dp[i - x - 1][j] - dp[i][j - y - 1];
                res = max(res, p);
            }
        }
        return res;
    }
};
