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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void pgsolve()
{
    int n;
    cin >> n;
    vi a(n);
    int i = 1;
    int j = n;
    if (n == 3)
    {
        cout << "1 2 3" << endl;
        return;
    }
    if (n % 2 == 0)
    {
        for (int k = 0; k < n; k++)
        {
            if (k % 2 == 0)
            {
                a[k] = i++;
            }
            else
            {
                a[k] = j--;
            }
        }
    }
    else
    {
        i = 1, j = n - 1;
        for (int k = 0; k < n-1; k++)
        {
            if (k % 2 == 0)
            {
                a[k] = i++;
            }
            else
            {
                a[k] = j--;

            }
        }
        a[n-1] = n;
    }
    for (auto x : a)
    {
        cout << x << " ";
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
