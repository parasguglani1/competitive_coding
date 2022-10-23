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
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    /*   int c = 0;
      for (int i = 0; i < n; i++)
      {

          if (c & 1)
          {
              cout << "-1\n";
              return;
          }
      }

      vector<pair<int, int>> ans;
      REP(i, 0, n - 1)
      {
          if (a[i] == a[i + 1])
              ans.pb({i, i + 1});
          else
          {
              ans.pb({i, i});
              ans.pb({i + 1, i + 1});
          }
          i++;
      }
      cout << ans.size() << endl;
      for (auto i : ans)
          cout << i.first + 1 << " " << i.second + 1 << endl;
   */

    vector<pair<int, int>> res;
    vi temp;
    int neg1 = 0, pos1 = 0;
    rep(i, n)
    {
        int ncur = temp.size();
        if (ncur && temp[ncur - 1] != a[i])
        {
            if (!ncur % 2)
                res.pb({i - ncur, i - 1});
            else
            {
                if (ncur == 1)
                {
                    res.pb({i - 1, i - 1});
                }
                else
                {
                    res.pb({i - ncur, i - 2}), res.pb({i - 1, i - 1});
                }
                if (temp[ncur - 1] == -1)
                {
                    neg1++;
                }
                else
                {
                    pos1++;
                }
            }
            temp.clear();
            temp.pb(a[i]);
        }
        else
        {
            temp.pb(a[i]);
        }
    }
    int ncur = temp.size();
    if (ncur)
    {
        if (ncur % 2 == 0)
        {
            res.pb({n - ncur, n - 1});
        }
        else
        {
            if (ncur == 1)
            {
                res.pb({n - 1, n - 1});
            }
            else
            {
                res.pb({n - ncur, n - 2}), res.pb({n - 1, n - 1});
            }
            if (temp[ncur - 1] == -1)
            {
                neg1++;
            }
            else
            {
                pos1++;
            }
        }
    }
    if (neg1 != pos1)
    {
        cout << "-1" << endl;
        return;
    }
    cout << res.size() << endl;
    for (auto &it : res)
        cout << it.first + 1 << " " << it.second + 1 << endl;
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
