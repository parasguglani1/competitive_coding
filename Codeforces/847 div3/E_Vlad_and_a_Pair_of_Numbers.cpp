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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void compute(int S, int X)
{
    int A = (S - X) / 2;

    int a = 0, b = 0;

    // Traverse through all bits
    for (int i = 0; i < 8 * sizeof(S); i++)
    {
        int Xi = (X & (1 << i));
        int Ai = (A & (1 << i));
        if (Xi == 0 && Ai == 0)
        {
            // Let us leave bits as 0.
        }
        else if (Xi == 0 && Ai > 0)
        {
            a = ((1 << i) | a);
            b = ((1 << i) | b);
        }
        else if (Xi > 0 && Ai == 0)
        {
            a = ((1 << i) | a);

            // We leave i-th bit of b as 0.
        }
        else // (Xi == 1 && Ai == 1)
        {
            cout << -1 << endl;
            // cout << "Not Possible";
            return;
        }
    }
    if (a + b == S && a ^ b == X)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

void pgsolve()
{
    int x;
    cin >> x;
    int s = 2 * x;
    compute(s, x);
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
