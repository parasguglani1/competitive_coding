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
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n, k;
    cin >> n >> k;
    vi l(n), r(n);
    rep(i, n)
    {
        cin >> l[i];
    }
    rep(i, n)
    {
        cin >> r[i];
    }
    // merge intervals if l[i+1] <= r[i]
    vi a, b;
    a.pb(l[0]);
    b.pb(r[0]);
    REP(i, 1, n)
    {
        if (l[i] <= b.back())
        {
            b.back() = max(b.back(), r[i]);
        }
        else
        {
            a.pb(l[i]);
            b.pb(r[i]);
        }
    }

    // cout << a.size() << endl;
    rep(i, a.size())
    {
        // cout << a[i] << " " << b[i] << endl;
    }
    int ans = 0;
    ans += a[0] + 1;
    REP(i, 1, a.size())
    {
        //if count is between a[i] and b[i]


    }
    ans += b[n - 1] - a[n - 1] + 2;
    k -= b[n - 1] - a[n - 1] + 1;
    if (k > 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    cout << endl;
}
//TODO

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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
