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
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, n)

    cin >>v[i];

    sortall(v);
    int med = 0;
    int ind = 0;
    if (n & 1)
    {
        ind = ((n + 1) / 2) - 1;
    }
    else
    {
        ind = ((n) / 2) - 1;
    }
    med = v[ind];
    int sum = 0;
    int num = 0;
    rep(i, n)
    {
        sum = sum + (v[i] - med);
        num = num + (v[i]);
    }

    if (sum <= 0)
    {
        cout << abs(sum) << endl;
        return;
    }

    int low = 0, high = 1e9;
    int ans = LLONG_MAX;
    while (low <= high)
    {

        int mid = (low + high) >> 1;
        int x = 0;
        sum = 0;
        REP(i, ind, n)

        {
            x += max(0LL, mid - v[i]);
        }
        sum = sum + x;
        rep(i, n)
        {
            sum += (v[i] - mid);
            if (sum >= 1e18 || sum <= -1e18)
            {
                break;
            }
        }

        if (sum > 0)
        {
            low = mid + 1;
        }
        else
        {
            ans = min(ans, x + abs(sum));
            high = mid - 1;
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

#ifdef _WIN32
    freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}