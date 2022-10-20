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
void pgsolve()
{
    int n;
    cin >> n;
    int arr[n];
    bool flag[n];
    int sum = 0;
    REP(i, 1, n + 1)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        REP(i, 2, n + 1)
        {
            flag[i] = !(arr[i] >= arr[i - 1]);
        }
        vector<pair<bool, int>> vecbi;
        vecbi.pb({flag[2], 1});
        REP(i, 3, n + 1)
        {
            int vecsz = vecbi.size();

            if (flag[i] != vecbi[vecsz - 1].ff)
            {
                vecbi.pb({flag[i], 1});
            }
            else
            {
                vecbi[vecsz - 1].ss++;
            }
        }
        vecbi.pb({0, 0});

        int vsz = vecbi.size() - 1;
        rep(i, vsz)
        {
            int x = vecbi[i].ss;
            sum += (x * (x + 1)) / 2;
        }
        rep(i, vsz)
        {
            if (vecbi[i].ff)
            {
                int x = vecbi[i].ss;
                int y = vecbi[i + 1].ss;
                sum += (x * y);
            }
        }
        int ans = sum + n;
        cout << ans << endl;
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
