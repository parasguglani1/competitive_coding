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
    int k = n;
    int ans = 0;

    // O(n solution)
    //  for (int i = 1; i <= n; i += 2)
    //  {
    //      ans += (n -( i - 1)) * (n - (i - 1));
    //  }

    n++;
    n /= 2;
    // n--;
    ans = (n * (n + 1) * (2 * n + 1)) / 6;
    ans *= 4;
    if (k % 2 == 1)
    {
        ans -= 4 * (n * (n + 1) / 2);
        ans += n;
    }

    cout << ans << endl;

    /*
    int N = n / 2;
    int t1 = 4 * (N * (N + 1) * (2 * N + 1) / 6);
    int t2 = n * (n + 1) * (2 * n + 1) / 6;

    if (n & 1)
        cout << t2 - t1 << endl;
    else
        cout << t1 << endl; */
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
