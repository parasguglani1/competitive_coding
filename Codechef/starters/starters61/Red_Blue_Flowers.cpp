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
int v2[1000], v1[1000], dp[102][30001], sum;
void getmax(int i, int j, int n, int pos)
{
    if (pos == n + 1)
    {
        if (min(i, j) > sum)
        {
            sum = min(i, j);
        }
        return;
    }
    if (!(dp[pos][i] < j) && !(dp[pos][i] == 0))
    {
        return;
    }

    else
    {
        dp[pos][i] = j;
        getmax(i, j + v2[pos], n, pos + 1);
        getmax(i + v1[pos], j, n, pos + 1);
    }
}
void pgsolve()
{
    int n;
    cin >> n;

    REP(i, 1, n + 1)
    {
        cin >> v1[i];
    }
    REP(i, 1, n + 1)
    {
        cin >> v2[i];
    }
    REP(i, 1, n + 1)
    {
        rep(j, 30001)
        {
            dp[i][j] = 0;
        }
    }
    sum = 0;
    getmax(0, 0, n, 1);
    cout << sum << endl;
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
