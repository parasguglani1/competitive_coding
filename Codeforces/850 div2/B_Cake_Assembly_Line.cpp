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

    int n, w, h;
    cin >> n >> w >> h;
    vi cake;
    vi seg;

    rep(i, n)
    {
        int x;
        cin >> x;
        cake.pb(x);
    }
    int mv = 0;

    rep(i, n)
    {
        int x;
        cin >> x;
        seg.pb(x);
    }
    if (h - w > 0)
    {
        no return;
    }
    vi diff(n);
    rep(i, n)
    {
        diff[i] = cake[i] - seg[i];
    }
    int first = diff[0];
    rep(i, n)
    {
        diff[i] = diff[i] - first;
    }

    rep(i, n)
    {
        int range = h - w;
        if (!((range) <= diff[i] && diff[i] <= (w - h)))
        {
            if (range > diff[i])
            {
                mv = max(range - diff[i], mv);
            }
            else
            {
                mv = min(-range - diff[i], mv);
            }
        }
    }

    if (mv == 0)
    {
        yes return;
    }
    mv *= -1;

    rep(i, n)
    {
        int range = h - w;
        diff[i] = diff[i] - mv;
        if (!((range) <= diff[i] && diff[i] <= (-range)))
        {
            no return;
        }
    }

    yes
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
