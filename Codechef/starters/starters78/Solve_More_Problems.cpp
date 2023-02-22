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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.ff + a.ss == b.ff + b.ss)
        return a.ff < b.ff;
    else
        return a.ff + a.ss < b.ff + b.ss;
}

void pgsolve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    int sum = 0, mxx = 0;

    rep(i, n) cin >> a[i];
    vi b(n);
    rep(i, n) cin >> b[i];
    vi c(n);
    vi mnm(n);

    vector<pair<int, int>> vp;
    int i = 0;
    rep(i, n)
    {
        vp.pb({a[i], b[i]});
    }
    rep(i, n)
    {
        c[i] = a[i] + b[i];
    }

    sort(all(vp), cmp);
    while (i < n)
    {
        int s = vp[i].ff + vp[i].ss;
        if (s + sum > k)
        {
            break;
        }
        else
        {
            mxx = max(mxx, vp[i].ss);
            sum += s;
            i++;
        }
    }
    REPR(j, n - 1, -1)
    {
        if (j != n - 1)
        {
            mnm[j] = min(vp[j].ff, mnm[j + 1]);
        }
        else
        {
            mnm[j] = vp[j].ff;
        }
    }
    int res = i;
    if (i < n)
    {
        int lef = k - sum;
        if (mnm[i] <= lef || lef + mxx >= vp[i].ff + vp[i].ss)
        {
            res++;
        }
    }
    cout << res << endl;
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
