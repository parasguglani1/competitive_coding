
#include <bits/stdc++.h>
using namespace std;

#define mee(a, b) memset(a, b, sizeof a)

const int mx = 17;

int dp[mx][1 << mx];
int n;
vector<int> a, b;
int solve(vector<int> &A, vector<int> &B);

signed main()
{
    // mee(dp, -1);
    cin >> n;
    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << solve(a, b) << endl;
}

int getans(int ind, int bm)
{

    if (ind == n)
    {
        return 0;
    }

    if (dp[ind][bm] != -1)
        return dp[ind][bm];

    int ret = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (((bm >> i) & 1) == 0)
        {
            ret = min(ret, (a[ind] ^ b[i]) + getans(ind + 1, bm | (1 << i)));
        }
    }

    return dp[ind][bm] = ret;
}

int solve(vector<int> &A, vector<int> &B)

{
    a = A;
    b = B;
    n = A.size();
    mee(dp, -1);
    return getans(0, 0);
}
