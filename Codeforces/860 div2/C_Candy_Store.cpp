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
    vi a(n + 1), b(n + 1);
    int gcd = 0;
    REP(i, 1, n + 1)
    {
        cin >> a[i] >> b[i];
        int pro = a[i] * b[i];
    }
    int ans = 1;
    int mx = INT_MIN;
    int cm = b[1];
    int from = 1;
    REP(i, 2, n + 1)
    {
        int check = lcm(cm, b[i]);
        bool isposs = true;
        int rem = a[i] % (check / b[i]);
        if (rem != 0)
        {
            isposs = false;
        }

        if (cm != check)
        {
            REP(j, from, i)
            {
                int rem = a[j] % (check / b[j]);
                if (rem != 0)
                {
                    isposs = false;
                    break;
                }
            }
        }
        if (!isposs)
        {
            cm = b[i];
            from = i;
            ans++;
        }
        else
        {
            cm = check;
        }
    }

    // rep(i, n)
    // {
    //     mx = max(mx, b[i]);
    //     gcd = __gcd(gcd, a[i] * b[i]);
    //     // cout << gcd << ' ' << mx << endl;

    //     if (gcd < mx)
    //     {
    //         cout << endl;
    //         ans++;
    //         mx = b[i];
    //         gcd =0;
    //         // cout << gcd << ' ' << mx << endl;

    //         // cout << endl;
    //     }
    // }
    // if (gcd != 0)
    // {
    //     ans++;
    // }
    cout << ans << endl;
    // cout << gcd << endl;
    // cout << endl;
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
