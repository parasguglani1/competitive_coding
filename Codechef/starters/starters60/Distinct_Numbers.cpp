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
    int n, k;
    cin >> n >> k;

    int count = 0;

    vector<int> vec(2 * n + 1);
    REP(i, 1, n + 1)
    {
        int ele;
        cin >> ele;
        vec[ele] = ele;
    }
    int nn = vec.size();
    int maxx = 0;
    rep(i, nn)
    {
        maxx = max(maxx, vec[i]);
    }
    int curr = k, moves = k;
    int res = 0;
    int ind = 0;
    while (curr != 0)
    {
        if (vec[ind] != ind)
        {
            curr--;
            res += max(maxx - ind, 0ll);
        }
        ind++;
    }
    if (vec[2 * n] == 0)
    {
        moves--;
    }
    int indi = 1, total = 0;
    while (moves != 0)
    {
        if (vec[indi] != indi)
        {
            total += 2 * n - indi;
            moves--;
        }
        indi++;
    }
    cout << max(total, res) << endl;
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
