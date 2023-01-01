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
    int n, m;
    cin >> n >> m;
    vi a(n);
    rep(i, n) cin >> a[i];
    vi b(m);
    rep(i, m) cin >> b[i];
    sortall(a);
    // sortall(b);
    // reverse(all(b));
    // reverse(all(a));
    // int ans = 0;
    /*   if (m >= n)
      {
          for (int i = 0; i < n; i++)
          {
              ans += b[i];
          }
      }
      else
      {
          for (int i = 0; i < m; i++)
          {
              ans += b[i];
          }
          for (int i = m; i < n; i++)
          {
              ans += a[i];
          }
      }
      cout << ans << endl; */

    // min priority queue for a
    priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end());

    for (int i = 0; i < m; i++)
    {
        int a = pq.top();
        // if (b[i] > a)
        {
            pq.pop();
            pq.push(b[i]);
        }
    }
    int ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
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
