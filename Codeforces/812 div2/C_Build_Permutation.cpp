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
int n;
int a[100005];
/* First, let's prove that the answer always exists. Let's call the smallest square number that is not smaller than k is h. Therefore h≤2⋅k, which means h−k≤k. Proof.

So we can fill pi=h−i for (h−k≤i≤k). Using this method we can recursively reduce k to h−k−1, then all the way down to −1.

We can prove that h−k≥0, as h≥k.

Time complexity: O(n)
 */
void recurse(int r)
{
    if (r < 0)
        return;
    int s = sqrt(2 * r);
    s *= s;
    int l = s - r;
    recurse(l - 1);
    for (; l <= r; l++, r--)
    {
        a[l] = r;
        a[r] = l;
    }
}

void pgsolve()
{
    cin >> n;
    recurse(n - 1);
    rep(i, n)
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
