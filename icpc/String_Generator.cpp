#include <bits/stdc++.h>
using namespace std;
#define fr(i, L, R) for (int i = L; i < R; i++)
#define fb(i, L, R) for (int i = L; i > R; i--)
#define ll long long int
#define INF 1001001001
#define PI 3.1415926535897932384626
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define pb push_back
#define M 1000000007
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef map<int, int> mpi;
typedef map<int, vector<int>> mpvi;

int solve(string &s1, string &s2, int k, int i, int j, vector<vector<int>> &dp)
{
    if (k == s1.length())
        return true;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s1[k] == s2[i] && s1[k] == s2[j])
    {
        return dp[i][j] = solve(s1, s2, k + 1, i + 1, j, dp) | solve(s1, s2, k + 1, i, j - 1, dp);
    }
    if (s1[k] == s2[i])
    {
        return dp[i][j] = solve(s1, s2, k + 1, i + 1, j, dp);
    }
    if (s1[k] == s2[j])
    {
        return dp[i][j] = solve(s1, s2, k + 1, i, j - 1, dp);
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int c = 1; c <= t; ++c)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        reverse(all(s1));
        vector<vector<int>> dp(s1.length(), vector<int>(s2.length(), -1));
        if (solve(s1, s2, 0, 0, s1.length() - 1, dp))
        {
            cout << "Case " << c << ": "
                 << "YES\n";
        }
        else
            cout << "Case " << c << ": "
                 << "NO\n";
    }
    return 0;
}
