#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define F first
#define S second
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
// #define sz(v) (int)v.size()
#define ppii pair<int, int>
#define vi vector<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void updateSize(vector<int> &sz, vector<set<ppii>> &forwardE, int curr)
{
    sz[curr]++;
    for (auto x : forwardE[curr])
    {
        int next = x.S;
        if (next != -1)
        {
            updateSize(sz, forwardE,x.F);
            int val= sz[x.F];
            sz[curr] += val;
        }
    }
}
void getBridge(vector<int> &dp, vector<set<ppii>> &fe, vector<set<ppii>> &be, int curr)
{
    for (ppii x : fe[curr])
    {
        if (x.S == 1)
        {
            getBridge( dp, fe, be,x.first);
            dp[curr] += dp[x.F];
        }
    }
    for (ppii x : be[curr])
    {
        dp[curr] += x.S;
    }
}
void dfs(vector<set<ppii>> &fedge, vector<set<int>> &graph, vector<set<ppii>> &bedge, set<int> &vis, int curr)
{
    vis.insert(curr);
    for (auto &x : graph[curr])
    {
        if (vis.find(x) == vis.end())
        {
            fedge[curr].insert({x, 1});
            fedge[x].insert({curr, -1});
            dfs(fedge, graph, bedge, vis, x);
        }
    }
    for (auto &x : graph[curr])
    {
        bool notexists1 = fedge[curr].find({x, 1}) == fedge[curr].end();
        bool notexists2 = fedge[curr].find({x, -1}) == fedge[curr].end();
        if (notexists1 && notexists2)
        {
            bool notexists3 = bedge[curr].find({x, 1}) == bedge[curr].end();
            if (!notexists3)
            {
                continue;
            }
            else
            {
                bedge[curr].insert({x, -1});
                bedge[x].insert({curr, 1});
            }
        }
    }
}

void pgsolve()
{
    int n, m;
    cin >> n >> m;
    vector<set<int>> mat(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        mat[v].insert(u);
        mat[u].insert(v);
    }
    int ans = (n * (n - 1)) / 2;
    vector<int> dp(n + 1, 0);

    vector<set<ppii>> forwardEdges(n + 1), backwardEdges(n + 1);
    vector<int> sz(n + 1, 0);
    set<int> vis;
    dfs(forwardEdges,mat, backwardEdges, vis,1);

    updateSize( sz, forwardEdges,1);
    getBridge( dp, forwardEdges, backwardEdges,1);
    for (int i = 2; i <= n; i++)
    {
        if (dp[i] == 0)
        {
            int s1 = sz[i];
            int s2 = n;
            s2 -= s1;
            int curans = (s1 * (s1 - 1)) / 2;
            curans += (s2 * (s2 - 1)) / 2;
            ans = min(ans, curans);
        }
    }
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
