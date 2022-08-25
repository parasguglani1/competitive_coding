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
    int a, b;
    cin >> a >> b;
    int arr[8][8] = {0};
    arr[a - 1][b - 1] = 1;
    if ((a == 1) && (b == 1))
        arr[2][1] = 2;
    else if ((a == 1) && (b == 8))
        arr[2][6] = 2;
    else if ((a == 8) && (b == 1))
        arr[5][1] = 2;
    else if ((a == 8) && (b == 8))
        arr[5][6] = 2;
    else if (a == 8)
        arr[5][b - 2] = arr[5][b] = 2;
    else if (a == 1)
        arr[2][b - 2] = arr[2][b] = 2;
    else if (b == 8)
        arr[a - 2][5] = arr[a][5] = 2;
    else if (b == 1)
        arr[a - 2][2] = arr[a][2] = 2;
    else if ((a == 2) && (b == 2))
        arr[0][4] = arr[3][0] = 2;
    else if ((a == 2) && (b == 7))
        arr[0][4] = arr[4][7] = 2;
    else if ((a == 7) && (b == 7))
        arr[7][3] = arr[4][7] = 2;
    else if ((a == 7) && (b == 2))
        arr[7][4] = arr[4][0] = 2;
    else if ((b == 2) || (b == 7))
        arr[a - 3][b] = arr[a + 1][b - 2] = 2;
    else
        arr[a - 2][b - 3] = arr[a][b + 1] = 2;

    for (int z = 0; z < 8; z++)
    {
        for (int y = 0; y < 8; y++)
            cout << arr[z][y] << ' ';
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
