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
struct point
{
    int weight, position, id;
};

void pgsolve()
{
    /*     We create a structure that stores for each point its coordinate, weight, and index in the input data. Sort the points array by increasing weight. The sum of weights of the first 2⋅n points will be minimal, so we use them to construct a system of n nested segments. We save the weights of the first 2⋅n points in the variable sum and remove the remaining m−2⋅n points from the array.

    Now sort the points in ascending order of coordinates and form a system of nested segments such that the endpoints of ith segment are points[i] and points[2⋅n−i+1] for (1≤i≤2⋅n). Thus, the endpoints of the first segment are points[1] and points[2⋅n], the endpoints of the nth segment are points[n] and points[n+1].

    For each test case we first output sum, then — n pairs of numbers i, j (1≤i,j≤m) — the indices under which the endpoints of the current segment were written in the input data.
     */

    int n, m;
    cin >> n >> m;
    vector<point> points(m);

    rep(i, m)
    {
        cin >> points[i].position >> points[i].weight;
        points[i].id = i + 1;
    }

    sort(points.begin(), points.end(), [](point a, point b)
         { return a.weight < b.weight; });

    int sum = 0;
    rep(i, m)
    {
        if (i < 2 * n)
            sum += points[i].weight;
        else
            points.pop_back();
    }

    sort(points.begin(), points.end(), [](point a, point b)
         { return a.position < b.position; });

    cout << sum << endl;
    rep(i, n)
    {
        cout << points[i].id << ' ' << points[2 * n - i - 1].id << endl;
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
