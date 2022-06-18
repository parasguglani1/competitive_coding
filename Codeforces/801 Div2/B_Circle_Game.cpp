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
    int a[n];
    int minn1 = INT_MAX;
    int minn2 = INT_MAX;

    rep(i, n)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "Mike" << endl;
        return;
    }
    if (n & 1)
    {
        cout << "Mike" << endl;
        return;
    }

    rep(i, n)
    {
        if (i % 2 == 0)
        {
            if (a[i] < minn1)
            {
                minn1 = a[i];
            }
        }
        else
        {
            minn2 = min(minn2, a[i]);
        }
    }

    int mini1 = 0;
    int mini2 = 0;
    rep(i, n)
    {
        if (a[i] == minn1)
        {
            mini1 = i;
            break;
        }
        i++;
    }

    REP(i, 1, n)
    {
        if (a[i] == minn2)
        {
            mini2 = i;
            break;
        }
        ++i;
    }
    if (minn1 < minn2)
    {
        cout << "Joe" << endl;
    }
    else if (minn1 > minn2)
    {
        cout << "Mike" << endl;
    }
    else
    {
        if (mini1 < mini2)
            cout << "Joe" << endl;
        else
            cout << "Mike" << endl;
    }
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