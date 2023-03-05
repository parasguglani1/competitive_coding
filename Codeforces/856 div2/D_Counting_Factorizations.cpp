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
    // 1 is always exponent
    int n;
    cin >> n;
    vi v(2 * n);
    rep(i, 2 * n)
    {
        cin >> v[i];
    }
    // count number of primes
    int cnt1 = 0;
    rep(i, 2 * n)
    {
        if (v[i] == 1)
        {
            cnt1++;
        }
    }
    // count number of prime numbers in v
    int cntprimes = 0;
    rep(i, 2 * n)
    {
        int flag = 0;
        REP(j, 2, (v[i]) )
        {
            if (v[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && v[i] != 1)
        {
            cntprimes++;
        }
    }
    // count number of non-prime numbers in v
    int cntnonprimes = 2 * n - cntprimes;
    cout<<cntprimes<<" "<<cntnonprimes<<endl;
    if (cntprimes < n)
    {
        cout << 0 << endl;
        return;
    }
    //TODO
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
