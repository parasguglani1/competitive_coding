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
    vi sorted(n);
    rep(i, n)
    {
        cin >> sorted[i];
    }
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    vi revsorted = sorted;
    sort(sorted.begin(), sorted.end());
    sort(revsorted.begin(), revsorted.end(), greater<int>());
    if (sorted == revsorted || sorted[0] == sorted[n - 1])
    {
        cout << -1 << endl;
        return;
    }

    int tmp = sorted[0];
    vi b = sorted, c = sorted;

    for (int i = 0; i < n - 1; i++)
    {
        b[i] = b[i + 1];
    }
    b[n - 1] = tmp;
    int mn = INT_MAX;
    rep(i, n - 1)
    {
        mn = min(mn, b[i + 1] - b[i]);
    }
    if (b == sorted || b == revsorted)
    {
        mn = INT_MAX;
    }

    for (int i = n - 1; i > 0; i--)
    {
        c[i] = c[i - 1];
    }
    c[0] = sorted[n - 1];
    int mn2 = INT_MAX;

    rep(i, n - 1)
    {
        mn2 = min(mn2, c[i + 1] - c[i]);
    }
    if (c == sorted || c == revsorted)
    {
        mn2 = INT_MAX;
        return;
    }
    int ind = n / 2;
    vi e = sorted;
    swap(e[ind], e[ind + 1]);
    int mn3 = INT_MAX;
    rep(i, n - 1)
    {
        mn3 = min(mn3, e[i + 1] - e[i]);
    }
    vi f = sorted;
    swap(f[ind], f[ind - 1]);
    int mn4 = INT_MAX;
    rep(i, n - 1)
    {
        mn4 = min(mn4, f[i + 1] - f[i]);
    }
    if (mn4 < mn3 && f != sorted && f != revsorted)
    {
        e = f;
        mn3 = mn4;
    }

    if (e == sorted || e == revsorted)
    {
        mn3 = INT_MAX;
    }
    if (mn3 < mn2 && mn3 < mn)
    {
        rep(i, n)
        {
            cout << e[i] << " ";
        }
    }
    else

    {
        if (mn2 < mn)
        {
            rep(i, n)
            {
                cout << c[i] << " ";
            }
        }
        else if (b != sorted && b != revsorted && mn <= mn2)
        {
            rep(i, n)
            {
                cout << b[i] << " ";
            }
        }
        else
        {
            assert(false);
        }
    }

    // swap(a[0],a[n-1]);
    // rep(i, n)
    // {
    //     cout << a[i] << " ";
    // }

    cout << endl;
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
