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
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
const int pr = 53;
int calc(int l, int r, vector<int> &dp, vector<int> &exponents, int n)
{
    int diff = dp[r] - dp[l];
    int hashV = (diff + mod) % mod;
    hashV *= exponents[n - 1 - l];
    hashV %= mod;
    return hashV;
};

void pgsolve()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<int> exponents(n), dp(n + 1);

    exponents[0] = 1;
    for (int i = 1; i < n; i++)
    {
        exponents[i] = exponents[i - 1];
        exponents[i] *= pr;
        exponents[i] %= mod;
    }

    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int cv = s[i] - 'a' + 1;
        dp[i + 1] = dp[i];
        dp[i + 1] += (cv * exponents[i]) % mod;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int remSz = n - 2 * i;
        if (remSz % 2 == 1)
        {
            continue;
        }
        int second = calc(i, 2 * i, dp, exponents, n);
        int first = calc(0, i, dp, exponents, n);

        if (first == second)
        {
            int halfRemL = remSz / 2;
            first = calc(2 * i, 2 * i + halfRemL, dp, exponents, n);
            second = calc(2 * i + halfRemL, n, dp, exponents, n);
            if (first == second)
            {
                count++;
            }
        }
    }

    cout << count << endl;
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
