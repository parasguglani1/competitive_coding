#include <bits/stdc++.h>
using namespace std;

#define TTT template <typename T>

#define ff first
#define ss second
#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007

#define inf 1e18
#define PI 3.1415926535897932384626
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)     \
    int str2;    \
    cin >> str2; \
    while (str2--)
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
const int MAX = 2e6 + 50;
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\Codechef\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\Codechef\\output.txt", "w", stdout);
#endif
}

int k, n, m, N;
int z[MAX], pi[MAX], g[MAX], exist[MAX];

int32_t main()

{
    paras();
    w(t)
    {
        string str2, str1, S;
        string str;
        cin >> str1 >> str >> str2;
        int k = str2.length(), n = str1.length(), m = str.length();

        int l = 0, r = 0;
        int max_con = max(n, m) + k + 10;

        rep(i, max_con + 1)

        {
            z[i] = 0, pi[i] = 0, g[i] = 0, exist[i] = 0;
        }

        S = str + "?" + str2;
        N = S.length();

        REP(i, 1, N - 1)

        {
            if (i <= r)
            {
                z[i] = min(r - i + 1, z[i - l]);
            }
          
               while (i + z[i] < N && S[z[i]] == S[i + z[i]])
            {
                ++z[i];
            }
            if (i + z[i] - 1 > r)
            {
                l = i, r = i + z[i] - 1;
            }
        }

        S = str1 + "?" + str2;
        N = S.length();

        REP(i, 1, N - 1)

        {
            int j;
            j = pi[i - 1];
            while (j > 0 && S[i] != S[j])
            {
                j = pi[j - 1];
            }
            if (S[i] == S[j])
            {
                j = j + 1;
            }
            pi[i] = j;

            if (i > n)
            {
                j = i - n;
                g[pi[i]] = max(g[pi[i]], z[j + m + 1]);
                exist[pi[i]] = 1;
            }
        }
        g[0] = max(z[m + 1], g[0]);
        exist[0] = 1;

        int distinct = 0;

        for (int i = n; i >= 0; --i)
        {
            if (!exist[i])
                continue;
            distinct = distinct + g[i] + 1;

            exist[pi[i - 1]] = 1;
            g[pi[i - 1]] = max(g[pi[i - 1]], g[i]);
        }

        cout << distinct << "\n";
    }

    return 0;
}