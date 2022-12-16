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
    vi a(n);
    int lcm = 1;
    rep(i, n)
    {
        cin >> a[i];
        // lcm = (lcm * a[i]) / (__gcd(lcm, a[i]));
    }

    vector<pair<int, int>> v;
    rep(i, n)
    {
        v.pb({a[i], i + 1});
    }
    sort(all(v));

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i].ff<<" ";
    // }
    // cout<<endl;

    int opcount = 0;
    vector<pair<int, int>> ans;
    vi temp2(n);
    temp2[0] = v[0].ff;
    /*
        for (int i = 0; i < n - 1; i++)
        {
            if ((v[i + 1].ff) % temp2[i] == 0)
            {

                temp2[i+1]=v[i].ff;
            }
            else

            {
                int temp = ((v[i + 1].ff / temp2[i]) + 1) * temp2[i];
                ans.push_back({v[i + 1].ss, temp - v[i].ff});
                temp2[i+1] = temp;
            }
        }
        cout << ans.size() << endl;
        rep(i, ans.size())
        {
            cout << ans[i].ff << " " << ans[i].ss << endl;
        } */

    for (int i = 0; i < n - 1; i++)
    {
        if ((v[i + 1].ff) % v[i].ff == 0)
        {

            // v[i + 1].ff = v[i].ff;
        }
        else

        {
            int temp = (v[i + 1].ff / v[i].ff + 1) * v[i].ff;
            ans.push_back({v[i + 1].ss, temp - v[i + 1].ff});
            v[i + 1].ff = temp;
        }
    }
    cout << ans.size() << endl;
    rep(i, ans.size())
    {
        cout << ans[i].ff << " " << ans[i].ss << endl;
    }
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
