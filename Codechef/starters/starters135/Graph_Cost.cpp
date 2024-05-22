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
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n;
    cin >> n;
    vi v(n);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    stack<int> lengths, indexes;

    for (int i = 0; i < n; ++i)
    {
        while (lengths.size() > 1 && lengths.top() > v[i])
        {
            int v1 = lengths.top();
            lengths.pop();
            if (v1 > lengths.top() || v1 == lengths.top())
            {
                indexes.pop();
            }
            else
            {
                lengths.push(v1);
                break;
            }
        }
        indexes.push(i);
        lengths.push(v[i]);
    }

    int lst = lengths.top();
    int j = indexes.top();
    lengths.pop();
    indexes.pop();

    while (lengths.size() > 0)
    {
        int cur = lengths.top();
        int diff = j - indexes.top();
        int curans = max(lst, cur);
        curans *= diff;
        ans += curans;
        lst = lengths.top();
        j = indexes.top();
        lengths.pop();
        indexes.pop();
    }
    cout << ans << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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
