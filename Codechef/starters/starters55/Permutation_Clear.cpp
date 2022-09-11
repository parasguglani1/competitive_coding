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
    vector<int> c;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    set<int> s;
    vector<int> a2(k);
    rep(i, k)
    {
        cin >> a2[i];
        s.insert(a2[i]);
    }
    rep(i, n)
    {
        if (s.find(a[i]) == s.end())
        {
            c.pb(a[i]);
        }
    }
    int ans = c.size();
    rep(i, ans)
    {
        cout << c[i] << " ";
    }

    cout << endl;

    /*
    This is an implementation problem more than anything else — it is enough to do exactly what is asked for.

Iterate across the values of AA. Say we are currently at A_iA
i
​
 , and we want to know whether to print it or not.
All that we really need to know is whether A_iA
i
​
  is one of the elements of BB, and to check this faster than \mathcal{O}(N)O(N) (since the constraints are such that \mathcal{O}(N^2)O(N
2
 ) algorithms will TLE).

This check can be done in \mathcal{O}(\log N)O(logN) or even \mathcal{O}(1)O(1), in several ways:

The easiest way is to use the set data structure present in most languages. Insert all the elements of BB into a set SS, then simply check if A_iA
i
​
  is in SS. This check is \mathcal{O}(\log N)O(logN) in C++ set and Java TreeSet, and \mathcal{O}(1)O(1) in python set and Java HashSet.
Alternately, we can use an array. Note that all the elements are from 11 to NN, so we can create an array markmark of length NN, such that mark_imark
i
​
  is 11 if ii is present in BB and 00 otherwise. Now, we only need to look at mark_{A_i}mark
A
i
​

​
  to decide if A_iA
i
​
  is in BB, which takes \mathcal{O}(1)O(1) time.
 */
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
