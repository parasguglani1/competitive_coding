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
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    int ans1 = abs(y1 - y2) + abs(x1 - x2);
    // int ans1 = INT_MAX;
    int ans2 = min({x1, n - x1+1, y1, n - y1+1}) + min({x2, n - x2+1, y2, n - y2+1});

    // int ans2 = min(min(x1,n-x1), min(y1,n-y1) + min(min(x2,n-x2 y2);
    // int ans3= min
    // int ans4 = n - x1 + n - y1 + x2 + y2;
    // int ans5 = n - x1 + y1 + n - x2 + y2;
    // int ans6 = x1 + n - y1 + x2 + n - y2;

    // cout << ans1 << endl;
    cout << min({ans1, ans2}) << endl;
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
