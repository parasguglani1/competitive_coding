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
/*     This problem can be solved with dynamic programming, though a greedy solution exists as well.

Both solutions use the fact that it is natural to think of iterating from the back to the front (i.e, from NN to 11, since reducing some A_iA
i
​
  by 22 is ‘better’ than reducing it by 11)
The following greedy also passes all the tests (though I do not have a formal proof of its correctness, other than the fact that ‘it seems reasonable’).

Iterate ii from NN to 22.
If A_i \leq 0A
i
​
 ≤0, do nothing
If A_i \gt 0A
i
w​
 >0, bring it down to either 11 or 00 (depending on parity) by performing the appropriate number of moves on position i-1i−1.
Once the above is done, once again iterate ii from NN to 22
If A_i = 1A
i
​
 =1 and A_{i-1} \gt 0A
i−1
​
 >0, use one operation on position i-1i−1
Now print |A_1| + |A_2| + \ldots + |A_N|∣A
1
​
 ∣+∣A
2
​
 ∣+…+∣A
N
​
 ∣.


 */


    int n;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        while (a[i] > 1)
        {
            a[i] -= 2;
            a[i - 1] -= 1;
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] >= 1 && a[i - 1] >= 1)
        {
            a[i] -= 2;
            a[i - 1] -= 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i]);
    }
    cout << sum << endl;
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
