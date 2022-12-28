#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int unsigned long long
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
    int n;
    cin >> n;
    int i = 1, j = 1;
    int ans = 1;
    int count = 1;
    // while (i <= n && j < n)
    // {
    //     if (count & 1)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    //     i %= mod;
    //     j %= mod;
    //     int add = (i * j) % mod;
    //     add %= mod;
    //     ans += add;
    //     ans %= mod;
    //     count++;
    // }

    // ans *= n;
    // ans %= mod;
    // ans *= (n + 1);
    // ans %= mod;
    // int temp = 2 * n + 1;
    // temp %= mod;
    // ans *= temp;
    // // ans *= ((2 * n) + 1);
    // // int a = mod / 6;
    // // ans *= a;
    // ans %= mod;
    // ans /= 6;
    ans *= (n * (n + 1) * ((2 * n) + 1)) / 6;
    ans %= mod;

    cout << ans << endl;
    // cout<<endl;
    // int ans2 = 1;
    // ans2 *= (n - 1);
    // ans2 %= mod;
    // ans2 *= n;
    // ans2 %= mod;
    // ans2 *= (n + 1);
    // ans2 %= mod;
    // // int b = mod / 3;
    // // ans2 *= b;
    // ans2 /= (3);
    // ans2 %= mod;

    int ans2 = 1;
    ans2 *= ((n - 1) * n * (n + 1)) / 3;
    ans2 %= mod;
    cout << ans2 << endl;

    ans += ans2;
    ans %= mod;

    ans *= 2022;
    cout << ans % mod << endl;
    cout << endl;
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
