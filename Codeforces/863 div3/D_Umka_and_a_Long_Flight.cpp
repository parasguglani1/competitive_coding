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

bool isposs(int x, int y, int n, vector<int> &fib)
{

    if (n != 1)
    {
        int oppy = fib[n + 1] - y + 1;
        int tmp = min(y, oppy);
        int diff = fib[n + 1] - fib[n];
        if (tmp <= diff)
        {
            y = tmp;
            return isposs(y, x, n - 1, fib);
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}

void pgsolve()
{
    int n, x1, y1;
    cin >> n >> x1 >> y1;
    vi fib;
    fib.pb(1);
    fib.pb(1);
    for (int i = 0; i < 46; i++)
    {
        fib.pb(fib[i] + fib[i + 1]);
    }

    if (isposs(x1, y1, n, fib))
    {
        yes
    }
    else
        no
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
