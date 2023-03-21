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
    // interactive
    int n;
    cin >> n;
    vi v(n);
    int currsum = 0;
    vi pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int right = n - 1;
    int left = 0;
    pref[0] = v[0];
    REP(i, 1, n + 1)
    {
        pref[i] = (pref[i - 1] + v[i]);
    }

    int ansidx = -1;
    while (left <= right)
    {
        int mid = (right + left) / 2;
        currsum = pref[mid];
        if (left > 0)
        {
            currsum -= pref[left - 1];
        }
        int numquery = mid - left + 1;
        cout << "? "<< numquery << " ";
        REP(q, left, mid + 1)
        {
            cout << q + 1 << " ";
        }
        cout << endl;
        int anssum;
        cin >> anssum;
        if (anssum == currsum)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
            ansidx = mid + 1;
        }
    }
    cout << "! " << ansidx << endl;
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
