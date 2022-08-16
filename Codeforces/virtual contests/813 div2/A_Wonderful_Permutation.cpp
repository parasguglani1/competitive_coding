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
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, n) cin >> a[i];

    if (n == k)
    {
        cout << "0" << endl;
        return;
    }

    // maintaining a bool array of all first k integers present in first k elements
    bool arr[k + 1] = {false};
    for (int i = 1; i < k + 1; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (a[j] == i)
            {
                arr[i] = true;
                break;
            }
        }
    }
    // counting all missing elements that need to be swapped
    int count = 0;
    for (int i = 1; i < k + 1; i++)
    {
        if (arr[i] == false)
            count++;
    }
    // if (count % 2)
    //     cout << count / 2 + 1 << endl;
    // else
    // {
    // cout << count << endl;
    // }
    // int sortedarray[k];
    // rep(i, k)
    // {
    //     sortedarray[i] = i + 1;
    // }

    //* Method 2

    /*
For any permutation p of length n, the final sum p1+p2+…+pk after some number of operations can't be less than 1+2+…+k.

This means that we need to apply the operation at least once for every i such that 1≤i≤k and pi>k. Every time we apply it, we have to choose some index j such that k<j≤n and pj≤k.

This is always possible since initially the number of suitable i is equal to the number of suitable j, and one operation decreases both the number of suitable i and the number of suitable j by one.

It is easy to see that in the end, the set {p1,p2,…,pk} only contains the values {1,2,…,k}, which means that the sum is equal to 1+2+…+k, which is the smallest sum we can get.

So the answer is the the number of i such that 1≤i≤k and pi>k.



Complexity: O(n)

     */
 /*    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < k && a[i] > k)
            count2++;
    }
    cout << count2 << endl; */
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
