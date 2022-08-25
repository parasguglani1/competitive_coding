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
#define vs vector<string>
#define vi vector<int>
void pgsolve()
{

    int dpx[] = {1, 0, 0, -1, 1, -1, 1, -1};
    int dpy[] = {0, -1, 1, 0, 1, -1, -1, 1};

    int n, m;
    cin >> n >> m;

    vs a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int val = 0, count1 = 0, count2 = 0;
    rep(d, n)
    {
        rep(e, m)
        {
            if (a[d][e] == '0')
            {
                rep(k, 8)
                {
                    int anx = d + dpx[k];
                    int any = e + dpy[k];
                    if (anx < n && anx >= 0)
                    {
                        if (any >= 0 && any < m)
                        {
                            if (a[anx][any] == '0')
                                count2++;
                        }
                    }
                }
                count1++;
            }
            else
                val++;
        }
    }
    int ans = 0;
    if (count2 != 0)
    {
        ans = val;
    }
    else if (count1 != 0)
        ans = val - 1;
    else
        ans = val - 2;
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
