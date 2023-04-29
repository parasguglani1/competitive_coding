#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
// https://www.hackerrank.com/contests/gfg-cu-2/challenges
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
#define cl cout << "CHARLIE" << endl;
#define da cout << "DAVID" << endl;
void pgsolve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    int charlie = 0;
    REP(i, x, n + 1)
    {
        if (i % x == 0 && i % y != 0)
        {
            charlie++;
        }
    }
    int david = 0;
    REP(i, y, n + 1)
    {
        if (i % y == 0 && i % x != 0)
        {
            david++;
        }
    }

    int gcd = __gcd(x, y);
    int lcm = (x * y) / gcd;
    int com = 0;
    REP(i, lcm, n)
    {
        if (i % lcm == 0)
        {
            com++;
        }
    }

    if (com % 2 == 0)
    {
        if (david >= charlie)
        {
            da
        }

        else
        {
            cl
        }
    }
    else
    {
        if (david > charlie + 1)
        {
            da
        }

        else
        {
            cl
        }
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

    // w(t)
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
