#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define PI 3.1415926535897932384626
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void pgsolve()
{
    string str1, str2;
    cin >> str1 >> str2;
    if (str1 == str2)
    {
        yes;
        cout << str1 << endl;
        return;
    }
    int n = str1.length();
    int m = str2.length();
    // get the longest common substring of str1 and str2 in str3
    string str3 = "";
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    int max = 0;
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > max)
                {
                    max = dp[i][j];
                    index = i;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    if (max == 0 || max == 1 && (str1[0] != str2[0]) && (str1[n - 1] != str2[m - 1]))
    {
        no;
        return;
    }
    else if (max == 1)
    {
        yes;
        if ((str1[0] == str2[0]))
        {
            cout << str1[0] << '*' << endl;
        }
        else if ((str1[n - 1] == str2[m - 1]))
        {
            cout << '*' << str1[n - 1] << endl;
        }
    }
    else
    {
        yes;
        for (int i = index - max; i < index; i++)
        {
            str3 += str1[i];
        }
        // int start = 0;
        // start = str1.find(str3);
        // cout << start << endl;
        // if (str1.find(str3) == str2.find(str3))
        cout << '*' + str3 + '*' << endl;
    }
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
