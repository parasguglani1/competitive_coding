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
    int n, k, r, c;
    cin >> n >> k >> r >> c;
    char ans[n + 1][n + 1];

    memset(ans, '.', sizeof(ans));
    // ans[r][c] = 'X';
    r--;
    c--;
    // for (int i = r; i <= n; i += k)
    // {
    //     ans[i][c] = 'X';
    // }
    // for (int i = r; i >= 1; i -= k)
    // {
    //     ans[i][c] = 'X';
    // }

    // for (int i = c; i <= n; i += k)
    // {
    //     ans[r][i] = 'X';
    // }
    // for (int i = c; i >= 1; i -= k)
    // {
    //     ans[r][i] = 'X';
    // }

    /*     for (int l = 2; l <= n * 2; ++l)
            if (abs(r + c - l) % k == 0)
                for (int i = 1; i <= n; ++i)
                    for (int j = 1; j <= n; ++j)
                        if (i + j == l)
                            ans[i][j] = 'X';
     */
/* Notice that the answer to the problem is at least n2k, because you can split the square into so many non-intersecting rectangles of dimensions 1×k. So let's try to paint exactly so many cells and see if maybe it's always possible.

For simplicity, let's first solve the problem without necessarily painting (r,c). In this case, we're looking for something like a chess coloring, which is a diagonal coloring.

Let's number the diagonals from the "lowest" to the "highest". Notice that every 1×k and k×1 subrectangle intersects exactly k consecutive diagonals, so we can paint every k-th diagonal to obtain the required answer: every such subrectangle will contain exactly one painted cell.

To add the (r,c) requirement back, notice that (r,c) lies on the diagonal number r+c. (Because if you trace any path from (0,0) to (r,c) with non-decreasing coordinates, going one cell upwards or rightwards increases exactly one of the coordinates by one, and also increases the number of the diagonal by one). Therefore, all we need to do is paint the cells whose coordinates satisfy  */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)

        {
            if (abs(r + c - i - j) % k == 0)
            {
                ans[i][j] = 'X';
            }
            else
            {
                ans[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
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
