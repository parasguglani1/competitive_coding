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
void pgsolve()
{

    /*     int ans = a + b + c;
        ans = max(ans, (a + b) * c);
        ans = max(ans, a * (b + c));
        ans = max(ans, a * b * c);

        cout << ans << endl;
     */
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // sort(a,a+3);
    if (a[0] == 1 && a[1] == 1 && a[2] == 1)
    {
        cout << 3 << endl;
        return;
    }
    if (a[0] == 1 && a[1] == 1)
    {
        cout << 2 * a[2] << endl;
        return;
    }
    if (a[1] == 1 && a[2] == 1)
    {
        cout << 2 * a[0] << endl;
        return;
    }
    if (a[0] == 1 && a[2] == 1)
    {
        cout << 2 + a[1] << endl;
        return;
    }
    if (a[0] == 1)
    {
        cout << (1 + a[1]) * a[2] << endl;
        return;
    }
    if (a[1] == 1)
    {
        cout << (1 + min(a[0], a[2])) * max(a[0], a[2]) << endl;
        return;
    }
    if (a[2] == 1)
    {
        cout << (1 + a[1]) * a[0] << endl;
        return;
    }
    cout << a[0] * a[1] * a[2] << endl;
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

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
