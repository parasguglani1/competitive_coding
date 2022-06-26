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
    /* The answer is at most 2, because doing the operation on [1,n] at most twice will always work. (If the array contains at least one zero, we need 2 operations. Otherwise we need 1 operation.)

    If the array consists of zeroes, the answer is 0.

    If all non-zero elements form a contiguous segment in the array, the answer is $1$​. To check this, you can find the leftmost and rightmost occurrence of non-zero elements and check if elements in the middle of them are also non-zero.

    Otherwise the answer is 2.

    Time complexity is  O(n) */
    int n;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    /*   bool allzero = true;
      rep(i, n)
      {
          cin >> a[i];
          if (a[i] != 0)
          {
              allzero = false;
          }
      }
      if (allzero)
      {
          cout << "0" << endl;
          return;
      }
      int count = 0;
      REP(i, 1, n - 1)
      {
          if (a[i] == 0 && a[i + 1] != 0)
          {
              count++;
          }
      }
      cout << count + 1 << endl; */
    int ans = 0;
    rep(i, n - 1)
    {
        if (a[i] == 0 && a[i + 1] != 0)
            ans++;
    }
    if (a[0] != 0)
        ans++;
    if (ans >= 3)
        ans = 2;
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