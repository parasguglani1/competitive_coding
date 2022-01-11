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
    int n, d;
    cin >> n >> d;
    //partial correct fails after i>43 because it exceeds the range of long long it fruitlessly calculates the value of total infections even when n is infected so ans becomes negative and minimum of negative and n is output so wrong.
    // int days= min(d,10ll);
    // // int d3=d-10;
    // int days2=max(0ll,d-10);
    // // cout<<pow(2,days)<<endl;
    // // cout<<pow(3,days2)<<endl;

    //     int ans = (pow(2,days)) * (pow (3,days2));
    //     cout<<min(n,ans)<<endl;
    //     // cout<<endl;

    ll ans = 1;
    REP(i, 1, d + 1)

    {
        if (i <= 10)
        {
            ans *= 2;
            if (ans > n)
            {
                ans = n;
                break;
            }
        }
        else
        {
            ans *= 3;

            if (ans > n)
            {
                ans = n;
                break;
            }
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

#ifdef _WIN32
    freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}