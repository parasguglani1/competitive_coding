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
void pgsolve()
{
/* We can make the following observations:

Suppose AA is a set of odd size and median MM. If we add another element, say xx, to AA:
If x \geq Mx≥M, the median of A\cup \{x\}A∪{x} still remains MM
If x \lt Mx<M, the median of A\cup \{x\}A∪{x} is not MM
Suppose AA is a set of even size and median MM. If we add xx to AA:
If x \leq Mx≤M, the median of the new set is still MM
If x \gt Mx>M, the median of the new set is not MM
This tells us the following, if we have fixed the first ii elements of the permutation:

If ii is odd, thxe i+1i+1-th element must be smaller than the current median
If ii is even, the i+1i+1-th element must be larger than the current median
One construction that satisfies the above properties is as follows:

Let K = \left\lfloor \frac{N}{2} \right\rfloorK=⌊
2
N
​
 ⌋. Then,

Place K+1, K+2, \ldots, NK+1,K+2,…,N in the odd positions
Place K, K-1, \ldots, 1K,K−1,…,1 in the even positions
For example, if N = 11N=11 (and so K = 5K=5), the permutation looks like [6, 5, 7, 4, 8, 3, 9, 2, 10, 1, 11][6,5,7,4,8,3,9,2,10,1,11].

 */

    int n;
    cin >> n;

    if (n % 2)
    {
        int mid = (n + 1) / 2;
        cout << mid << " ";
        REP(i, 1, mid)
        {
            cout << mid - i << " " << mid + i << " ";
        }
    }
    else if (n % 2 == 0)
    {
        int mid = n / 2;
        rep(i, mid)
        {
            cout << (mid + 1 + i) << " " << (mid - i) << " ";
        }
    }

    cout << endl;
/*
second method 
    int small = 1, large = n;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << large-- << " ";
        }
        else
        {
            cout << small++ << " ";
        }
    }
    cout << endl; */
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
