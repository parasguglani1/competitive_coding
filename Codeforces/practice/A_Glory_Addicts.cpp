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
    int n;
    cin >> n;
    int b[n];
    int zerocount = 0;
    int onecount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 0)
        {
            zerocount++;
        }
        else
        {
            onecount++;
        }
    }
    vi zero;
    vi one;
    int a[n];
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = a[i];
        if (b[i] == 0)
        {
            zero.pb(a[i]);
        }
        else
        {
            one.pb(a[i]);
        }
    }

    sort(all(zero));
    sort(all(one));
    sort(c, c + n);
    int doubles=2*min(zerocount,onecount);
    int singles=abs(zerocount-onecount);
    for (int i = n-1    ; i >=0; i++)
    {
        /* code */
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
