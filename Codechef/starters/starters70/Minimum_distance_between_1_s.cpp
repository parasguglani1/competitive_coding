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
void pgsolve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    /*   int ans = 0;
      if (n == 2)
      {
          cout << 1 << endl;
          return;
      }
      else if (n == 3)
      {
          if (str[1] == '1')
          {
              cout << 1 << endl;
              return;
          }
          else
          {
              cout << 2 << endl;
              return;
          }
      }
      else if (n == 4)
      {
          if (str == "1010" || str == "0101")
          {
              ans = 2;
          }
          else
          {
              ans = 1;
          }
      }
      else
      {
          int count1 = 0;
          rep(i, n)
          {
              if (str[i] == '1')
              {
                  count1++;
              }
          }
          if (count1 == 2 && ((str[0] == '1' && str[1] == '0') || (str[n - 1] == '1' && str[n - 2] == '0')))
          {
              ans = 2;
          }
          else
          {
              ans = 1;
          }
      }
      cout << ans << endl; */
    int even = 0;
    int odd = 0;
    rep(i, n)
    {
        if (str[i] == '1')
        {
            if (i % 2)
                even++;
            else
                odd++;
        }
    }
    int ans = 0;
    if (even && odd)
    {
        ans = 1;
    }
    else
    {
        ans = 2;
    }
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