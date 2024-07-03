#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 998244353
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
    vi a(n + 1), mxes(n + 1), mnns(n + 1), sums1(n + 1), sums2(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    mxes[1] = max(a[1], abs(a[1]));
    mnns[1] = min(a[1], abs(a[1]));
    sums1[1] = 1;
    sums2[1] = 1;
    if (a[1] >= 0)
    {
        sums1[1] = 2;
        sums2[1] = 2;
    }

    for (int i = 2; i <= n; i++)
    {
        int lastmx = mxes[i - 1] + a[i];
        int lastmn = mnns[i - 1] + a[i];
        mxes[i] = max({lastmx, abs(lastmx), lastmn, abs(lastmn)});
        int lastsum1 = sums1[i - 1];
        int lastsum2 = sums2[i - 1];

        if (mxes[i] == lastmx)
        {
            sums1[i] = (sums1[i] + lastsum1) % mod;
        }

        if (mxes[i] == abs(lastmx))
        {
            sums1[i] = (sums1[i] + lastsum1) % mod;
        }
        if (mxes[i - 1] != mnns[i - 1])
        {
            if (mxes[i] == lastmn)
            {
                sums1[i] = (sums1[i] + lastsum2) % mod;
            }

            if (mxes[i] == abs(lastmn))
            {
                sums1[i] = (sums1[i] + lastsum2) % mod;
            }
        }
        mnns[i] = min({lastmx, abs(lastmx), lastmn, abs(lastmn)});
        if (mnns[i] == lastmx)
        {
            sums2[i] = (sums2[i] + lastsum1) % mod;
        }
        if (mnns[i] == abs(lastmx))
        {
            sums2[i] = (sums2[i] + lastsum1) % mod;
        }
        if (mxes[i - 1] != mnns[i - 1])
        {
            if (mnns[i] == lastmn)
            {
                sums2[i] = (sums2[i] + lastsum2) % mod;
            }

            if (mnns[i] == abs(lastmn))
            {
                sums2[i] = (sums2[i] + lastsum2) % mod;
            }
        }
    }
    int ans = sums1[n];
    cout << ans << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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
