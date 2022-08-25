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
void pgsolve()
{



    int n, k, b, s;
    cin >> n >> k >> b >> s;
    // if (k * n * (2 * b - 1) < s)
    // // if (((b + n) * k) <= s)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    // cout << "possible" << endl;
    // int ans = mine * 2 + n - 2;

    /*
    To start with, the sum of the numbers in the array s cannot be less, than k⋅b (where k is the number by which we divide, and b is beauty (s≥k⋅b))

It is important, that s≤k⋅b+(k−1)⋅n. Let's assume that is not true. Consider the sum of divisible parts of numbers in the array: it obviously does not exceed k⋅b, thus the sum of remainders is at least (k−1)⋅n+1, which means, that at least one of the numbers' remainders is k, which is impossible by definition of the remainder.

That way we got the criteria for the existence of the answer: k⋅b≤s≤k⋅b+(k−1)⋅n.

If there does exist an answer, then we can use the following algorithm:

Assign k⋅b to any of the n cells of the array.
Iterate over all the cells (including the cell from the previous item) and add min(s−sum,k−1) to the current cell, where sum is the current sum of the elements.

        int n, x, s, q;
        cin >> n >> x >> s >> q;
        vector <int> a(n);
        a[0] = x * s;
        q -= x * s;
        if (q < 0) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                int now = min(x - 1, q);
                a[i] += now;
                q -= now;
            }
            if (q > 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";

 */

    vi ans(n, 0);
    int max_possible = k * b;
    int maxe = (max_possible) + (k - 1) * n;
    int mine = max_possible;

    if (s > maxe || s < mine)
    {
        cout << -1 << endl;
        return;
    }

    ans[0] = max_possible;
    s = s - max_possible;
    rep(i, n)
    {
        if (s > 0)
        {
            if (s < k)
                ans[i] = ans[i] + s;
            else
                ans[i] = ans[i] + k - 1;
            s = s - (k - 1);
        }

        // cout << ans[i] << " ";
    }
    rep(i, n)
    {
        cout << ans[i] << " ";
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
