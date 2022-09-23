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
        int n;
        cin >> n;
        int mat[n][n];
        int a[n+1];

        for (int i = 1; i < n+1; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
            // cin >> mat[i][i];
        }

    /*
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = (i * (j - i) + mat[i][i]) % n;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        } */
    /*  for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= n; j++)
         {

             int num = (i * (j - i) + a[i]) % n;
             if (num < 0)
                 num = (num + n) % n;
             cout << num << " ";
           //   cout << ((((j - i) * i + a[i]) % n + n) % n) << " ";
         }
         cout << endl;
     } */

  /*   int n;
    cin >> n;
    vi vec(n + 1);
    REP(i, 1, n + 1)
    cin >> vec[i]; */
/*     REP(i, 1, n + 1)
    {
        REP(j, 1, n + 1)
        {
            int ele = i * (j - i) + a[i];
             int ans = (ele) % n;
            if (ans < 0)
                ans = (ans + n) % n;
            cout << ans << " ";
        }
        cout << endl;
    } */
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

    pgsolve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
