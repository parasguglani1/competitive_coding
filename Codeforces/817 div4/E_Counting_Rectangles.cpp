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
int a[1005][1005];
int pref[1005][1005];

void pgsolve()
{
    int n, q;
    cin >> n >> q;
    /*     vector<pair<int, int>> v;
        rep(i, n)
        {
            cin >> v[i].first >> v[i].second;
        }
        rep(i, q)
        {
            int hmin, wmin, hmax, wmax;
            cin >> hmin >> wmin >> hmax >> wmax;
        } */

    /*
    Consider the 2D array with a[x][y]=0 for all x,y. Increase a[h][w] by h×w if there is an h×w rectangle in the input.

Now for each query, we need to find the sum of all a[x][y] in a rectangle with lower-left corner at a[hs+1][ws+1] and upper-right corner at a[hb−1][wb−1]. This is the standard problem that can be solved with 2D prefix sums.

The time complexity is O(n+q+max(hb)max(wb)) per testcase.

 */
    const int N = 1e3 + 3;
    ll preAreaCalc[N][N];
    memset(preAreaCalc, 0, sizeof(preAreaCalc));
    vector<pair<ll, ll>> vp(n);
    for (auto &a : vp)
    {
        cin >> a.first >> a.second;
        preAreaCalc[a.first][a.second] += a.first * a.second;
    }
    for (int j = 0; j < N; j++)
    {
        for (int i = 1; i < N; i++)
            preAreaCalc[i][j] += preAreaCalc[i - 1][j];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N; j++)
            preAreaCalc[i][j] += preAreaCalc[i][j - 1];
    }
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << preAreaCalc[c - 1][d - 1] - preAreaCalc[c - 1][b] - preAreaCalc[a][d - 1] + preAreaCalc[a][b] << endl;
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
