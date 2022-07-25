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

/*
The minimum number 1 * 11∗1 dominos can be found by finding the maximum number of 2 * 22∗2 dominos that can be placed in the grid. This is because the total area to be covered is constant (N * M)(N∗M).

We know that in each row we can place at most \lfloor N/2 \rfloor⌊N/2⌋ number of 2 * 22∗2 dominos and in each column we can place at most \lfloor M/2 \rfloor⌊M/2⌋ number of 2 * 22∗2 dominos. It is clear that we can always fill a sub-grid of size (\lfloor N/2 \rfloor * 2) * (\lfloor M/2 \rfloor * 2)(⌊N/2⌋∗2)∗(⌊M/2⌋∗2) with 2 * 22∗2 dominos and this means that the maximum number of 2 * 22∗2 dominos is \lfloor N/2 \rfloor * \lfloor M/2 \rfloor⌊N/2⌋∗⌊M/2⌋.

Since the total area to be covered is N * MN∗M and the maximum area to be covered by 2 * 22∗2 dominos is 4 * \lfloor N/2 \rfloor * \lfloor M/2 \rfloor4∗⌊N/2⌋∗⌊M/2⌋. So the minimum number of 1 * 11∗1 dominos (= area to be covered by 1 * 11∗1 dominos) is N * M - 4 * \lfloor N/2 \rfloor * \lfloor M/2 \rfloorN∗M−4∗⌊N/2⌋∗⌊M/2⌋.



 */

void pgsolve()
{
    int n, m;
    cin >> n >> m;
    if (n % 2 && m % 2)
    {
        cout << n - 1 + m << endl;
    }
    else if (n % 2 && !(m % 2))
    {
        cout << m << endl;
    }
    else if (!(n % 2) && m % 2)
    {
        cout << n << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    // cout << n * m - 4 * (n / 2) * (m / 2) << '\n';
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
