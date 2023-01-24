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
    int n;
    cin >> n;

    // vector<pair<int, int>> arr(n);
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    vi pos(n + 1, 0);
    rep(i, n)
    {
        pos[a[i]] = i;
    }

    int mx = 1, s = 1, e = 1;
    int tempstart = 1, tempend = 1;
    int md = (n + 1) / 2;
    int ans = (n + 1) / 2;
    int a1 = md - min(md, tempend);
    int a2 = tempstart - 1;
    int a3 = n - max(md, tempend);
    int tempans = max(a1 + a2, a3);
    ans = min(ans, tempans);
    for (int i = 2; i <= n; i++)

    {
        if (pos[i] <= pos[tempend])

        {
            int tmp = tempend - tempstart + 1;
            if (tmp > mx)
            {
                s = tempstart;
                e = tempend;
                mx = tmp;
            }
            tempstart = i;
            tempend = i;
        }
        else
        {
            tempend++;
        }
        int a1 = md - min(md, tempend);
        int a2 = tempstart - 1;
        int a3 = n - max(md, tempend);
        int tempans = max(a1 + a2, a3);
        ans = min(ans, tempans);
    }
    cout << ans << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto tempstart1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - tempstart1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
