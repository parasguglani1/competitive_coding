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

bool doadd(int l, int r, int sm)
{
    if (sm >= l && sm <= r)
    {
        return true;
    }
    return false;
}

void pgsolve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    int ans = 0, sm = 0;
    int i = 0, j = 0;
    while (j < n)
    {
        sm += a[j];
        while (sm > r && i <= j)
        {
            sm -= a[i];
            i++;
        }
        if (doadd(l, r, sm))
        {
            ans++;
            sm = 0;
            i = j + 1;
        }
        j++;
    }

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
