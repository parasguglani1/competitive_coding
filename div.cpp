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
void solve()
{
    int n, m, max1 = 0, max2 = 0;
    cin >> n;
    rep(i, n)
    {
        int ele;
        cin >> ele;
        if (ele > max1)
        {
            max1 = ele;
        }
    }
    cin >> m;
    rep(i, m)
    {
        int ele;
        cin >> ele;
        if (ele > max2)
        {
            max2 = ele;
        }
    }
    if (max1 > max2)
    {
        cout << "Alice" << endl;
        cout << "Alice" << endl;
        // cout << 1 << endl;
    }
    else if (max2 > max1)
    {
        cout << "Bob" << endl;
        cout << "Bob" << endl;
        // cout << 2 << endl;
    }
    else
    {
        // cout << max1 << " " << max2;
        cout << "Alice" << endl;
        cout << "Bob" << endl;
        // cout << 3 << endl;
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
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}