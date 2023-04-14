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
    int n, m;
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == 1 && y1 == 1)
    {
        cout << 2 << endl;
        return;
    }
    if (x1 == n && y1 == m)
    {
        cout << 2 << endl;
        return;
    }
    if (x2 == 1 && y2 == 1)
    {
        cout << 2 << endl;
        return;
    }
    if (x2 == n && y2 == m)
    {
        cout << 2 << endl;
        return;
    }
    if (x2 == 1 && y2 == m)
    {
        cout << 2 << endl;
        return;
    }
    if (x2 == n && y2 == 1)
    {
        cout << 2 << endl;
        return;
    }
    if (x1 == 1 && y1 == m)
    {
        cout << 2 << endl;
        return;
    }
    if (x1 == n && y1 == 1)
    {
        cout << 2 << endl;
        return;
    }
    if (x1 == 1 || x1 == n || y1 == 1 || y1 == m || x2 == 1 || x2 == n || y2 == 1 || y2 == m)
    {
        cout << 3 << endl;
        return;
    }
    else
    {
        cout << 4 << endl;
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
