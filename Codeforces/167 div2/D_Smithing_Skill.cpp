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
// sort by a-b in ascending order then by a in ascending order

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.ff - a.ss == b.ff - b.ss)
    {
        return a.ff < b.ff;
    }
    return a.ff - a.ss < b.ff - b.ss;
}
struct compare
{
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        if ((a.ff - a.ss) == (b.ff - b.ss))
        {
            return a.ff > b.ff;
        }
        return (a.ff - a.ss) > (b.ff - b.ss);
    }
};

void pgsolve()
{
    int mn = INT_MAX;
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m);
    rep(i, n)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    rep(i, m)
    {
        cin >> c[i];
    }
    vector<pair<int, int>> v(n);
    rep(i, n)
    {
        v[i] = {a[i], b[i]};
    }
    // sort(all(v), cmp);
    // print v
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
    rep(i, n)
    {
        pq.push(v[i]);
    }

    // Print the elements of the priority queue
    while (!pq.empty())
    {
        auto x = pq.top();
        pq.pop();
        cout << x.first << " " << x.second << endl;
    }

    // for (auto x : v)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    int ans = 0;
    for (auto x : c)
    {
        // find idx value just greater than x in v
    }
    ans *= 2;
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

    // w(t)
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
