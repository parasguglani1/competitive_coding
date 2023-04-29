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

void dfs(int ro, int val, vector<vector<int>> &mat, vector<int> &heights)
{
    for (int curr : mat[ro])
    {
        if (curr == val)
        {
            continue;
        }
        else
        {
            heights[curr] = heights[ro] + 1;
            dfs(curr, ro, mat, heights);
        }
    }
}
void pgsolve()
{
    int n, len, cost;
    cin >> n >> len >> cost;
    vector<vector<int>> mat(n);
    vi heights(n, 0);

    int maxprof = 0;

    rep(i, n - 1)
    {
        int x, y;
        cin >> x >> y;
        mat[y - 1].pb(x - 1);
        mat[x - 1].pb(y - 1);
    }
    int st = -1;
    dfs(0, st, mat, heights);

    vi heigh2 = heights;
    auto it = max_element(heights.begin(), heights.end());
    int node = it - heights.begin();
    int height = *it;
    heights.clear();
    heights.resize(n);

    dfs(node, st, mat, heights);

    rep(i, n)
    {
        int treecost = heights[i] * len;
        int opcost = heigh2[i] * cost;
        int curprof = treecost - opcost;
        maxprof = max(maxprof, curprof);
    }

    cout << maxprof << endl;
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
