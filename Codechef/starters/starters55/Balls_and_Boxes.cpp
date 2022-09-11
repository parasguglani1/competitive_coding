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
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (k >= n)
    {
        cout << "NO" << endl;
        return;
    }
    if (n < (k * (k + 1) / 2))
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    /*
    The answer is “Yes” if and only if N \geq \frac{K(K+1)}{2}N≥
2
K(K+1)
​


 Proof
Since the boxes must have a distinct number of balls, the minimum possible number of balls is 1 + 2 + 3 + \ldots + K = \frac{K(K+1)}{2}1+2+3+…+K=
2
K(K+1)
​
 . So, we must definitely have N \geq \frac{K(K+1)}{2}N≥
2
K(K+1)
​
 .

On the other hand, suppose we have more than \frac{K(K+1)}{2}
2
K(K+1)
​
  balls. Distribute them so that initially the boxes have 1, 2, \ldots K1,2,…K balls. Then, put all remaining balls into the last box (the one with KK balls initially). This gives us a valid distribution, thus completing the proof.

 */
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
