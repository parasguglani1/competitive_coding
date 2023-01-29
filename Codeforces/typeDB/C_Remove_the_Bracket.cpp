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
int grid[200010][4];
int s;
vi vec;
int op(int i, int que)
{
    if (que == 0)
    {
        return 0;
    }
    if (que == 1)
    {
        return vec[i];
    }
    if (que == 2)
    {
        return s;
    }
    if (que == 3)
    {
        return vec[i] - s;
    }
    else
        return 0;
}
bool skip(int x, int testt)
{
    if (x < 0)
    {
        return true;
    }
    if (testt < 0)
    {
        return true;
    }
    return false;
}
void pgsolve()
{
    int n;
    cin >> n >> s;
    vec.clear();
    // rep(i, n)
    vec.pb(0);
    rep(i, n + 1)
    {
        rep(j, 4)
        {
            grid[i][j] = inf;
        }
    }
    REP(i, 1, n + 1)
    {
        int x;
        cin >> x;
        vec.pb(x);
    }
    REP(i, 1, n + 1)

    {
        // cout << a[i] << " ";
    }

    grid[1][1] = 0;
    REP(i, 1, n - 1)
    {
        REP(j, 0, 4)
        {
            int x = op(i, j);
            REP(k, 0, 4)
            {
                int y = op(i + 1, k);
                int testt = vec[i + 1] - y;
                if (y < 0)
                {
                    continue;
                }
                if (testt < 0)
                {
                    continue;
                }
                int t1 = (y - s) * (testt - s);
                if (t1 < 0)
                {
                    continue;
                }
                int tmp1 = grid[i][j] + x * testt;
                int tmp2 = grid[i + 1][k];
                grid[i + 1][k] = min(tmp2, tmp1);
            }
        }
    }
    int ans = LLONG_MAX;
    REP(i, 0, 4)
    {
        int x = op(n - 1, i);
        int testt = vec[n - 1] - x;
        if (skip(x, testt))
        {
            continue;
        }
        int t1 = (x - s) * (testt - s);
        if (t1 < 0)
        {
            continue;
        }
        int temp = grid[n - 1][i] + x * vec[n];
        ans = min(ans, temp);
    }
    // cout << endl;
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
