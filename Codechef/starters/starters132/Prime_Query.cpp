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
    //TODO
    int n;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    vector<int> ones(n + 1, 0), twos(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ones[i + 1] = ones[i] + (a[i] == 1);
        twos[i + 1] = twos[i] + (a[i] == 2);
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << ones[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << twos[i] << " ";
    // }
    // cout << endl;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int sublength = r - l + 1;
        int onescnt = ones[r] - ones[l - 1];
        int twoscnt = twos[r] - twos[l - 1];
        // cout << l << ' ' << r << ' ' << k << endl;
        // cout<< ones[r] << ' ' << ones[l - 1] << ' ' << twos[r] << ' ' << twos[l - 1] << endl;
        // cout << onescnt << ' ' << twoscnt << endl;

        int mincnt = min(onescnt, twoscnt);
        int maxcnt = max(onescnt, twoscnt);
        int diff = maxcnt - mincnt;
        // cout << mincnt << ' ' << maxcnt << endl;

        if (k >= diff && mincnt + maxcnt + diff < sublength)
        {
            mincnt += diff;
            k -= diff;
        }
        else if (k >= diff && mincnt + maxcnt + diff >= sublength)
        {
            mincnt += sublength - mincnt - maxcnt;
            k = 0;
        }
        else
        {
            mincnt += min(k, sublength - mincnt - maxcnt);
            k = 0;
        }

        int remaining = sublength - mincnt - maxcnt;
        int canadd = min(remaining, k / 2);
        mincnt += canadd;
        maxcnt += canadd;
        k -= 2 * canadd;

        if (k % 2 && mincnt + maxcnt < sublength)
        {
            mincnt++;
        }
        // cout << mincnt << ' ' << maxcnt << endl;
        cout << mincnt * maxcnt << endl;
    }
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
