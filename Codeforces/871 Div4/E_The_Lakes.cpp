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
// DFS TEMPLATE
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
bool isValid(int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 0;
    return 1;
}
void dfs(int i, int j, int &sum, vector<vector<int>> &graph, vector<vector<int>> &visited)
{
    int n = graph.size();
    int m = graph[0].size();
    visited[i][j] = 1;
    sum += graph[i][j];
    for (auto x : moves)
    {
        int nx = x.first + i;
        int ny = x.second + j;
        if (isValid(nx, ny, n, m) && graph[i][j] && !visited[nx][ny])
            dfs(nx, ny, sum, graph, visited);
    }
}
void pgsolve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>(m, 0)), visited(n, vector<int>(m, 0));
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> graph[i][j];
            // cout << graph[i][j] << " ";
        }
        // cout << endl;
    }
    int ans = 0;
    rep(i, n)
    {
        rep(j, m)
        {
            if (!visited[i][j] && graph[i][j] > 0)
            {
                int sum = 0;
                dfs(i, j, sum, graph, visited);
                ans = max(sum, ans);
            }
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
