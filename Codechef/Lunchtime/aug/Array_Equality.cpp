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
    int n;
    cin >> n;
    vi a(n);
    /*
    Let the maximum frequency of an element in AA be MM. Then, the answer is “Yes” if and only if M \leq \left\lceil \frac{N}{2}\right\rceilM≤⌈
2
N
​
 ⌉, i.e, 2\cdot M \leq N+12⋅M≤N+1.

 Proof
This gives us a simple solution:

Count the frequency of every element of AA using some method (map in C++, dict/collections.Counter in python, sorting, etc)
The answer is “Yes” if the maximum frequency is \leq \left\lceil \frac{N}{2}\right\rceil≤⌈
2
N
​
 ⌉ and “No” otherwise.
To be safe and not have to deal with floating-point issues, check the condition 2\cdot M \leq N+12⋅M≤N+1 instead of computing \left\lceil \frac{N}{2}\right\rceil⌈
2
N
​
 ⌉.
 */
    unordered_map<int, int> m;
    rep(i, n)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    rep(i, n)
    {
        if (m[a[i]] > (n+1) / 2)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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
