#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 998244353
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
int binpow(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = ((ans % mod) * a) % mod;
        a = (a * a) % mod;
        // b >>=  1;
        b = b >> 1;
    }
    return ans % mod;
}
void pgsolve()
{
    int n;
    cin >> n;
    vi a(n), rmin(n), lmax(n);

    vector<bool> pos(n, true);

    rep(i, n)
    {
        cin >> a[i];
    }
    rmin[n - 1] = a[n - 1];
    lmax[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], a[i]);
    }

    REPR(i, n - 2, -1)
    {
        rmin[i] = min(rmin[i + 1], a[i]);
    }
    REP(i, 1, n)
    {
        if (a[i] < lmax[i - 1])
        {
            pos[i] = 0;
        }
    }
    rep(i, n - 1)
    {
        if (a[i] > rmin[i + 1])
        {
            pos[i] = 0;
        }
    }

    int cnt = 0, ans = 0;
    rep(i, n)
    {
        if (pos[i])
        {
            cnt++;
        }
    }

    ans = binpow(2, cnt);
    if (cnt != n)
    {
        cout << ans << endl;
        return;
    }
    ans = (ans - 1 + mod) % mod;

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
