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
int n, x, y, inv[1000001];
void pgsolve()
{
    string str1, str2;

    cin >> n >> str1 >> str2;
    int sum = 0;
    x = y = 1;
    rep(i, n)
    {
        if (str1[i] != str2[i])
        {
            sum++;
        }
    }
    if (sum == 0)
    {
        cout << 0 << endl;
        return;
    }
    REPR(i, n, 1)
    {
        int tmp = n * inv[i] % mod;
        int tmp2 = (n * inv[i] % mod - 1) * x;
        x = ((tmp + tmp2 % mod) % mod + mod) % mod;

        int add = 0;
        if (i <= sum)
        {
            add = 1;
        }
        add *= x;
        y = (y + add) % mod;
    }
    int ans = (x + 1) * n + y - x;
    cout << ((((ans) % mod + mod) % mod - 1)+mod)%mod << endl;
}

int32_t main()

{

    inv[0] = inv[1] = 1;
    for (long long i = 2; i <= 1000000; ++i)
        inv[i] = mod - mod / i * inv[mod % i] % mod;
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
