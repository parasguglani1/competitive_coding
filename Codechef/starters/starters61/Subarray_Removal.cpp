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
    int a[n];
    int count0 = 0, count1 = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 0)
            count0++;
        else
            count1++;
    }

    int count = 0;
    /*   for (int i = 0; i < n - 1; i++)
      {
          if (a[i] > a[i + 1])
          {
              count++;
          }
      }
      if (a[n - 1] == 1 && a[n - 2] == 0)
      {
          count++;
      }
      if (a[0] == 1 && a[1] == 1)
      {
          count++;
      }
      cout << count << endl; */

    if (n == 1)
    {

        cout << 0 << endl;
        return;
    }

    int ans = 0;

    ans = min(count0, count1);
    count1 = count1 - ans;

    cout << ans + count1 / 3 << endl;
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
