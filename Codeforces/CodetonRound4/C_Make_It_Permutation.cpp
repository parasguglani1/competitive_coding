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
// bool isPossible();
void pgsolve()
{
    int n, adc, rmc;
    cin >> n >> rmc >> adc;
    vi v(n);
    rep(i, n) cin >> v[i];
    sortall(v);
    int i = 0, j = n - 1;
    int elem = 1;
    int ans = INT_MAX;
    int last = v[n - 1];
    int os=n;

    // sum of all elements
    int wholesum = 0;
    rep(i, n) wholesum += v[i];
    int uniquesum = 0;
    set<int> s;
    rep(i, n)
    {
        if (s.find(v[i]) == s.end())
        {
            s.insert(v[i]);
            uniquesum += v[i];
        }
    }

    int prevsum = 0;
    int count = 0;
    bool flag = false;
    // if (v[0] != 1)
    // {
    //     flag = true;
    //     s.insert(1);
    //     elem++;
    //     ans += adc;
    //     prevsum += 1;
    // }
    vi brr;
    n = s.size();
    brr.push_back(0);

    for (auto x : s)
    {
        brr.pb(x);
        // cout<<x<<' ';
    }
    // elem = 2;
    // for (int i = 1; i < brr.size(); i++)
    // {
    //     int x = brr[i];

    //     if (x == elem)
    //     {
    //         elem++;
    //         prevsum += x;
    //     }
    //     else if (x > elem)
    //     {
    //         int addprev = 0;
    //         int removesuff = 0;
    //         int add = x - elem;
    //         int remove = INT_MAX;
    //         {
    //             remove = (n - i) * rmc;
    //         }
    //         if ((add)*adc <= remove)
    //         {
    //             // cout<<'i';
    //             ans += add * adc;
    //             elem = x + 1;

    //             // prevsum += (elem - 1) * (elem + 1) / 2 - prevsum;
    //         }
    //         else
    //         {
    //             // cout << ans << endl;
    //             // cout << elem << " " << x << endl;
    //             ans += (n - i) * rmc;
    //             // if (n - elem + 1 == n)
    //             // {
    //             //     ans += adc - rmc;
    //             // }
    //             cout << ans << endl;
    //             // cout << x << " " << elem << endl;
    //             return;
    //         }
    //     }
    //     else
    //     {
    //         cout << 'c' << endl;
    //     }
    // }
    int minn = INT_MAX;
    n = brr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     int a1 = ((n - (i + 1))) * rmc;
    //     int b2 = (brr[i] - (i + 1)) * adc;
    //     minn = min(minn, a1 + b2);
    // }
    // minn = min(minn, n * rmc + adc);

    for (int i = 1; i <= n; i++)
    {
        minn = min(minn, (brr[i] - i) * adc + 1LL * (n - i) * rmc);
    }
    minn = min(minn, 1LL * n * rmc + adc);
//TODO
    // rep(i, n)
    // {
    //     // cout << brr[i] << ' ';
    //     int first = brr[i] - i;
    //     int second = n - i;
    //     cout << first << ' ' << second << endl;

    //     int currans = min(first * adc, second * rmc);
    //     ans = min(ans, currans);
    // }
    minn += ( os- s.size()) * rmc;

    cout << minn << endl;
}
// 2  +8+
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
