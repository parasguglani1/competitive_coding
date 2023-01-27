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
    // int sum = n * (n + 1) / 2;
    /*   map<int, int    > m;
      rep(i, n)
      {
          int s = 0;
          rep(j, n - 1)
          {
              int x;
              cin >> x;
              m[x]++;
          }
      } */
    /* for (auto i : m)
    {
        cout << i.ss << " ";
    }
    cout << endl; */
    vector<vector<int>> vec(n, vector<int>(n - 1));
    vector<map<int, int>> mp(n - 1);
    REP(i, 0, n)
    {
        REP(j, 0, n - 1)
        {
            cin >> vec[i][j];
            mp[j][vec[i][j]]++;
        }
    }
    int mxx = 0;
    int mnn = INT_MAX;
    int tmp2 = 0;
    int tmp1 = 0;
    vi ans(n);
    for (auto &j : mp[0])
    {
        if (j.ss > mxx)
        {
            mxx = j.ss;
            tmp1 = j.ff;
        }
        if (j.ss < mnn)
        {
            mnn = j.ss;
            tmp2 = j.ff;
        }
    }
    ans[0] = tmp1;
    REP(i, 1, n - 1)
    {
        ans[i] = tmp2;
        for (auto j : mp[i])
        {
            if (j.first != tmp2)
            {
                tmp2 = j.first;
                break;
            }
        }
    }
    ans[n - 1] = tmp2;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

// cout<<sum;

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
