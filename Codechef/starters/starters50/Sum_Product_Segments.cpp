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
vi vecfac;
void factorial_of_n(long long n)
{
    REP(i, 1, sqrt(n) + 1)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                vecfac.pb(i);
            }
            else
            {
                vecfac.pb(i), vecfac.pb(n / i);
            }
        }
    }
    sort(vecfac.begin(), vecfac.end());
}
void pgsolve()
{
    int x, y;
    cin >> x >> y;
    /*
    method 2 vecfac.clear();
    factorial_of_n(y);
    pii pone, ptwo;
    bool possible = false;
    for (auto &k : vecfac)
    {
        if (k <= y / k)
        {
            int second = y / k;
            ptwo = {k, second};
            pone = {x - (k - 1), k - 1};
            if (pone.ff <= pone.ss)
            {
                possible = true;
                break;
            }
            int first = y / k + 1;
            second = x - (first);

            pone.ff=first;
            pone.ss=second;
            if (pone.ff <= pone.ss)
            {
                possible = true;
                break;
            }
        }
        else
            break;
    }
    if (possible)
        cout << pone.ff << " " << pone.ss << "\n"
             << ptwo.ff << " " << ptwo.ss << "\n";
    else
        cout << -1 << "\n"; */
/*
    Observation 1 : The smallest interval[L, R][L, R] such that L + R = XL + R = X would be : [\frac{X} {2},\frac{X} {2} ], \;
    if
        \;
    X\;
    is\;
    even.[2X​, 2X​], ifXiseven.[\frac{X} {2},\frac{X} {2} + 1], \;
    if
        \;
    X\;
    is\;odd.[2X​,2X​+1],ifXisodd.
Any other interval would overlap the above one.
So we can choose one of the intervals as above and then loop through all possible intervals such that L \times R = YL×R=Y and for each interval we check if the two intersect each other or not.


 */
    ll a = x / 2;
    ll b = x / 2;
    if (x % 2 == 1)
        ++b;
    for (ll i = 1; (i * i) <= y; i++)
    {
        if (y % i != 0)
            continue;
        ll j = y / i;
        if (min(i, j) > b || max(i, j) < a)
        {
            cout << a << " " << b << endl;
            cout << min(i, j) << " " << max(i, j) << endl;
            return;
        }
    }
    cout << -1 << endl;
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
