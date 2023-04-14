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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> v(n, vector<int>(n, 0));
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> v[i][j];
        }
    }
    // rotate v by 180 degrees
    vector<vector<int>> v2(n, vector<int>(n, 0));
    rep(i, n)
    {
        rep(j, n)
        {
            v2[i][j] = v[n - i - 1][n - j - 1];
        }
    }
    // check unequal cells
    int cnt = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            if (v[i][j] != v2[i][j])
            {
                cnt++;
            }
        }
    }
    if (cnt / 2 > k)
    {
        no return;
    }
    k -= cnt / 2;
    if (k % 2 == 0)
    {
        yes return;
    }
    if (k % 2 == 1 && n % 2 == 1)
    {
        yes return;
    }
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
