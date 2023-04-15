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
    bool zero = false;
    vi v(n);
    rep(i, n)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            zero = true;
        }
    }
    if (!zero)
    {
        yes return;
    }
    if (n == 1)
    {
        no return;
    }
    // cout << n << endl;
    // get mex of v
    int mex = 0;
    vi b = v;
    sort(all(b));
    rep(i, n)
    {
        if (b[i] == mex)
        {
            mex++;
        }
    }
    if (mex == n)
    {
        no return;
    }
    // // set all elements greater than mex to mex in v
    // bool greater = false;
    // int i = 0;
    // while (i < n && !greater)
    // {
    //     if (v[i] > mex)
    //     {
    //         v[i] = mex;
    //         greater = true;
    //         while (i < n && v[i] >= mex)
    //         {
    //             v[i] = mex;
    //             i++;
    //         }
    //         break;
    //     }
    //     i++;
    // }
    // // get mex of v

    // if (mex2 == mex + 1)
    // {
    //     yes return;
    // }
    // else
    // {
    //     no return;
    // }

    vi left;
    bool found = true;
    if (find(v.begin(), v.end(), mex + 1) == v.end())
    {
        found = false;
    }
    if (!found)
    {
        yes return;
    }
    rep(i, n)
    {
        if (v[i] == mex + 1)
            left.pb(i);
    }
    REP(i, left.front(), left.back() + 1)
    {

        v[i] = mex;
    }

    int mex2 = 0;
    vi b2 = v;
    sort(all(b2));
    rep(i, n)
    {
        if (b2[i] == mex2)
        {
            mex2++;
        }
    }
    if (mex2 == mex + 1)
        yes else no
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
