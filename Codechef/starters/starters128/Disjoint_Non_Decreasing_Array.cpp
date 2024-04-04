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
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];
    bool lastTaken = false;
    int maxSofar = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < maxSofar && lastTaken)
        {
            cout << "NO" << endl;
            return;
        }
        if (a[i] < maxSofar)
        {
            lastTaken = true;
            x = max(x, maxSofar - a[i]);
        }
        else
        {
            lastTaken = false;
            maxSofar = a[i];
        }
    }

    vector<int> v;
    int mx = a[0];
    x = 0;
    for (int i = 1; i < n; i++)
    {
        mx = max(a[i], mx);
        if (a[i] != mx)
        {
            v.push_back(i);
            x = max(x, mx - a[i]);
        }
    }
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1] + 1)
        {
            no return;
        }
    }
    for (auto &i : v)
    {
        // cout<<inc<<" "<<i<<endl;
        a[i] += x;
    }
    if (is_sorted(all(a)))
    {
        yes
    }
    else
    {
        no
    }

    // cout << x << endl;
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
