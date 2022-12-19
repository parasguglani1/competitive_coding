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

// function to check if vector is sorted
// use is_sorted next time
bool isSorted(vi v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}

void pgsolve()
{
    int n;
    cin >> n;
    vi v(n);
    int mx1 = INT_MIN, mx2 = INT_MIN;
    int mn = INT_MAX;
    rep(i, n)
    {
        cin >> v[i];
        mx1 = max(mx1, v[i]);
        mn = min(mn, v[i]);
    }
    rep(i, n)
    {
        if (v[i] != mx1)
        {
            mx2 = max(mx2, v[i]);
        }
    }
    vi b = v;
    vi c = v;
    vi d = v;
    vi e = v;
    vi f = v;
    vi g = v;

    // cout << mx1 << endl;
    // cout << mx2 << endl;

    rep(i, n)
    {
        b[i] = abs(mx1 - v[i]);
        // b[i] = abs(v[i] - 40741153);
        // b[i] = (mx1 - 10000000);
    }
    int diff = mx1 - mx2;
    int avg = (mx1 - mn) / 2;
    int ans = mx1 - avg;
    int ans2 = mx1 - avg - 1;
    int ans3 = mx1 - avg + 1;
    int res = 0;
    for (int i = 1; i < n; i++)
        if (v[i] < v[i - 1])
            res = max(res, (v[i - 1] + v[i] + 1) / 2);

    rep(i, n)
    {
        c[i] = abs(diff - v[i]);
    }
    rep(i, n)
    {
        d[i] = abs(ans - v[i]);
    }
    rep(i, n)
    {
        e[i] = abs(ans2 - v[i]);
    }
    rep(i, n)
    {
        f[i] = abs(ans3 - v[i]);
    }
    rep(i, n)
    {
        g[i] = abs(res - v[i]);
    }
    int result = 0;

    if (isSorted(v))
    {
        result = 0;
    }
    else if (isSorted(b))
    {
        result = mx1;
    }
    else if (isSorted(c))
    {
        result = diff;
    }
    else if (isSorted(d))
    {
        result = ans;
    }
    else if (isSorted(e))
    {
        result = ans2;
    }
    else if (isSorted(f))
    {
        result = ans3;
    }
    else if (isSorted(g))
    {
        result = res;
    }
    else
    {
        result = -1;
    }
    cout << result << endl;

    // rep(i, n)
    // {
    //     cout << b[i] << " ";
    // }
    // rep(i, n)
    // {
    //     cout << c[i] << " ";
    // }
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
