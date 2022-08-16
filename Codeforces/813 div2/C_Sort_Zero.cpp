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
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{

/*     An array is sorted in non-decreasing order if and only if there is no index i such that ai>ai+1. This leads to a strategy: while there is at least one such index i, apply one operation with x=ai.

Why is this optimal? Since our operation can only decrease values, and we must decrease ai so that ai>ai+1 is no longer true, this leaves us no choice but to use the operation with x=ai.

You can simulate this strategy by maintaining a set of bad indices, since if an index i becomes bad, after you apply an operation with x=ai, it can never become bad again. So in total, there are at most 2⋅(n−1) operations with the set.

Complexity: O(nlogn) or O(n), depending on which set you use.

Note: you can solve the problem in O(n) by noticing that if an index i is bad, we need to apply the operation for all unique non-zero values in {a1…ai}. This is also quite a bit shorter to code.

 */
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    // rep(i, n)
    REP(i, 1, n)

    {
        cin >> a[i];
    }
    int count = 0;
    // int maxele = a[0];
    int now = 1;
    vi bad_index;
    REP(i, 1, n)
    {
        if (mp[a[i]])
        {
            a[i] = 0;
            // count++;
        }
        if (a[i] < a[i - 1])
        {
            while (now < i)
            {
                if (!mp[a[now]] && a[now] > 0)
                    mp[a[now]] = 1, count++;
                now++;
            }
        }

        // for (int i = 1; i < n; i++)
        // {
        //     if (a[i] <= maxele)
        //         count++;
        // }

        // first zero from max elements then 0 from min elements  then get mincount
    }

    // REP(i, 1, n)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    cout << count << endl;
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
