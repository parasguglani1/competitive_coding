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
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    bool lowexist = false;
    bool highexist = false;

    REP(i, 1, n - 1)
    {
        if (a[i - 1] > a[i])
        {
            lowexist = true;
        }
        if (lowexist && a[i] < a[i + 1])
        {
            highexist = true;
        }
    }
    if (highexist)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    /*
    Let's define max([l,r]) the maximum integer over al,al+1,…,ar. Note that max([1,r]) and max([l,n]) can be precalculated through prefix max and suffix max array.

    Consider an indices triplet (i,j,k) of the array (1≤i<j<k≤n), and we want to make ai, aj and ak all equal to 0 in some operations. There are 2 cases:

    ai>aj and aj<ak: this cost ai+ak−aj operations.
    Other cases cost the same number of operations: max(ai,aj,ak).
    In the other hand:

    ai+ak−aj=max(ai,ak)+min(ai,ak)−aj=max(ai,aj,ak)+min(ai,ak)−aj
    min(ai,ak)−aj>0. Therefore max(ai,aj,ak)+min(ai,ak)−aj>max(ai,aj,ak)
    So as we can see, the first case requires max(ai,aj,ak)+min(ai,ak)−aj operations while the second case requires only max(ai,aj,ak) operations. So if the first case is satisfied for some triplet (i,j,k), then the answer is not optimal.

    As a result, we've found the construction of the optimal array. The answer is NO if there exists an index i (2≤i≤n−1) such that max([1,i−1])>ai and ai<max([i+1,n]). Otherwise, the answer is always YES.
    How to prove the correctness?
    By constructing a permutation p where the array a is sorted, we can prove that f(p)=p[n]. The operations can be done by finding the left most element pl such that pl≠0, then decrease all the elements pl,pl+1,…,pn by 1.

    This strategy costs exactly p[n]=max([1,n]) operations and it can obviously be showed that there is no other permutation of a which costs less operations than when it is sorted. As a result, because we have proved for every permutation p of a, f(p)≥max([1,n]), the answer is always YES if the condition ai>aj and aj<ak is not satisfied for all triplet (i,j,k) ( 1≤i<j<k≤n)

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n, a[N], pref[N], suff[N];

int main() {
    int tc; cin >> tc;
    while (tc--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        pref[1] = a[1];
        for (int i = 2; i <= n; i++)
            pref[i] = max(pref[i-1], a[i]);

        suff[n] = a[n];
        for (int i = n - 1; i >= 1; i--)
            suff[i] = max(suff[i+1], a[i]);

        bool ok = true;
        for (int i = 2; i <= n - 1; i++) {
            if (pref[i-1] > a[i] && a[i] < suff[i+1]) {
                ok = false;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}


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
