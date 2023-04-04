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
bool check(vi a, int n, vi c)
{
    vi b;
    for (int i = 0; i < n - 1; i++)
    {
        b.push_back(max(a[i], a[i + 1]));
    }
    if (b == c)
    {
        return true;
    }
    return false;
}
void pgsolve()
{
    int n;
    cin >> n;
    n--;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    // int index = min_element(all(a)) - a.begin();
    // int mn = a[index];
    vi c = a;
    c[0] = a[0];
    rep(i, n - 1)
    {
        c[i + 1] = min(a[i], a[i + 1]);
    }
    c.push_back(a[n - 1]);

    // c.insert(c.begin() + index , mn);
    // c.insert(c.begin() + n, a[n - 1]);

    // rep(i, n + 1)
    // {
    //     cout << c[i] << " ";
    // }
    // cout << endl;
    if (check(c, n + 1, a))
    {
        // cout << n + 1 << endl;
        for (auto x : c)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        assert(false);
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
