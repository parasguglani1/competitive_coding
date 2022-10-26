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
unordered_map<int, pair<int, int>> mapp;
void pythagoreanTriplets(int limit)
{

    // triplet: a^2 + b^2 = c^2
    int a, b, c = 1;

    // loop from 2 to max_limit
    int m = 2;

    // Limiting c would limit
    // all a, b and c
    while (c < limit)
    {

        // now loop on j from 1 to i-1
        for (int n = 1; n < m; ++n)
        {

            // Evaluate and print triplets using
            // the relation between a, b and c
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
            mapp[sqrt(c)] = {sqrt(a), sqrt(b)};

            if (c > limit)
                break;
        }
        m++;
    }
}
 */
void pgsolve()
{
    // pythagoreanTriplets(1000);
    int n, x;
    cin >> n;
    int pow2 = 0;
    while (!n % 2)
    {
        n /= 2;
        pow2++;
    }
    if (pow2 % 2 == 1)
    {
        n *= 2;
        pow2--;
    }

    for (int i = 0; i * i <= n; ++i)
    {
        int sqi = i * i;
        int y = n - sqi;
        int z = sqrt(y);
        if (z * z == y)
        {
            int num1=z<<pow2/2;
            int num2=i << (pow2 / 2);
            cout << num1 << " " << num2 << endl;
            return;
        }
    }
    cout << -1 << endl;
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
