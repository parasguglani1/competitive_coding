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
    int a, b;
    cin >> a >> b;
    // if (a > b)
    // {
    //     swap(a, b);
    // }
    // int gcd = __gcd(a, b);
    // int steps = gcd - 1;
    // steps += a / gcd;
    // int ans1 = steps + b / gcd;
    // // steps += (b / gcd) / 2;
    // int ans2 = INT_MAX;
    // if (b / 2 > gcd)
    // {
    //     int nlength = b / 2 - gcd;
    //     // cout<<nlength<<endl;
    //     steps += nlength;
    //     ans2 = steps + 2;
    // }
    // cout << ans1 << ' ' << ans2 << endl;
    // cout << min(ans1, ans2) << endl;
    int ans = a + b;

    //  Finally, for a fixed k the answer is ⌈a/k⌉+⌈b/k⌉+(k−1)

    for (int i = 1; i < 100000; i++)
    {
        ans = min(ans, (a + i - 1) / i + (b + i - 1) / i + (i - 1));
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
