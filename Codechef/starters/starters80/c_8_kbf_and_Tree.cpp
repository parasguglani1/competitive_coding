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

void build(vector<vector<int>> *mat, int edge, vector<int> &flag, vector<int> &dis)
{
    flag[edge] = 1;
    for (auto x : mat[edge])
    {
        if (flag[x[0]])
        {
            continue;
        }
        int temp = dis[edge] ^ x[1];
        dis[x[0]] = temp;
        build(mat, x[0], flag, dis);
    }
}

void pgsolve()
{
    int n;
    cin >> n;
    vector<vi> mat[n];
    map<int, vi> mp;
    map<int, vector<vi>> indices;

    rep(i, n - 1)
    {
        int u, v, w;
        cin >> u >> v >> w;

        mat[u - 1].pb({v - 1, w});
        mat[v - 1].pb({u - 1, w});
    }

    vi lnth(n), flag(n, 0);

    lnth[0] = 0;

    build(mat, 0, flag, lnth);

    rep(i, n)
    {
        mp[lnth[i]].pb(i);
    }
    vi ans(4, 0);

    for (auto it : mp)
    {
        int nn = it.second.size();
        if (nn >= 2)
        {
            int fir = it.second[0];
            int sec = it.second[1];

            if (fir == 0 && sec == n - 1)
            {
                ans[0] = 1;
                ans[1] = 2;
                ans[2] = 2;
                ans[3] = n - 1;
            }
            else if (fir == 0)
            {
                ans[0] = 1;
                ans[1] = n - 1;
                ans[2] = sec + 1;
                ans[3] = n - 1;
            }
            else if (sec == n - 1)
            {
                ans[0] = 1;
                ans[1] = fir + 1;
                ans[2] = 1;
                ans[3] = sec + 1;
            }
            if (ans[0] == 0)
            {
                ans[0] = 1;
                ans[1] = fir + 1;
                ans[2] = 1;
                ans[3] = sec + 1;
            }
            cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << endl;
            return;
        }
    }
    rep(i, n)
    {
        REP(j, i + 1, n)
        {
            vector<vi> temp;
            int xorv = lnth[i] ^ lnth[j];
            temp = indices[xorv];
            indices[xorv].pb({i, j});

            int nn = indices[xorv].size();
            if (nn > 1)
            {
                ans[0] = indices[xorv][0][0];
                ans[1] = indices[xorv][0][1];
                ans[2] = indices[xorv][1][0];
                ans[3] = indices[xorv][1][1];
                cout << ans[0] + 1 << " " << ans[1] + 1 << " " << ans[2] + 1 << " " << ans[3] + 1 << endl;
                return;
            }
        }
    }
    if (ans[0] == 0)

        cout << -1 << endl;
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
