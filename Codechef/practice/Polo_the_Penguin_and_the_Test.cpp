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
bool cmp(vector<int> &a, vector<int> &b)
{
    if (a[0] * b[1] > b[0] * a[1])
    {
        return true;
    }
    if (a[0] * b[1] == b[0] * a[1])
    {
        return a[2] > b[2];
    }
    return false;
}
void pgsolve()
{
    int n, w;
    cin >> n >> w;
    vector<vector<int>> v(n, vector<int>(3));
    rep(i, n) cin >> v[i][0] >> v[i][1] >> v[i][2];
    vector<pair<int, int>> v1;
    vi time(n);
    vi point(n);
    rep(i, n)
    {
        time[i] = v[i][2];
        point[i] = v[i][0] * v[i][1];
    }

    vector<vector<int>> dp(n, vector<int>(w + 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0)
            {
                if (time[i] <= j)
                    dp[i][j] = point[i];
                continue;
            }
            if (time[i] <= j)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - time[i]] + point[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n - 1][w]<<endl;

    // sort(v.begin(), v.end(), cmp);
    // sortall(v1);
    // int sum = 0;
    // for (auto i : v1)
    // {
    //     if (i.ss <= w)
    //     {
    //         sum += i.ff;
    //         w -= i.ss;
    //     }
    // }

    for (auto i : v)
    {
        // cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        // if (i[2] <= w)
        // {
        //     sum += i[0];
        //     w -= i[2];
        // }
    }
    // cout << sum << endl;
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
