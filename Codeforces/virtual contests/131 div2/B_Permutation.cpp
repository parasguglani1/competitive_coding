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
    int d = 2;
    int arr[n + 1];
    bool checked[n + 1] = {false};
    int ele = 1;
    int i = 1;
    while (i <= n)
    {
        while (ele <= n)
        {
            if (!(checked[ele]))
            {
                arr[i++] = ele;
                checked[ele] = true;
                ele *= 2;
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (!checked[j])
            {
                ele = j;
                break;
            }
        }
    }
    cout << d << endl;
    /* REP(i, 1, n + 1)
    {
        cout << arr[i] << " ";
    }
    cout << endl; */
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 != 0)
        {
            for (int j = i; j <= n; j *= 2)
            {
                cout << j << ' ';
            }
        }
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
