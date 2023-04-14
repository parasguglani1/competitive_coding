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
    int n, m;
    cin >> n >> m;
    cout << "? " << 1 << ' ' << 1 << endl;
    int dis1, dis2, dis3;
    cin >> dis1;
    if (dis1 == 0)
    {
        cout << "! " << 1 << ' ' << 1 << endl;
        return;
    }
    if ((dis1 + 1) > min(n, m))
    {
        if (n > m)
        {
            cout << "? " << dis1 + 1 << ' ' << 1 << endl;
            cin >> dis2;
            if (dis2 == 0)
            {
                cout << "! " << dis1 + 1 << ' ' << 1 << endl;
                return;
            }
            cout << "! " << dis1 + 1 << ' ' << dis2 + 1 << endl;
        }
        else
        {
            cout << "? " << 1 << ' ' << dis1 + 1 << endl;
            cin >> dis2;
            if (dis2 == 0)
            {
                cout << "! " << 1 << ' ' << dis1 + 1 << endl;
                return;
            }
            cout << "! " << dis2 + 1 << ' ' << dis1 + 1 << endl;
        }
        return;
    }
    cout << "? " << dis1 + 1 << ' ' << dis1 + 1 << endl;
    cin >> dis2;
    if (dis2 == 0)
    {
        cout << "! " << dis1 + 1 << ' ' << dis1 + 1 << endl;
        return;
    }
    int x = dis1 + 1 - dis2;
    int y = dis1 + 1;
    cout << "? " << x << ' ' << y << endl;
    cin >> dis3;

    if (dis3 == 0)
    {
        cout << "! " << x << ' ' << y << endl;
        return;
    }
    swap(x, y);
    cout << "! " << x << ' ' << y << endl;
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
