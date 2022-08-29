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
    // string a, s;
    // cin >> a >> s;
    // int b;
    // int ans;
  /*   int n = s.length();
    int m = a.length();
    // if (n != m)
    // {
    // }
    int stemp = n - 1;
    int atemp2 = m - 1;
    // string ans = "";
    int ans[n];
    // int f = stoi(s);
    int i = 0;
    while (stemp >= 0 && atemp2 >= 0)
    {
        if (s[stemp] >= a[atemp2])
        {
            int t = s[stemp] - a[atemp2];
            ans[i++] = t;
            stemp--;
            atemp2--;
        }
        else
        {
            int t = (s[stemp - 1] - '0') * 10 + (s[stemp] - '0') - (a[atemp2] - '0');
            if (t >= 19)
            {
                cout << "-1" << endl;
                return;
            }
            ans[i++] = (t);
            stemp -= 2;
            atemp2--;
        }
    }
    if (atemp2 >= 0)
    {
        cout << "-1" << endl;
        return;
    }

    bool trailing_zero = true;
    while (i--)

    {
        if (ans[i] == 0 && trailing_zero)
        {
            continue;
        }
        cout << ans[i];
        trailing_zero = false;
    }
    cout << endl; */

    ll a, s;
    cin >> a >> s;
    vector<int> b;
    while (s)
    {
        int x = a % 10;
        int y = s % 10;
        if (x <= y)
            b.emplace_back(y - x);
        else
        {
            s /= 10;
            y += 10 * (s % 10);
            if (x < y && y >= 10 && y <= 19)
                b.emplace_back(y - x);
            else
            {
                cout << -1 << '\n';
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if (a)
        cout << -1 << '\n';
    else
    {
        while (b.back() == 0)
            b.pop_back();
        for (int i = sz(b) - 1; i >= 0; i--)
            cout << b[i];
        cout << '\n';
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
