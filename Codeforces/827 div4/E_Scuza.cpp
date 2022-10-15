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
    int n, q;
    cin >> n >> q;
    vi v(n), a(n);
    vi pref(n);

    rep(i, n)
    {
        cin >> v[i];
    }

    a[0] = v[0];
    pref[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
        a[i] = max(v[i], a[i - 1]);
    }

    rep(i, q)

    {
        int leg;
        cin >> leg;
        auto bin = lower_bound(a.begin(), a.end(), leg + 1);

        if (bin == a.end())
        {
            cout << pref[n - 1] << " ";
        }
        else
        {
            int position = lower_bound(a.begin(), a.end(), leg + 1) - a.begin();
            position--;

            position < 0 ? cout << 0 << " " : cout << pref[position] << " ";
        }
    }
    cout << endl;
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
