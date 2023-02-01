#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 998244353
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
int mul(int a, int b)
{
    return ((a % mod) * (b % mod)) % mod;
}
int binpow(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = ((ans % mod) * a) % mod;
        a = (a * a) % mod;
        // b >>=  1;
        b = b >> 1;
    }
    return ans % mod;
}
int modInv(int x)
{
    return binpow(x, mod - 2);
}

void pgsolve()
{
    int N, P;
    cin >> N >> P;

    vi inverses(N + 1, 0);
    inverses[1] = modInv(2);
    vi ans(N + 1, 0);
    ans[1] = inverses[1];

    int lastInv = modInv(2);
    for (int i = 2; i <= N; i++)
    {
        int y = binpow(P, i - 1);
        y = modInv(y);
        int a = binpow(y, 2);
        int tmp = (a * lastInv) % mod;
        int tmp2 = ((y % mod) * (inverses[i - 1] % mod)) % mod;
        int tempval = tmp2 + tmp + ans[i - 1];
        tempval %= mod;
        int t = mul(y, lastInv);
        inverses[i] = (inverses[i - 1] + t) % mod;
        ans[i] = tempval;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << ans[i] << " ";
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

    // w(t)
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
