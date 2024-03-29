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
    vi a(n);
    vi b(n);
    rep(i, n)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int ans = 0;
    int sum = 0;
    rep(i, n)
    {
        sum += a[i];
    }
    int ans1 = INT_MAX;
    int ans2 = INT_MAX;

    if (sum % 2 == 0)
    {
        ans = 0;
    }
    else
    {
        ans1 = INT_MAX;
        rep(i, n)
        {
            if (a[i] % 2 == 1)
            {
                int steps = 0;
                while (a[i] % 2 == 1)
                {
                    a[i] /= 2;
                    steps++;
                }
                ans1 = min(ans1, steps);
            }
        }
        rep(i, n)
        {
            if (b[i] % 2 == 0 && b[i] > 0)
            {
                int steps = 0;
                while (b[i] % 2 == 0 && b[i] > 0)
                {
                    b[i] /= 2;
                    steps++;
                }
                // cout << ans2 << " " << steps << endl;
                ans2 = min(ans2, steps);
            }
        }
        ans = min(ans1, ans2);
    }
    cout << ans << endl;
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
