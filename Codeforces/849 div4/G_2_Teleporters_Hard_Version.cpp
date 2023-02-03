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
int testcases = 0;
void pgsolve()
{
    testcases++;
    int n, c;
    cin >> n >> c;
    vi vec(n);
    vector<pair<int, int>> vp(n);
    int sum = 0;
    vi v2(n);
    int c2 = c;
    int mn = INT_MAX;
    int mnindex = -1;
    rep(i, n)
    {
        cin >> vec[i];
        vp[i].ff = vec[i];
        v2[i] = vec[i];
        // if (mn - i - 1 > v2[i])
        // {
        //     mn = v2[i] - i - 1;
        //     mnindex = i;
        // }
        // v2[i] += i + 1;

        // vp[i].ff += min(i + 1, n - i);

        if (mn  >= v2[i])
        {
            mn = v2[i];
            mnindex = i;
        }
        v2[i] += i + 1;

        vp[i].ff += min(i + 1, n + i);

        vp[i].ss = i;
    }
    // if (testcases == 102)
    // {
    //     cout << c;
    //     rep(i, n)
    //     {
    //         cout << vec[i] << " ";
    //     }
    // }

    for (auto &x : vp)
    {
        if (x.ss == mnindex)
        {
            x.ff = INT_MAX;
        }
    }

    sort(all(v2));
    sort(all(vp));

    for (auto x : v2)
    {
        // cout << x << " ";
    }
    // cout << endl;
    for (auto x : vp)
    {
        // cout << x.ff << " ";
    }
    // cout << endl;
    // if (c < 0)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    int ans1 = 0;
    rep(i, n)
    {
        if (v2[i] > c)
        {
            ans1 = i;
            break;
        }
        c -= v2[i];
    }

    c2 -= v2[0];
    int ans2 = 0;
    if (c2 < 0)
    {
        cout << 0 << endl;
        return;
    }
    rep(i, n - 1)
    {
        if (vp[i].ff > c2)
        {
            ans2 = i + 1;
            break;
        }
        c2 -= vp[i].ff;
    }
    // cout << ans1 << endl
    //  << ans2 << endl;
    if (ans1 == 0 || ans2 == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << max(ans1, ans2) << endl;
    }
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
