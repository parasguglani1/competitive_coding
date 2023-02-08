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
    vi vec(n);
    rep(i, n)
    {
        cin >> vec[i];
    }
    sort(all(vec));

    /*
    int ans = INT_MAX;
    for (int i = 1; i < n - 1; i++)
    {
        int first = vec[i - 1];
        int third = vec[i + 1];
        int second = vec[i];
        int curr = ceil(3 * (abs((float)(first + second + third) / 3 - second)));
        ans = min(ans, curr);
        cout << second << " ";
    }
    cout << endl; */

    int ans = INT_MAX;
    int mn = vec[0] + vec[1] + vec[2];
    int md = 3 * vec[1];
    ans = abs(md - mn);

    REP(i, 1, n - 1)
    {
        md = 3 * vec[i];
        rep(j, i)
        {
            mn = vec[j] + vec[i];
            int temp = md - mn;
            if (vec[i] == temp)
            {
                int tmpans = md - mn - vec[i + 1];
                ans = min(ans, abs(tmpans));
                continue;
            }
            else if (vec[i] > temp)
            {
                continue;
            }
            else
            {
                auto it = lower_bound(vec.begin(), vec.end(), temp);
                int idx = it - vec.begin();
                int tmpans = abs(mn - md + vec[idx]);
                if (idx <= i || idx != n)
                {
                    ans = min(ans, tmpans);
                }
                idx--;
                if (idx > i)
                {
                    int tmpans = abs(mn - md + vec[idx]);
                    ans = min(ans, tmpans);
                }
            }
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
