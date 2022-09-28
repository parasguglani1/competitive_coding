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
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

void pgsolve()
{

    int arr[4];
    rep(i, 4)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    int res = 0;
    // O(1)
    res += d / arr[0] + d / arr[1] + d / arr[2] + d / arr[3];
    res -= d / lcm(arr[0], arr[1]) + d / lcm(arr[0], arr[2]) + d / lcm(arr[0], arr[3]) + d / lcm(arr[1], arr[2]) + d / lcm(arr[1], arr[3]) + d / lcm(arr[2], arr[3]);
    int kk = lcm(lcm(arr[0], arr[1]), arr[2]), ll = lcm(lcm(arr[1], arr[2]), arr[3]), mm = lcm(lcm(arr[2], arr[3]), arr[0]), nn = lcm(lcm(arr[3], arr[0]), arr[1]);
    res += d / kk + d / ll + d / mm + d / nn;
    res -= d / lcm(kk, arr[3]);

    cout << res << endl;
    /* set<int> s;
        rep(i, 4)
        {
            int x = arr[i];
            while (x <= d)
            {
                s.insert(x);
                x += arr[i];
            }
        }
        cout << s.size() << endl; */
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

    // w(t)
    // {
    pgsolve();
    // }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
