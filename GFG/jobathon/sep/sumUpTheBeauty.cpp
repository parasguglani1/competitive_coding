#include <bits/stdc++.h>
using namespace std;
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
    int n;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}

#define ss second
#define pb push_back
using ll = long long;
long long calcBeauty(int n, vector<int> arr)
{
    ll ans = 0;
    map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
        m[arr[i]].pb(i);
    for (auto &ele : m)
    {
        int sz=ele.ss.size();
        for (int y = 0; y < sz; y++)
        {
            int r = n;
            int l = -1;
            if (y < sz - 1)
            {
                r = ele.ss[y + 1];
            }
            if (y != 0)
            {
                l = ele.ss[y - 1];
            }

            int dis1 = r - ele.ss[y];
            int dis2 = ele.ss[y] - (l * 1LL);
            ans += (dis1) * (dis2);
        }
    }
    return ans;
}
