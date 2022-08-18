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
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    /*     Note that the game will end only when the chip is in the upper right corner (otherwise you can move it 1 square to the right or up). For all moves, the chip will move n−1 to the right and m−1 up, which means that the total length of all moves is n+m−2 (the length of the move is how much the chip moved per turn). Since the length of any move is odd, then after any move of Burenka, the sum of the lengths will be odd, and after any move of Tonya is even. So we can find out who made the last move in the game by looking at (n+m−2)mod2=(n+m)mod2. With (n+m)mod2=0, Tonya wins, otherwise Burenka.

    The complexity of the solution is O(1).

     */
    int n, m;
    cin >> n >> m;
    if (n % 2 == m % 2)
    {
        cout << "Tonya" << endl;
    }
    else
    {
        cout << "Burenka" << endl;
    }
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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
