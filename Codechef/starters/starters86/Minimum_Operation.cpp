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
int mx = 1e6 + 5;
vector<bool> isprime(mx, true);
vi sieve;
vi lowprime(mx);
void pgsolve()
{
    int n, x = 0;
    cin >> n >> x;
    vi v(n);
    set<int> unique;
    rep(i, n)
    {
        cin >> v[i];
    }
    rep(i, n)
    {
        unique.insert(v[i]);
    }

    if (unique.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    int curgcd = 0;
    rep(i, n)
    {
        curgcd = __gcd(curgcd, v[i]);
    }
    set<int> prm, grp;

    for (auto x : unique)
    {
        while (x > 1)
        {
            int tmp = lowprime[x];
            prm.insert(tmp);
            while (!(x % tmp))
            {
                x = x / tmp;
            }
        }
    }

    while (curgcd > 1)
    {
        int tmp = lowprime[curgcd];
        grp.insert(tmp);
        while (!(curgcd % tmp))
        {
            curgcd = curgcd / tmp;
        }
    }
    if (!grp.empty())
    {
        if (*grp.begin() <= x)
        {
            cout << 1 << endl;
            auto it = grp.begin();
            int ans = *it;
            cout << ans << endl;
            return;
        }
    }
    auto it = upper_bound(sieve.begin(), sieve.end(), x);
    int ind = it - sieve.begin();
    REPR(i, ind - 1, -1)
    {
        if (prm.find(sieve[i]) != prm.end())
        {
            continue;
        }
        cout << 1 << endl;
        int ans = sieve[i];
        cout << ans << endl;
        return;
    }
    cout << 2 << endl;
    cout << "2 3" << endl;
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

    isprime[0] = isprime[1] = false;
    REP(i, 2, mx)
    {
        if (isprime[i] != 0)
        {
            lowprime[i] = i;
            sieve.push_back(i);
            for (int j = i * i; j < mx; j += i)
            {
                lowprime[j] = i;
                isprime[j] = false;
            }
        }
    }
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
