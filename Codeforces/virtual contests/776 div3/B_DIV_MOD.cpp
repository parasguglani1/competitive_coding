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
    /*
    Consider fa(r). Note that ⌊ra⌋ is maximal over the entire segment from l to r, so if there is x in which fa gives a greater result, then xmoda>rmoda.

    Note that numbers from r−rmoda to r that have an incomplete quotient when divided by a equal to ⌊r/a⌋ do not fit this condition (and are guaranteed to have a value fa less than fa(r)). And the number x=r−rmoda−1:

    Has the maximum possible remainder xmoda=a−1;
    Has the maximum possible ⌊ra⌋ among numbers less than r−rmoda.
    So there are two candidates for the answer — these are r and r−rmoda−1. The second candidate is suitable only if it is at least l. It remains only to compare the values of fa and select the maximum.

    */
    int l, r, x;
    cin >> l >> r >> x;
    int ans = r / x + r % x;
    int m = r / x * x - 1;
    if (m >= l)
        ans = max(ans, m / x + m % x);
    cout << ans << endl;
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
