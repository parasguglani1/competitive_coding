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
    int n, m;
    cin >> n >> m;
    vi vec;
    int sum = 0;
    int ans = 0;
    int vsum = 0;
    int psum = 0;
    int nsum = 0;
    rep(i, n)
    {
        int ele;
        cin >> ele;
        vec.pb(ele);
        vsum += ele;
    }
    priority_queue<int> maxp;
    priority_queue<int, vector<int>, greater<int>> minp;
    REP(i, m, n)
    {
        if (vec[i] < 0)
        {
            minp.push(vec[i]);
        }
        sum += vec[i];
        // vsum -= vec[i];
        while (sum < 0)
        {
            int ele = minp.top();
            ele *= -2;
            sum += ele;
            vsum -= vec[i];
            psum += ele ;
            ans++;
            minp.pop();
        }
        // cout<<sum<<endl;
        // cout<<vsum<<endl;
        // cout<<ans<<endl;
        // cout<<psum<<endl;
    }
    if (vec[m - 1] <= 0)
    {
        sum = vec[m - 1];
    }
    else if (m == 1)
    {
        // cout<<sum<<endl;
    }
    else
    {
        ans++;
        sum = vec[m - 1] * -1;
    }
    // cout<<sum<<endl;
    // cout<<vsum<<endl;
    // cout<<ans<<endl;
    // cout<<psum<<endl;
    REPR(i, m - 2, 0)
    {
        if (vec[i] > 0)
        {
            maxp.push(vec[i]);
        }
        sum += vec[i];
        vsum -= vec[i];

        while (sum > 0)
        {

            int ele = maxp.top();
            ele *= -2;
            nsum += ele ;
            ans++;
            vsum -= vec[i];

            sum += ele;
            maxp.pop();
            // cout<<sum<<endl;
            // cout<<vsum<<endl;
            // cout<<ans<<endl;
            // cout<<psum<<endl;
        }
    }
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
