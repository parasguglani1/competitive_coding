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

bool isValid(vector<int> a)
{
    int n = a.size();
    int andvalue = a[0], xorvalue = a[0];
    if (andvalue < xorvalue)
    {
        return false;
    }
    for (int i = 1; i < a.size(); i++)
    {
        andvalue &= a[i];
        xorvalue ^= a[i];
        if (andvalue < xorvalue)
        {
            return false;
        }
    }

    andvalue = a[n - 1], xorvalue = a[n - 1];
    if (andvalue > xorvalue)
    {
        return false;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        andvalue &= a[i];
        xorvalue ^= a[i];
        if (andvalue > xorvalue)
        {
            return false;
        }
    }
    return true;
}
void pgsolve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        a[i] = 3;
    }
    a[n - 1] = 1;
    // a = {3, 3, 1};

    // generate all possible a array having n elements with each element having value 1 or 3
    // and check if it is valid or not
    // if valid print the array
    //  else generate next array

    // for (int i = 0; i < (1 << n); i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i & (1 << j))
    //         {
    //             a[j] = 3;
    //         }
    //         else
    //         {
    //             a[j] = 1;
    //         }
    //     }
    //     if (isValid(a))
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //             cout << a[i] << " ";
    //         }
    //         cout << endl;
    //         return;
    //     }
    // }

    assert(isValid(a));
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
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
