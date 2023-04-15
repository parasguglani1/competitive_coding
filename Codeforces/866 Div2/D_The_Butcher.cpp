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
    vector<pair<int, int>> rects(n);
    for (int i = 0; i < n; i++)
    {
        cin >> rects[i].first >> rects[i].second;
    }
    int mx = 0;
    sort(all(rects));
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, rects[i].first * rects[i].second);
    }

    vector<pair<int, int>> ans;
    for (int i = 1; i  < mx; i++)
    {

        if (i * i != mx)
        {
            int d = mx / i;
            int h = i, w = mx / d;
            bool ok = true;
            for (int j = 0; j < n; j++)
            {
                if (!((rects[j].first % h == 0 && rects[j].second % w == 0) || (rects[j].first % w == 0 && rects[j].second % h == 0)))
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                ans.push_back({h, w});
            }
        }
    }
    //TODO
    cout << sz(ans) << endl;
    for (auto p : ans)
    {
        cout << p.first << " " << p.second << endl;
    }
    /*  */
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
