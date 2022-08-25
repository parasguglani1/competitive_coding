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
    
/*     Note that we always can make fractions equal in two operations: Multiply first fraction's enumerator by bc, the first fraction is equal to abcb=ac, Multiply second fraction's enumerator by ad, the second fraction is equal to acdd=ac.

That means that the answer does not exceed 2.

If fractions are equal from input, the answer is 0. Otherwise, it can't be 0.

Now we have to check if the answer is 1. Let's assume that for making fractions equal in 1 operation we have to multiply first fraction's enumerator by x. Then axb=cd must be true. From this we can see that x=bcad. x must be integer, so bc must be divisible by ad. If we assume that we multiplied first fraction's denumerator by x, we can do the same calculations and see that ad must be divisible by bc. So, for checking if the answer is 1 we need to check if one of ad and bc is divisible by another one. If we multiply second fraction's enumerator or denumerator by x we will get the same conditions for answer being equla to 1.

If the answer is not 0 or 1, it's 2.

Complexity: O(1)
 */
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int e = c * b;
    int f = d * a;
    if ((e) == (f))
        cout << 0 << endl;
    else if (e == 0 || f == 0)
    {
        cout << 1 << endl;
    }
    else if (e % f == 0 || f % e == 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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
