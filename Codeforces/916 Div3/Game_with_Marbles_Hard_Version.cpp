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
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void pgsolve()
{
    int n;
    cin >> n;
    vector<int> marb1(n), marb2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> marb1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> marb2[j];
    }

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({marb1[i] + marb2[i], i});
    }
    sort(vp.begin(), vp.end(), greater<pair<int, int>>());
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            res -= marb2[vp[i].second] - 1;
        }
        else
        {
            res += marb1[vp[i].second] - 1;
        }
    }

    cout << res << endl;

    // int score = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].first << ' ';
    //     if (i % 2 == 0)
    //         score -= a[i].second - 1;
    //     else
    //         score += a[i].first - 1;
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].second << ' ';
    //     // if (i % 2 == 0)
    //     //     score += a[i].second - 1;
    //     // else
    //     //     score += a[i].first - 1;
    // }
    // cout << endl;
    // cout << score << endl;
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
