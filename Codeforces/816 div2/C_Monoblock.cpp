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
    Let us introduce another definition for the beauty  — beauty of the array a is a number of such positions (indexes) i<n, that ai≠ai+1, plus 1. Let's call "joints" places where two adjacent different numbers exist in the array.

    Now consider the problem from the angle of these joints: if f(joint) is equal to the number of segments, that overlap this joint, then the sum of beauty over all subsegments is equal to the sum of f(joint) over all joints. To get a clearer understanding, consider the following example: [1,7,7,9,9,9]=[1]+[7,7]+[9,9,9] ("+" is basically a joint). There are 5 segments, which contain first joint ([1:2],[1:3],[1:4],[1:5],[1:6]), and there are 9 such for the second joint ([1:4],[1:5],[1,6],[2:4],[2:5],[2:6],[3:4],[3:5],[3:6]), 14 in total. After adding the number of subsegments, we get the answer: 6⋅72=21,21+14=35.

    From this the solution is derived, apart from change requests: iterate over the array, find "joints", comparing adjacent numbers, if ai is different from ai+1, that we must add i⋅(n−i) to the answer, that is how many possible beginnings of subsegments from the left multiplied by the number of possible ends from the right.

    How we should apply changes? In fact, it's worth just checking if there are any neighboring joints for the position of the changing number, subtracting the number of subsegments, that overlap these joints, and then doing similar operations after setting a new value for the number.

    For a better understanding and more details, we suggest you look over the authors' solutions.


     */

    int n, m;
    cin >> n >> m;
    vector<int> a(n + 2, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ans += (a[i] != a[i + 1]) * (n - (i + 1) + 1) * i;
    }
    while (m--)
    {
        int i, x;
        cin >> i >> x;
        ans -= (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans -= (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        a[i] = x;
        ans += (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans += (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        cout << ans + n * (n + 1) / 2 << '\n';
    }
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

    pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
