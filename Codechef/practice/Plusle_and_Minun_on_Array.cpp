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
    vector<int> vec(n);
    int sum = 0;
    int mn = INT_MAX;
    int mx = INT_MIN;
    int mnIndex = -1;
    int mxIndex = -1;
    // max ele that is being subtracted and min element that is being added
    // if even add odd sub
    rep(i, n)
    {
        cin >> vec[i];
        if (i & 1)
        {
            sum -= abs(vec[i]);

            if (mx < abs(vec[i]))
            {
                mx = abs(vec[i]);
                mxIndex = i;
            }
        }
        else
        {
            if (mn > abs(vec[i]))
            {
                mn = abs(vec[i]);
                mnIndex = i;
            }
            sum += abs(vec[i]);
        }
    }
    // cout << vec[mnIndex] << " " << vec[mxIndex];
    // cout << endl;
    swap(vec[mxIndex], vec[mnIndex]);
    int sum2 = 0;
    rep(i, n)
    {
        if (i & 1)
        {
            sum2 -= abs(vec[i]);
        }
        else
        {
            sum2 += abs(vec[i]);
        }
        // cout << vec[i] << " ";
    }
    // cout << endl;
    cout << max(sum, sum2) << endl;
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
