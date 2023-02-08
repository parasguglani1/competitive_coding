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
    vector<int> vec(n);
    map<int, int> mb;
    map<int, int> mg;

    rep(i, n)
    {
        cin >> vec[i];
        mb[vec[i]]++;
    }
    int m;
    cin >> m;
    vector<int> g(m);
    rep(i, m)
    {
        cin >> g[i];
        mg[g[i]]++;
    }
    sort(vec.begin(), vec.end());
    sort(g.begin(), g.end());
    int pair = 0;
    rep(i, n)
    {
        // cout << vec[i] << endl;
        if (mg[vec[i] - 1] > 0)
        {
            // cout << vec[i] << endl;

            // cout << vec[i] - 1 << endl;

            // cout << mg[vec[i]-1] << endl;
            mg[vec[i] - 1]--;
            pair++;
        }
        else if (mg[vec[i]] > 0)
        {
            // cout << mg[vec[i]] << endl;
            mg[vec[i]]--;
            pair++;
        }

        else if (mg[vec[i] + 1] > 0)
        {
            // cout << vec[i] + 1 << endl;

            mg[vec[i] + 1]--;
            pair++;
        }
    }
    cout << pair << endl;
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
