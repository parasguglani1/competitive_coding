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
    /*
    First, let's determine if it's possible to reach the end at all. If the laser's field doesn't span until any wall, then it's surely possible — just stick to the wall yourself.

    If it touches at most one wall, it's still possible. If it's the bottom wall or the left wall, then take the path close to the top and the right wall. Vice versa, if it's the top wall or the right wall, then take the path close to the bottom and the left wall.

    What if both of these paths are locked? That means that the laser touches at least two walls at the same time: the top one and the left one, or the bottom one and the right one. Turns out, it's completely impossible to reach the end in either of these two cases. Just draw a picture and see for yourself.

    Thus, we can always take at least one of the path sticking to the walls. The distance from the start to the end is |n−1|+|m−1|, and both of these paths are exactly this long. So the answer is always either -1 or n+m−2.

    To check if the laser touches a wall with its field, you can either use a formula or check every cell adjacent to a wall.

    Overall complexity: O(1) or O(n+m) per testcase.

     */

    int n, m;
    cin >> n >> m;
    int sx, sy;
    cin >> sx >> sy;
    int d;
    cin >> d;
    int minx = min(sx - 1, m - sy);
    int miny = min(n - sx, sy - 1);

    if (minx <= d && miny <= d)
    {
        cout << -1 << endl;
        return;
    }

    cout << n + m - 2 << endl;
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
