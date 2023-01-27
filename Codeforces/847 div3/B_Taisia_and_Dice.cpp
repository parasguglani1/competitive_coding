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
    int n, s, r;
    cin >> n >> s >> r;
    int mx = s - r;
    // cout << mx << " ";
    int a[n];
    a[0] = mx;
    // int k = ceil(r * 1.0 / (n - 1));
    // if (k == 0)
    // {
    //     k = 1;
    // }
    // for (int i = 0; i < n - 2; i++)
    // {
    //     a[i + 1] = k;
    //     // cout << k << " ";
    // }
    // a[n - 1] = r - (n - 2) * k;
    // int temp = 0;
    // if (a[n - 1] > mx)
    // {
    //     temp = a[n - 1] - mx;
    //     a[n - 1] = mx;
    //     return;
    // }

    // cout << r - (n - 2) * k << " ";
    int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     // sum += a[i];
    //     // cout << a[i] << " ";
    // }

    vector<int> ans(n - 1);
    ans.pb(mx);
    for (int i = 0; i < n - 1; i++)
    {
        ans[i] = 1;
        r = r - 1;
    }
    int i = 0;
    while (r != 0)
    {
        if (ans[i] < mx)
        {
            r--;
            ans[i]++;
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ';
        sum += ans[i];
    }
    if (sum != s || ans.size() != n)
    {
        cout << "NO";
    }
    cout << endl;
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
