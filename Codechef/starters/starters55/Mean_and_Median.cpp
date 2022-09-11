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
    int x, y;
    cin >> x >> y;
    int a, b, c;
    b = y;

    /*   int ans = 3 * x - y;
       for (int i = -1000; i <= 1000; i++)
      {
          for (int j = -1000; j <= 1000; j++)
          {
              if ((i + j) == (ans))
              {
                  cout << i << " " << b << " " << j << endl;
                  return;
              }
          }
          } */
    cout << -501 << " " << y << " " << 3 * x - y + 501 << endl;
    // int ans = 3 * x - y;
    // a = b - 201;
    // c = ans - a;
    // cout << a << " " << b << " " << c << endl;

    /* The median is YY, so one of the three numbers should definitely be YY.

The mean is XX, which means that \frac{A+B+C}{3} = X
3
A+B+C
​
 =X, or in other words, A+B+C = 3XA+B+C=3X.

After noticing this, several constructions are possible.

One solution is to print the three numbers Y, Y, 3X - 2YY,Y,3X−2Y. Their sum is clearly 3X3X, and since there are two occurrences of YY, one of them is guaranteed to be the middle element regardless of the value of 3X-2Y3X−2Y, hence the median is YY.

 */
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
