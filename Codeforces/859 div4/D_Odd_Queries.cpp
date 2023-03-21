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
    int n, q;
    cin >> n >> q;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    vector<ll> pref(n + 1);
    pref[0] = a[0];
    REP(i, 1, n + 1)
    {
        pref[i] = (pref[i - 1] + a[i]);
    }
    // cout<<pref[n-1]<<endl;
    bool odd = pref[n - 1] % 2;
    // cout << odd << endl;
    for (int i = 0; i < n; i++)
    {
        // cout << pref[i] << " ";
    }
    // cout << endl;

    rep(i, q)
    {
        int l, r, k;
        cin >> l >> r >> k;
        // l--;
        // r--;
        // cout << pref[l] << " " << pref[r] << endl;
        // int midsum = pref[r] - pref[l];
        // cout << midsum << endl;
        // int ans = pref[n - 1] - midsum;
        int ans = pref[n - 1] - pref[r - 1];
        if (l > 1)
        {
            ans += pref[l - 2];
        }
        // cout << ans << endl;
        int add = (r - l + 1) * k;
        // cout << add << endl;
        ans += add;
        if (ans % 2)
        {
            yes
        }
        else
        {
            no
        }
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
