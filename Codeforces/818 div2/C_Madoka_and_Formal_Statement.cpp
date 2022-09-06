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

    /*
    Firstly, we obviously require ai≤bi to hold for all i. With that out of our way, let's consider non-trivial cases. Also let an+1=a1,bn+1=b1 cyclically.

For each i, we require that either ai=bi or bi≤bi+1+1 holds. That's because if we increment ai at least once, we had ai=bi−1 and ai+1≤bi+1 before the last increment of ai, and from here it's just a matter of simple algebraic transformations.

Now let's prove these two conditions are enough. Let i be the index of the minimal element of a such that ai<bi (i.e. the smallest element that's not ready yet). Notice that in this case we can, in fact, assign ai:=ai+1, because ai≤bi≤bi+1+1 holds, and now we're one step closer to the required array. It's easy to continue this proof by induction.


     */
    int n;
    cin >> n;
    vi vb(n);
    vi va(n);
    rep(i, n)
    {
        cin >> va[i];
    }
    rep(i, n)
    {
        cin >> vb[i];
    }

    if (va == vb)
    {
        cout << "YES" << endl;
        return;
    }

    rep(i, n)
    {
        int diff = (vb[i] - vb[(i + 1) % n]);
        if (vb[i] < va[i])
        {
            cout << "NO" << endl;
            return;
        }
        else if (vb[i] - va[i] > 0 && diff > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
