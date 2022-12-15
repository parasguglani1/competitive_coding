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
void pgsolve()
{
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> m;

    vector<pair<int, int>> v(n);
    rep(i, n)
    {
        cin >> v[i].ss;
    }
    rep(i, n)
    {
        cin >> v[i].ff;
    }

    // insert min value into map
    rep(i, n)
    {
        if (m.find(v[i].ss) == m.end())
        {
            m[v[i].ss] = v[i].ff;
        }
        else
        {
            m[v[i].ss] = min(m[v[i].ss], v[i].ff);
        }
    }
    if (m.size() < k)
    {
        cout << -1 << endl;
        return;
    }

    // sort map
    //  vector<pair<int, int>> v1;
    vi v1;
    for (auto it : m)
    {
        v1.pb(it.ss);
        // v1.pb({it.ff, it.ss});
    }

    sortall(v1);

    // pick k elements from map
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        // cout<<v1[i].ff<<" "<<v1[i].ss<<endl;
        ans += v1[i];
    }
    cout << ans << endl;
    // cout<<endl;

    // vector<pair<int, bool>> v1(n);
    // rep(i, n)
    // {
    //     v1[i].ss = {false};
    // }
    // sortall(v);
    // int ans = 0;

    // for (int i = 0; i < k; i++)
    // {
    //     if (v1[i].ss == false)
    //     {
    //         ans += v[i].ff;
    //         v1[i].ss = true;
    //     }
    //     else
    //     {
    //         ans += v[i].ss;
    //     }
    // }
    // cout << ans << endl;
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
