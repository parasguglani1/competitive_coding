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
ll inv(vi s)
{
    ll count1 = 0, inversion = 0;

    for (auto it : s)
    {
        if (it == 1)
            count1++;
        else
            inversion += count1;
    }
    return inversion;
}
void pgsolve()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    vi v2 = a, v3 = a;

    int count1 = 0;
    int count2 = 0;
    int firstzeroindex = -1;
    int lastoneindex = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            firstzeroindex = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            lastoneindex = i;
        }
    }
    auto b = a;
    int ans = 0;
    int count3 = inv(b);
    b = a;

    if (firstzeroindex != -1)
        v2[firstzeroindex] = 1;
    if (lastoneindex != -1)
        v3[lastoneindex] = 0;
    int count4 = inv(v2);
    int count5 = inv(v3);
    ans = max(count3, max(count4, count5));
    // int count3 = 0;
    /*   if (firstzeroindex != -1)
      {
          a[firstzeroindex] = 1;
          count1 = inv(b);
          a[firstzeroindex] = 0;
      }
      b = a;
      ans = max(count3, count1);
      if (lastoneindex != -1)
      {
          a[lastoneindex] = 0;
          count2 = inv(b);
          a[lastoneindex] = 1;
      }
      ans = max(ans, count2); */

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
