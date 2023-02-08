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
// int sol[1000005];
vi sol(1000005);

#define mod 1000000007

int getWays(int n)
{
    if (n == 0)
    {
        return sol[0] = 1;
    }
    if (n == 1)
    {
        return sol[1] = 1;
    }
    if (sol[n] == -1)
    {
        int ans = getWays(n - 1) + getWays(n - 2);
        return sol[n] = (ans % mod);
    }
    return sol[n];
}

void pgsolve()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    int a = sol[n];
    // cout << a << endl;

    while (a > 0)
    {
        count += a & 1;
        a = a >> 1;
    }
    // cout << a << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << sol[i] << " ";
    // }
    // cout << endl;

    // cout<<count<<endl;

    if (m == count)
    {
        cout << "CORRECT" << endl;
    }
    else
    {
        cout << "INCORRECT" << endl;
    }
    // empty sol
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();
    // memset(sol, -1, sizeof(sol));
    // fill(sol.begin(), sol.end(), -1);
    sol[0] = 1;
    sol[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        sol[i] = (sol[i - 1] + sol[i - 2]) % mod;
    }

    // getWays(1000000);
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << sol[i] << " ";
    // }
    // cout << endl;

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
