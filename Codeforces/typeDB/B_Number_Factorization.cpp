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
vi primes;
void primeFactors(int n)
{

    while (n % 2 == 0)
    {
        primes.pb(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            primes.pb(i);
            n = n / i;
        }
    }

    if (n > 2)
        primes.pb(n);
}

void pgsolve()
{
    map<int, int> mapp;
    int n;
    cin >> n;
    // primeFactors(n);
    int ans = 0;

    // for (auto x : primes)
    // {
    //     // mapp[x]++;
    //     cout << x << " ";
    // }
    int temp = n;
    int mx = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (!(temp % i) )
        {
            int count = 0;

            while (!(temp % i))
            {
                temp = temp / i;
                count++;
            }
            mx = max(count, mx);
            mapp[i] = count;
        }
    }
    if (temp != 1)
    {
        mapp[temp] = 1;
    }
    rep(i, mx)
    {
        int curr = 1;
        for (auto x : mapp)
        {
            if (x.ss > 0)
            {
                curr *= x.ff;
                mapp[x.ff]--;
            }
        }
        ans += curr;
    }

    cout << ans << endl;
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
