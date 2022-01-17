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
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void getmaxmin1(vi &a, int n, int &max, int &min)
{
    max = a[0];
    min = a[0];
    rep(i, n)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
}
void getmaxmin2(vi &a, int n, int &max, int &min)
{
    // 3n/2 comparisons optimized version
    int i;
    if (n % 2 == 0)
    {
        if (a[0] > a[1])
        {
            max = a[0];
            min = a[1];
        }
        else
        {
            min = a[0];
            max = a[1];
        }
        i = 2;
    }
    else
    {
        max = a[0];
        min = a[0];
        i = 1;
    }

    for (; i < n - 1; i += 2)

    {
        if (a[i] > a[i + 1])
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i + 1] < min)
            {
                min = a[i + 1];
            }
        }
        else
        {
            if (a[i + 1] > max)
            {
                max = a[i + 1];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
    }
}
void pgsolve()
{
    int i, j, n, max, min;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        a[i] = i + 1;
    }
    a[2] = 25;
    // rep(i, n)
    // {
    //     cout << i << " i is " << a[i] << endl;
    // }
    getmaxmin1(a, n, max, min);


    cout << "max is " << max << " min is " << min << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
    freopen("error.txt", "w", stderr);
#endif
    pgsolve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}