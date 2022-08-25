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

    /*     The first thing to notice — the answer always exists. For n numbers 1⋅2⋅3…n=n! answer choices, as well as n! permutation combinations. It remains only to restore the answer from this permutation.

    We will restore by performing reverse operations. On the i-th (i=n, n−1, …, 2, 1) operation will be selectd the first i elements of the array and rotate them d[i] times to the left ( elements with numbers i+1 and more remain in their places).

    Where d[i] is equal to 0 if i=1, otherwise d[i]=(index+1)modi, and index – is the index of the number i.

    Thus, for each i from right to left, performing a left cyclic shift operation, we move the number i at index i.

    As a result, we move O(n) numbers n times. The time complexity O(n2). */

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int ans[n];
    for (int i = n; i > 0; --i)
    {
        int ind = 0;
        for (int j = 0; j < i; ++j)
        {
            ind = a[j] == i ? j : ind;
        }
        int b[i];
        for (int j = 0; j < i; ++j)
        {
            b[(i - 1 - ind + j) % i] = a[j];
        }
        for (int j = 0; j < i; ++j)
        {
            a[j] = b[j];
        }
        ans[i - 1] = i != 1 ? (ind + 1) % i : 0;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << ' ';
    }
    cout << '\n';
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
