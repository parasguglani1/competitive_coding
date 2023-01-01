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

bool perform(vi &v, int x)
{
    REP(i, 0, v.size())
    {
        REP(j, i + 1, v.size())
        {
            if (gcd(v[i] + x, v[j] + x) != 1)
            {
                return false;
            }
        }
    }
    return true;
}
bool bs(vi &v, int l, int h)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (perform(v, mid))
        {
            return true;
        }

        return bs(v, l, mid - 1);
        return bs(v, mid + 1, h);

            return false;
        
    }
    else
    {
        return false;
    }
}

void pgsolve()
{
    /* if element repeated no
    if(odd >= 2 && even >= 2) no;
    */

    int n;
    cin >> n;
    vi v(n);
    REP(i, 0, n)
    {
        cin >> v[i];
    }
    int l = 0, h = 1000;

    if (bs(v, 0, 1000))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
