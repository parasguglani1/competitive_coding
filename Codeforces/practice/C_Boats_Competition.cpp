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
#define d make_pair
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void pgsolve()
{
    int n;
    cin >> n;
    vi vec(n);
    map<int, int> d;
    rep(i, n)
    {
        cin >> vec[i];
        d[vec[i]]++;
    }
    if (n == 1)
    {
        cout<<0<<endl;
        return;
    }
    sortall(vec);
    int ans = 0;
    int min = vec[0] + vec[1];
    int mx = vec[n - 1] + vec[n - 2];

    for (int target = min; target <= mx; target++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int diff = target - vec[i];
            if (diff > 0)
            {
                d[vec[i]]--;
                if (d[diff] > 0)
                {
                    // cout<<vec[i]<<" "<<diff<<endl;
                    count++;
                    d[diff]--;
                }
            }
        }
        // revert the map to original
        d.clear();
        for (int i = 0; i < n; i++)
        {
            d[vec[i]]++;
        }

        if (count > ans)
        {
            ans = count;
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
