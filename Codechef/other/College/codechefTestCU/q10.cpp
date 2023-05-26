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

vi dt;

set<pair<int, int>> st;

void bfss(vi adj[], int a)
{

    for (int i = 0; i < adj[a].size(); i++)
    {
        int v = adj[a][i];
        if (dt[a] < dt[v] - 1)
        {
            auto it = st.find({dt[v], v});
            st.erase(it);
            dt[v] = dt[a] + 1;
            st.insert({dt[v], v});
        }
    }

    if (st.size() == 0)
    {
        return;
    }

    auto it = st.begin();
    int nx = it->second;
    st.erase(it);

    bfss(adj, nx);
}

void bffdb(vi adj[], int n, vi &s, int k)
{
    vi star(n + 1, 0);

    for (int i = 0; i < k; i++)
        star[s[i]] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (star[i])
        {
            dt[i] = 0;
            st.insert({0, i});
        }
        else
        {
            dt[i] = inf;
            st.insert({inf, i});
        }
    }

    auto itr = st.begin();
    int stt = itr->second;

    bfss(adj, stt);
}

void pgsolve()
{
    int n, m, k, u, v, q;
    cin >> n >> m >> k;

    vi ad[n + 1], spp(k);

    for (int i = 0; i < m; ++i)
    {
        cin >> u >> v;
        ad[v].pb(u);
        ad[u].pb(v);
    }

    for (int i = 0; i < k; ++i)
    {
        cin >> spp[i];
    }

    dt = vi(n + 1, inf);
    bffdb(ad, n, spp, k);

    cin >> q;
    while (q--)
    {
        int z;
        cin >> z;

        if (dt[z] >= inf)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dt[z] << endl;
        }
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
