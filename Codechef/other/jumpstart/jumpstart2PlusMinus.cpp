#include <bits/stdc++.h>
using namespace std;
int numPermsDISequence(string S)
{
    int n = S.size(), m = 1e9 + 7;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= i; j++)
            if (S[i - 1] == '-')
                for (int k = j; k <= i - 1; k++)
                    dp[i][j] = dp[i][j] % m + dp[i - 1][k] % m;
            else
                for (int k = 0; k <= j - 1; k++)
                    dp[i][j] = dp[i][j] % m + dp[i - 1][k] % m;
    int res = 0;
    for (int i = 0; i <= n; i++)
        res = res % m + dp[n][i] % m;
    return res % m;
}


int main()
{
    string s;
    cin >> s;
    cout << numPermsDISequence(s);

    return 0;
}