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

void pgsolve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zerozero = 0, zeroOne = 0, oneOne = 0, oneZero = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            zerozero++;
        }
        else if (s[i] == '0' && s[i + 1] == '1')
        {
            zeroOne++;
        }
        else if (s[i] == '1' && s[i + 1] == '1')
        {
            oneOne++;
        }
        else
        {
            oneZero++;
        }
    }
    int ans = 0;
    if (oneZero > 1)
    {
        ans = 2;
    }
    else if (oneZero > 0)
    {
        ans = 1;
    }
    if (zeroOne > 0)
    {
        ans += 2;
    }
    ans += 2 * zerozero + 2 * oneOne;

    cout << ans << endl;
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
