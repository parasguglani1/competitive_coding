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
    int a[n], b[n];
    int a1 = 0, b1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            a1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 1)
        {
            b1++;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            count++;
    }
    /*   if (count == 0)
      {
          cout << count << endl;
          return;
      } */
    /*  int zero, one;
     for (int i = 0; i < n; i++)
     {
         if (a[i] == 1 && b[i] == 0)
         {
             one++;
         }
         else if (a[i] == 0 && b[i] == 1)
         {
             zero++;
         }
     }
     sort(a, a + n);
     sort(b, b + n);
     int zero2 = 0, one2 = 0;
     for (int i = 0; i < n; i++)
     {
         if (a[i] == 1 && b[i] == 0)
         {
             one2++;
         }
         else if (a[i] == 0 && b[i] == 1)
         {
             zero2++;
         }
     }
     cout << min(one + zero, one2 + zero2 + 1) << endl; */
    cout << min(count, abs(a1 - b1) + 1) << endl;
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
