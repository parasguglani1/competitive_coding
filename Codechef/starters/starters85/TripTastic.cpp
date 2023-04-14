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

// vector<vector<int>> prefsum;

bool ispossible(vector<vector<int>> &a, int mid, int k, vector<vector<int>> &prefsum)
{
    int n = a.size();
    int m = a[0].size();
    n--;
    m--;

    REP(i, 1, n + 1)
    {
        REP(j, 1, m + 1)
        {
            if (a[i][j] != 0)
            {

                int x1 = max(i - mid, 1LL);
                int x2 = min(i + mid, n);
                int y1 = max(j - mid, 1LL);
                int y2 = min(j + mid, m);
                int common = prefsum[x1 - 1][y1 - 1];
                int big = prefsum[x2][y2];
                int oth = prefsum[x1 - 1][y2] + prefsum[x2][y1 - 1];
                int recsum = big - oth + common;
                if (recsum >= k)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

void pgsolve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    int sum = 0;
    int mx = 0;
    k++;
    REP(i, 1, n + 1)
    {
        REP(j, 1, m + 1)
        {
            cin >> a[i][j];
            sum += a[i][j];
            mx = max(mx, a[i][j]);
        }
    }
    if (sum < k)
    {
        cout << -1 << endl;
        return;
    }
    if (mx - 1 >= k)
    {
        cout << 0 << endl;
        return;
    }
    vector<vector<int>> prefsum(n + 1, vector<int>(m + 1));

    // prefsum.resize(n + 1, vector<int>(m + 1, 0));

    REP(i, 1, n + 1)
    {
        REP(j, 1, m + 1)
        {
            prefsum[i][j] = a[i][j];
            prefsum[i][j] += prefsum[i - 1][j];
            prefsum[i][j] += prefsum[i][j - 1];
            int common = prefsum[i - 1][j - 1];
            prefsum[i][j] -= common;
        }
    }

    int ed = n;
    ed = max(ed, m);
    int st = 0;
    while (st < ed)
    {
        int md = st + (ed - st) / 2;
        if (ispossible(a, md, k, prefsum))
        {
            ed = md;
        }
        else
        {
            st = md + 1;
        }
    }

    cout << st << endl;
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
