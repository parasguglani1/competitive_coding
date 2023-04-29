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
#define rng 1000000
void pgsolve()
{
    int x;
    cin >> x;
    if (x == 1)
    {
        cout << -1 << endl;
        return;
    }

    // int c = 1;
    // x -= 1;
    // int a = 1;
    // int b = x;
    // bool flag = false;
    // for (int i = 1; i * i <= x; i++)
    // {
    //     int val = x / i;
    //     if (val <= 1000000)
    //     {
    //         if (val * i == x)
    //         {
    //             flag = true;
    //             a = i;
    //             b = val;
    //             break;
    //         }
    //     }
    // }
    // if (!flag)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    int a, b, c;

    if (x <= rng)
    {
        a = 1;
        b = 1;
        c = x - 1;
    }
    else if (x % rng == 0)
    {
        a = (x / rng) - 1;
        b = rng;
        c = rng;
    }
    else
    {
        a = x / rng;
        b = rng;
        c = x % rng;
    }
    cout << a << " " << b << " " << c << endl;
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
