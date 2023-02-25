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
    int a;
    cin >> a;
    int sum1 = 0;
    int sum2 = 0;
    int d1 = 0, d2 = 0;
    int mxdiff = 0;
    for (int i = 1; i < 64; i++)
    {
        sum1 += a;
        int b = (ll)1 << (i - 1);
        // cout<<b<<endl;
        int c = pow(2, i - 1);
        // cout<<b<<" "<<c<<endl;
        sum2 += (ll)1 << (i - 1);
        // sum2 += pow(2, i - 1);
        // cout << sum1 << " " << sum2 << endl;
        int diff = sum1 - sum2;
        if (diff > 0)
        {
            d1 = i;
        }
        if (diff > mxdiff)
        {
            d2 = i;
            mxdiff = diff;
        }
    }
    cout << d1 << " " << d2 << endl;
    // cout << endl;
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
