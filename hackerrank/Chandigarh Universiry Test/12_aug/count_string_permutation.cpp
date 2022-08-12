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
#define vvi vector<vector<int>>
void pgsolve()
{
    int n;
    cin >> n;

    long adp[n + 1][5];

    rep(i, 5)
    {
        adp[1][i] = 1;
    }

    vvi pattern = {
        {1}, {0, 2}, {0, 1, 3, 4}, {2, 4}, {0}};

    REP(i, 1, n)
    {

        for (int gu = 0; gu < 5; gu++)
        {
            adp[i + 1][gu] = 0;

            for (int x : pattern[gu])
            {

                adp[i + 1][gu] += adp[i][x] % mod;
            }
        }
    }
    long ans = 0;
    rep(i, 5)
    {
        ans = (ans + adp[n][i]) % mod;
    }
    cout << ans << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
