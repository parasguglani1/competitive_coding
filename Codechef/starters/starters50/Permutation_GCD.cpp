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
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
 /*    GCD of positive numbers is always \ge 1≥1. So the sum of NN of the prefix-GCDs is going to be \ge N≥N. So, if X \lt NX<N, there is no answer, and hence output -1−1.

For all other cases, we can construct a permutation. We see from the input constraints that XX is guaranteed to be \le 2*N - 1≤2∗N−1. So, we can place a suitable element at the first, and then a 11, and the rest in any order. In such a case, the GCD of all prefixes except the very first is 11. So, the first element has to be X-(N-1)X−(N−1). So the permutation is [X-(N-1), 1, 2, 3, \dots, N][X−(N−1),1,2,3,…,N], taking care that the first element isn’t repeated twice. */


    int x, n;
    cin >> n >> x;

    if (x < n)
    {
        cout << -1 << endl;
        return;
    }
    int last = x - n + 1;
    cout << last << " ";
    REP(i, 1, n)

    {
        if (i != last)
        {
            cout << i << " ";
        }
    }
    cout << endl;
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
