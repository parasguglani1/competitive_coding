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

void pgsolve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_sorted(a.begin(), a.end()))
    {
        yes return;
    }
    // // int curr=a[0];
    // // if a single digit in array and before that digit is greater than that digit then no
    // int maxDigit = 0;
    // int temp = a[0];
    // while (temp > 0)
    // {
    //     maxDigit = max(maxDigit, temp % 10);
    //     temp /= 10;
    // }
    // bool isSplitable = true;
    // for (int i = 1; i < n; i++)
    // {
    //     if (isSplitable)
    //     {
    //         temp = a[i];
    //         int maxDigit2 = 0;

    //         if (a[i] < 10)
    //         {
    //             if (a[i] < maxDigit)
    //             {
    //                 no return;
    //             }
    //             else
    //             {
    //                 maxDigit = a[i];
    //             }
    //             continue;
    //         }
    //         while (temp > 0)
    //         {
    //             maxDigit2 = max(maxDigit2, temp % 10);
    //             temp /= 10;
    //         }

    //         if (maxDigit2 < maxDigit)
    //         {
    //             maxDigit = max(a[i], maxDigit2);
    //             isSplitable = false;
    //         }
    //         maxDigit = max(maxDigit, maxDigit2);
    //     }
    //     else
    //     {
    //         if (a[i] < maxDigit)
    //         {
    //             no return;
    //         }
    //         else
    //         {
    //             maxDigit = a[i];
    //         }
    //     }
    // }
    // yes return;
    REPR(i, n - 2, -1)
    {
        if (a[i + 1] < a[i])
        {
            if (a[i] < 10)
            {
                no;
                return;
            }
            int dig = a[i];
            int rem = dig % 10;
            dig = a[i] / 10;
            if (dig <= rem && a[i + 1] >= rem)
            {
                a[i] = dig;
            }
            else
            {
                no return;
            }
        }
    }
    yes return;
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
