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
    vi guests(n);
    map<int, int> mp;
    rep(i, n)
    {
        cin >> guests[i];
        mp[guests[i]]++;
    }
    vi tables(m);
    rep(i, m) cin >> tables[i];

    priority_queue<int> pq1, pq2;
    rep(i, m)
    {
        pq2.push(tables[i]);
    }
    for (auto x : mp)
    {
        pq1.push(x.ss);
    }
    int ans = 0;
    while (!pq1.empty() && !pq2.empty())
    {

        int a = pq1.top();
        pq1.pop();
        int b = pq2.top();
        pq2.pop();
        ans += min(a, b);
        if (a > b)
        {
            pq1.push(a - b);
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
