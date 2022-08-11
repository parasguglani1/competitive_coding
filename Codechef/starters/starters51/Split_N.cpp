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

int highestPowerof2(unsigned int n)
{
    // Invalid input
    if (n < 1)
        return 0;
    int res = 1;
    // Try all powers starting from 2^1
    for (int i = 0; i < 8 * sizeof(unsigned int); i++)
    {
        int curr = 1 << i;
        // If current power is more than n, break
        if (curr > n)
            break;
        res = curr;
    }
    return res;
}

void pgsolve()
{
    /* Note that each operation performed doesn’t change the sum of all the numbers Kulyash has. In particular, the sum is always going to be NN.

    At the final state, when everything is a power of 22, this means that we have written NN as the sum of some powers of 22. So, if we are able to find the minimum number of powers of 22 needed to write NN, we will then be able to find our answer — if we need KK powers of 22 to sum up to NN, the answer is K-1K−1 because we can create one of these powers at each step (and the last step will create two).

    So, what is the minimum number of powers of 22 needed?

    Once we know the above, the implementation is fairly simple. Count the number of set bits in the binary representation of NN (either by looping over each bit or using some inbuilt function), let this be KK. The answer is then K-1K−1.



     */

    int n;
    cin >> n;
    int highest = highestPowerof2(n);
    if (highest == n)
    {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    while (highest != n)
    {
        n = n - highest;
        highest = highestPowerof2(n);
        count++;
    }
    cout << count << endl;

// 2nd method
    // cout << __builtin_popcount(n) - 1 << endl;
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
