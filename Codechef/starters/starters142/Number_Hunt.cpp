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
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
bool isPrime(int num)
{

    if (num <= 3)
    {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= num; i = i + 6)
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }

    {
        return true;
    }
}

int getNextPrime(int p)
{
    if (isPrime(p))
    {
        return p;
    }

    if (p <= 1)
    {
        return 2;
    }

    int ans = p;
    bool isp = false;

    while (!isp)
    {
        ans++;

        if (isPrime(ans))
        {
            isp = true;
        }
    }

    return ans;
}

void pgsolve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 6 << endl;
        return;
    }
    int ans1 = getNextPrime(n);
    int ans2 = getNextPrime(ans1 + 1);
    // cout << ans1 << " " << ans2 << endl;
    int ans = ans1 * ans2;
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
