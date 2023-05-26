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
    int tt = 0;
    cin >> tt;
    while (tt--)
    {
        int n, q;
        cin >> n >> q;
        int sm = 0, mode = -1, mxOcc = 0, mea;
        vi vis(1e5 + 1, 0);
        rep(i, n)
        {
            int tmp;
            cin >> tmp;
            sm += tmp;
            vis[tmp]++;
            if (vis[tmp] > mxOcc)
            {
                mode = tmp;
                mxOcc = vis[tmp];
            }
            else if (vis[tmp] == mxOcc)
            {
                mode = min(mode, tmp);
            }
        }
        mea = sm / n;
        while (q--)
        {
            int qt;
            cin >> qt;
            if (qt == 1)
            {
                int X;
                cin >> X;
                sm += X;
                n++;
                mea = sm / n;
                vis[X]++;
                if (vis[X] > mxOcc)
                {
                    mode = X;
                    mxOcc = vis[X];
                }
                else if (vis[X] == mxOcc)
                {
                    mode = min(mode, X);
                }
            }
            else if (qt == 2)
            {
                cout << mea << endl;
            }
            else if (qt == 3)
            {
                cout << mode << endl;
            }
        }
    }
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

    // w(t)
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
