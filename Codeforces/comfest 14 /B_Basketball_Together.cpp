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
    int n, d;
    cin >> n >> d;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    int i = n - 1;
    int j = 0;
    /*   while (i > j)
      {
          int sum = a[i];
          while (sum < d && i>j)
          {
              j++;
              sum *= 2;
          }
          if (i == j)
          {
              if (sum >= d)
              {
                  ans++;
              }
              cout << ans << endl;
              // cout<<"this "<<sum<<" "<<i;
              return;
          }
          ans++;
          // cout<<"this "<<sum<<" "<<i<<" "<<j<<endl;
          i--;
      } */

    int sum = a[i];
    int maxx=a[i];
    while (i >= j)
    {
        if (sum <= d)
        {
            sum += maxx;
            j++;
        }
        else
        {
            ans++;
            i--;
            // cout<<" sum is "<<sum <<"d is "<<endl;
            sum = a[i];
            maxx=a[i];
        }
    }
    if (sum > d)
    {
        // ans++;
        // sum = a[i];
    }
    // cout << "i " << i << " j " << j << endl;
    cout << ans << endl;
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
