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
bool checkRightAngled(int X1, int Y1,
                      int X2, int Y2,
                      int X3, int Y3)
{
    // Calculate the sides
    int A = (int)pow((X2 - X1), 2) + (int)pow((Y2 - Y1), 2);

    int B = (int)pow((X3 - X2), 2) + (int)pow((Y3 - Y2), 2);

    int C = (int)pow((X3 - X1), 2) + (int)pow((Y3 - Y1), 2);

    if ((A > 0 and B > 0 and C > 0) and (A == (B + C) or B == (A + C) or C == (A + B)))
        return true;
    else
        return false;
}
void pgsolve()
{

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // if (checkRightAngled(x1, y1, x2, y2, x3, y3))
    // {
    //     no
    // }
    // else
    // {
    //     yes
    // }

    if (x1 != x2 && x2 != x3 && x1 != x3)
    {
        yes
    }
    else if (y1 != y2 && y2 != y3 && y1 != y3)
    {
        yes
    }
    else
    {
        no
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
