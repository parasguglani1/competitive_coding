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
void pgsolve()
{
    int i, j, n, k;
    cin >> n >> k;
    map<int, int> mp;

    rep(i, n)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    vi a;
    for (auto &el : mp)
        if (el.second >= k)
            a.pb(el.first);
    a.pb(-1);
    a.pb(2e9);
    sort(a.begin(), a.end());

    if (a.size() == 2)
    {
        cout << -1 << endl;
        return;
    }

    int lo = a[1], hi = a[1];
    int l = 0, r = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] != a[i - 1] + 1)
        {
            if (hi - lo >= r - l)
                l = lo, r = hi;
            lo = hi = a[i];
        }
        else
        {
            hi++;
        }
    }

    cout << l << " " << r << endl;
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