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
    vi vv(n);
    int res = 0;
    rep(i, n)
    {
        int ele;
        cin >> ele;
        vv[i] = -ele;
    }
    rep(i, n)
    {
        int ele;
        cin >> ele;
        vv[i] += ele;
    }

    sort(all(vv));
    int last = n - 1;
    int con = (last) / 2;
    auto part = vv.begin();
    for (int i = last; i > con; i--)
    {
        int key = -vv[i];
        int index = lower_bound(part, vv.end(), key) - vv.begin();

        if (index >= i)
        {
            break;
        }
        else
        {
            part = vv.begin() + index + 1;
            res++;
        }
    }

    cout << res << endl;
//TODO
// https: // codeforces.com/blog/entry/106916
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
