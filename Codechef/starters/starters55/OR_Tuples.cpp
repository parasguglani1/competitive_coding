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
    int p, q, r;
    cin >> p >> q >> r;
    int T[4] = {1, 0, 1, 4};
    int res = 1;
    rep(i, 30)
    {
        int a1 = ((p >> i) & 1);
        int a2 = ((q >> i) & 1);
        int a3 = ((r >> i) & 1);

        res = res * (T[a1 + a2 + a3]);
    }

    /* The OR operation is bitwise independent, so we can simply find the number of possibilities for each bit from 0 to 19 and multiply them all together to get the final answer.

Now, let’s look at a specific bit. For this bit, each of A\vee B, B\vee C, A\vee CA∨B,B∨C,A∨C is either 00 or 11.

There are a few cases here:

If all 33 are zero, then this bit must be zero in all of A, B, CA,B,C so there is only one option.
If exactly one of them is 11, such a case can never happen so the answer is immediately zero (for example, if A\vee B = 1A∨B=1, then either AA or BB must be 11 at this bit, and so at least one of A\vee C, B\vee CA∨C,B∨C must be 11).
If exactly two of them are 11, there is exactly one option (if A\vee B = 0A∨B=0, then both AA and BB must be 00 and so C = 1C=1 is the only option, and so on).
If all three are 11, there are 44 possible options:
One way is for all three of A, B, CA,B,C to have a 11 at this bit
Otherwise, we can also choose exactly two of them to have a 11 at this bit. There are 33 ways to choose a pair.
Adding up the above options, we have 44 valid possibilities.
Compute the appropriate multiplier for each bit, then multiply them all together to obtain the final answer.
Note that the answer can be as large as 4^{20}4
20
 , so make sure you use a 6464-bit integer datatype.

Alternately, once a bit is fixed, one can also simply iterate across all 2^3 = 82
3
 =8 possibilities of values of A, B, CA,B,C and see how many of them contribute to the current configuration.

 */
    cout << res << endl;
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
