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
// map<int, int> m;
// vi sum(10001, 0);
int isvalid(int s)
{
    // Solution of Quadratic Equation
    float k = (-1 + sqrt(1 + 8 * s)) / 2;

    // Condition to check if the
    // solution is a integer
    if (ceil(k) == floor(k))
        return k;
    else
        return -1;
}

void pgsolve()
{
    int n, x, p;
    cin >> n >> x >> p;
    int s = 0;
    if (p <= 2 * n)
    {
        for (int i = 1; i <= p; i++)
        {
            s += i;
            s %= n;
            if ((s + x) % n == 0)
            {
                // cout<<i<<endl;
                yes return;
            }
        }
        no return;
    }

    s = (1 + n) * n / 2;
    s %= n;
    int check = s + x;
    bool a = (check % n) == 0;

    if (a)
    {
        yes return;
    }
    else
    {
        REP(i, 1, n + 1)
        {
            s += i;
            s %= n;
            int check = s + x;
            bool a = (check % n) == 0;
            if (a)
            {
                yes return;
            }
        }
    }

    no
}

int32_t main()

{
    // sum[0] = 0;
    // for (int i = 1; i <= 100; i++)
    // {
    //     sum[i] = sum[i - 1] + i;
    //     cout << sum[i] << endl;
    // }
    // store sum of all natural numbers from 1 to 10^6 in map
    // int sum = 0;
    // for (int i = 1; i <= 10000; i++)
    // {
    //     sum += i;
    //     m[sum] = 1;
    // }
    // int sum = 0;
    // for (int i = 1; i <= 1000000; i++)
    // {
    //     sum += i;
    //     m[sum] = 1;
    // }

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
