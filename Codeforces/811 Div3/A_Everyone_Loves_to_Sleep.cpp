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
   /*  To begin with, let's learn how to determine how much time must pass before the i alarm to trigger. If the alarm time is later than the current one, then obviously 60∗(hi−H)+mi−M minutes should pass. Otherwise, this value will be negative and then it should pass 24∗60+60∗(hi−H)+mi−M since a full day must pass, not including the time from the alarm to the current time. We just need to find the minimum number of minutes among all the alarm clocks.

Due to small constrains, the problem can also be solved by stimulating the sleep process: increase the answer by 1 and check whether any alarm will work after this time.
 */

    int n, H, M;
    cin >> n >> H >> M;

    vector<pair<int, int>> a(n);
    for (auto &x : a)
        cin >> x.ff >> x.ss;

    sort(all(a));
    a.push_back({a[0].ff + 24, a[0].ss});
    int ans = INT_MAX;

    int length = a.size();
    rep(i, length)
    {
        if ((a[i].ff == H && (M <= a[i].ss)) || H < a[i].ff)
        {
            int tomin = -(H * 60 + M - a[i].ff * 60 - a[i].ss);

            ans = min(ans, tomin);
        }
    }

    int hour = ans / 60;
    int minutes = ans % 60;
    cout << hour << " " << minutes << '\n';
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
