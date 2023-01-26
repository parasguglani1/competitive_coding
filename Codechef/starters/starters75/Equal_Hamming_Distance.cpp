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
#define range 200002
int fact[range], invfact[range];
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
void getfact()
{
    invfact[0] = 1;
    fact[0] = 1;
    REP(i, 1, range)
    {
        fact[i] = (fact[i - 1] % mod * i) % mod;
        invfact[i] = ((modInv(i) % mod) * (invfact[i - 1]) % mod) % mod;
    }
}

void pgsolve()
{
    int n;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;
    int diffcount = 0;
    rep(i, n)
    {
        diffcount += (str1[i] != str2[i]);
    }
    int samecount = n - diffcount;
    if (diffcount % 2)
    {
        cout << 0 << endl;
        return;
    }
    int ans = binpow(2, samecount);
    int temp = (invfact[diffcount / 2] * invfact[diffcount / 2]) % mod;
    temp = ((temp) % mod * (fact[diffcount]) % mod) % mod;
    ans = ((ans % mod) * (temp) % mod) % mod;
    cout << ans << endl;
}

int32_t main()

{
    getfact();
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
