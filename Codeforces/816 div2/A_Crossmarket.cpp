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
 /*    Obviously, except for 1 case, it is always beneficial for Stanley to use teleportation. Let the first portal he visited be A, and the last is B. It is also obvious, that teleporting for more than 1 time makes no sense, so that's why we consider, that he always teleports from A to B and that's it.

For the sake of convenience let's define manhattan distance between two points as dist(P1,P2)=|P1x−P2x|+|P1y−P2y|.

Consider the next few cases for the relative position of those two portals:

Ax≤Bx and Ay>By
Megan must make at least (n−1)+(m−1) moves. The portal does not help Stanley in the y direction, so he must make at least (m−1) moves.

Ax>Bx and Ay≤By
Megan must make at least (n−1)+(m−1) moves. The portal does not help Stanley in the x direction, so he must make at least (n−1) moves.

Ax≤Bx and Ay≤By
Megan must make at least dist(A,B) moves between A and B. Going between A and B either undoes Megan's progress in the x direction or y direction (depending on which is visited first), so she must make at least an additional (n−1)or(m−1) moves. Stanley must make at least (n−1)+(m−1)−dist(A,B) moves.

Ax>Bx and Ay>By
Megan must make at least (n−1)+(m−1) moves. Using the portal undoes Stanley's progress in both the x and y directions, so he must make at least (n−1)+(m−1) moves.

In all cases, the total number of moves is at least (n-1) + (m-1) + min(n-1, m-1).

 */


    int n, m;
    cin >> n >> m;

    int mine = min(m, n);
    int maxe = max(m, n);
    if (mine == 1 && maxe == 1)
    {
        cout << 0 << endl;
        return;
    }

    // int ans = m* 2 + n - 2;
    // cout<<mine<<endl;
    int ans = (mine * 2) + maxe - 2;
    cout << ans << endl;
    // cout<<"\n";
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
