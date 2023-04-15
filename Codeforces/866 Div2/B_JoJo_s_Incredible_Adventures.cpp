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
void pgsolve()
{
    string str;
    cin >> str;
    int maxcon = 0;
    int count = 0;
    int n = str.length();
    bool zero = false;
    rep(i, n)
    {
        if (str[i] == '1')
        {
            count++;
            maxcon = max(maxcon, count);
        }
        else
        {
            count = 0;
            zero = true;
        }
    }
    if (!zero)
    {
        cout << n * n << endl;
        return;
    }
    int p = 0;
    rep(i, 2 * n + 1)
    {
        int cur = i % n;
        if (str[cur] == '1')
        {
            count++;
        }
        else
        {
            maxcon = max(maxcon, count);
            count = 0;
        }
        p++;
        maxcon = max(maxcon, count);
        if (p > n - 1 && str[cur] == '0')
        {
            break;
        }
    }
    maxcon = max(maxcon, count);
    cout << ((maxcon + 1) * (maxcon + 1)) / 4 << endl;
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
