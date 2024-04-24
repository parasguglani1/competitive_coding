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
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int getans(int n, int k, int diagonals)
{
    int less1 = getans(n, k - 1, diagonals - 1);
    int less2 = getans(n, k - 2, diagonals);

    return (less1 + less2) % mod;
}
void pgsolve()
{
    // if placed on diagonal possibilities reduces by 1 otherwise 2
    int n, k;
    cin >> n >> k;
    int avail = n;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
        {
            avail--;
        }
        else
        {
            avail -= 2;
        }
    }
    int ans = 0;
    vector<int> dp(avail + 1);

    dp[0] = 1;
    int possibilities = n - 2 * k;
    int diagonals = n;

    REP(i, 1, avail + 1)
    {
        dp[i] = dp[i - 1];
        if (i > 1)
        {
            int rem = dp[i - 2];
            rem *= 2 * (i - 1);
            rem %= mod;
            dp[i] += rem;
            dp[i] %= mod;
        }
    }
    ans = dp[avail];
    cout << ans << endl;
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
