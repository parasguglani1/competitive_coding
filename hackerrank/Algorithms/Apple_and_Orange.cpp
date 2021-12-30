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
    // int i, j, n, m;
    int s, t;
    cin >> s >> t;
  
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int apples[m];
    int apples_count = 0;
    int oranges_count = 0;
    rep(i, m)
    {
        cin >> apples[i];
        apples[i] += a;
        apples_count += (apples[i] >= s && apples[i] <= t);
    }
    int oranges[n];
    rep(i, n)
    {
        cin >> oranges[i];
        oranges[i] += b;
        oranges_count += (oranges[i] >= s && oranges[i] <= t);


    }

    cout << apples_count << "\n" << oranges_count;





}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
    freopen("error.txt", "w", stderr);
#endif

   
        pgsolve();
    
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}