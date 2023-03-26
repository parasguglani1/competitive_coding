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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> v[i][j];
        }
    }
    vector<vector<int>> ans(n, vector<int>(m, 0));
    rep(i, m)
    {
        ans[0][i] = 1;
    }

    vector<vector<int>> prvmax(2, vector<int>(m, 0));
    // rep(i, m)
    // {
    //     cout << prvmax[0][i] << ' ';
    // }
    // cout << endl;
    // rep(i, m)
    // {
    //     cout << prvmax[1][i] << ' ';
    // }
    // cout << endl;

    // bit to toggle
    int xbit = 0;

    REP(i, 0, n)
    {
        rep(j, m)
        {
            // clean window
            if (v[i][j] >= prvmax[xbit ^ 1][j])
            {
                ans[i][j] = 1;
            }
        }
        rep(j, m)
        {
            // checking just above
            prvmax[xbit][j] = max(prvmax[xbit ^ 1][j], v[i][j]);
            // checking left and right
            if (j > 0)
            {
                prvmax[xbit][j] = max(prvmax[xbit][j], prvmax[xbit ^ 1][j - 1]);
                prvmax[xbit][j] = max(prvmax[xbit][j], v[i][j - 1]);
            }
            if (j < m - 1)
            {
                prvmax[xbit][j] = max(prvmax[xbit][j], prvmax[xbit ^ 1][j + 1]);
                prvmax[xbit][j] = max(prvmax[xbit][j], v[i][j + 1]);
            }
            // cout << prvmax[xbit][j] << ' ';
        }
        // toggle bit
        xbit ^= 1;
        // cout << endl;
    }
    rep(i, n)
    {
        rep(j, m)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}

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
