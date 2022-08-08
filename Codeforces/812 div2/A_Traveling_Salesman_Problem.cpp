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

/* Suppose we only have boxes on the Ox+ axis, then the optimal strategy is going in the following way: (0,0),(xmax,0),(0,0). There is no way to do in less than 2⋅|xmax| moves.

What if we have boxes on two axis? Let's assume it is Oy+, suppose we have a strategy to go in the following way: (0,0),(xmax,0),...,(0,ymax),(0,0). In this case it is optimal to fill the three dots with (0,0), which is just solving each axis independently.

Therefore, the number of axis does not matters. For each axis that has at least one box, go from (0,0) to the farthest one, then come back to (0,0).

Time complexity:  O(n) */
void pgsolve()
{
    int n;
    cin >> n;
    int xmin = 0, xmax = 0, ymin = 0, ymax = 0;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            xmin = min(xmin, b);
            xmax = max(xmax, b);
        }
        else
        {
            ymin = min(ymin, a);
            ymax = max(ymax, a);
        }
    }
    int length = xmax + (abs(xmin));
    int breadth = ymax + (abs(ymin));
    // cout << length << " " << breadth << endl
        //  << endl;
    cout << 2 * (length + breadth) << endl;
    //we made a rectange with sides length and breadth
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
