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
    int n;
    cin >> n;
    int mn = 1, mx = 2 * n;
    vector<vector<int>> a(2, vector<int>(n));

    int st = 1, end = mx - 2;
    rep(i, n - 1)
    {
        if (i % 2 == 0)
        {
            a[0][i + 1] = st + 1;
            a[1][i] = st;
            st++;
            st++;
        }
        else
        {
            a[0][i + 1] = end;
            a[1][i] = end - 1;
            end--;
            end--;
        }
        // for (int i = 0; i < n - 1; i += 2)
        // {
        //     a[0][i] = mx;
        //     mx -= 2;
        // }
        // for (int i = 1; i < n; i += 2)
        // {
        //     a[0][i] = mn;
        //     mn += 2;
        // }
        // mn = 2;
        // mx = 2 * n - 1;
        // for (int i = 0; i < n - 1; i += 2)
        // {
        //     a[1][i] = mn;
        //     mn += 2;
        // }
        // for (int i = n - 1; i >= 0; i -= 2)
        // {
        //     a[1][i] = mx;
        //     mx -= 2;
        // }
        // a[0][n - 1] = mn;
        // a[1][n - 1] = mx;
        // cout << "2" << endl;
    }
    a[0][0] = mx;
    a[1][n - 1] = mx - 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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
