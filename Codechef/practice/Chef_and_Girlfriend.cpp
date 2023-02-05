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
#define ps(x, y) setprecision(y) << x
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
    string gf, chef;
    cin >> gf >> chef;
    int gft, cft;
    int dist;
    cin >> dist;
    gft = ((gf[0] - '0') * 10 + gf[1] - '0') * 60 + (gf[3] - '0') * 10 + gf[4] - '0';
    cft = ((chef[0] - '0') * 10 + chef[1] - '0') * 60 + (chef[3] - '0') * 10 + chef[4] - '0';
    double plan1, plan2;
    plan1 = gft - cft + dist;
    // int cft2 = cft;
    // plan2 = dist;
    // if (gft == cft + dist)
    // {
    //     plan2 += dist / 2.0;
    // }
    // else if (gft > cft + dist)
    // {
    //     cout << gft << endl;
    //     cout << dist << endl;
    //     plan2 += min(gft - dist, dist);
    //     cout << plan2 << endl;

    //     if (cft + plan2 > gft)
    //     {
    //         cft += plan2;
    //         plan2 += (gft - cft) / 2.0;
    //     }
    //     plan2 = max((double)(gft - cft2), plan2);
    // }
    // else
    // {
    //     int a = gft - cft;
    //     int b = dist - a;
    //     plan2 += (dist - b) / 2.0;
    // }
    // cout << ps(plan1, 3) << " " << ps(plan2, 3) << endl;
    int early = gft - cft;
    if (early >= 2 * dist)
    {
        plan2 = early;
    }
    else
    {
        plan2 = early + (dist - early / 2.0);
    }
    cout << fixed << setprecision(1) << plan1 << " " << plan2 << endl;
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
