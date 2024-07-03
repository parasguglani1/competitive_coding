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
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void pgsolve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 2)
    {
        ans = abs(a[0] - a[1]);
        ans = max({ans, a[1] - 1, abs(a[0] - 1), abs(a[1] - k), abs(a[0] - k)});
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        ans += abs(a[i] - a[i + 1]);
    }
    int cursum=ans;
    // cout<<ans<<endl;
    for (int i = 1; i < n - 1; i++)
    {
        int temp = a[i];
        int curval = abs(a[i] - a[i + 1]) + abs(a[i] - a[i - 1]);
        a[i] = 1;
        int curval1 = abs(a[i] - a[i + 1]) + abs(a[i] - a[i - 1]);
        a[i] = k;
        int curval2 = abs(a[i] - a[i + 1]) + abs(a[i] - a[i - 1]);
        a[i] = a[i + 1] + a[i - 1];
        a[i] /= 2;
        int curval3 = abs(a[i] - a[i + 1]) + abs(a[i] - a[i - 1]);
        a[i] = temp;

        int maxval = max({curval1, curval2, curval3});
        ans = max(ans, cursum - curval + maxval);
        // cout << curval1 << " " << curval2 << " " << curval3 <<" "<<curval<< endl;
        // cout << ans << endl;
    }

    // a[0] = 1;
    int curval = abs(a[0] - a[1]);
    a[0] = 1;
    int curval1 = abs(a[0] - a[1]);
    a[0] = k;
    int curval2 = abs(a[0] - a[1]);
    ans=max(ans,cursum-curval+max({curval1,curval2}));

    curval=abs(a[n-1]-a[n-2]);
    a[n-1]=1;
    curval1=abs(a[n-1]-a[n-2]);
    a[n-1]=k;
    curval2=abs(a[n-1]-a[n-2]);
    ans=max(ans,cursum-curval+max({curval1,curval2}));

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
