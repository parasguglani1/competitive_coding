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
void pgsolve()
{
    int n;
    int q;
    cin >> n >> q;
    int arr[64][n];
    rep(i, n)
    {
        int x;
        cin >> x;
        rep(j, 64)
        {
            arr[j][i] = x % 2;
            x /= 2;
        }
    }
    int count = 0;
    rep(i, 64)
    {
        count = 0;
        rep(j, n)
        {
            count += arr[i][j];
            arr[i][j] = count;
        }
    }

    while (q--)
    {
        int l1, r1, l2, r2, k;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        r2--;
        l1--;
        l2--;
        r1--;
        int tso, tfo;
        int ts = r2 - l2 + 1;
        int tf = r1 - l1 + 1;
        if (l2 == 0)
        {
            tso = arr[k][r2];
        }
        else
        {
            tso = arr[k][r2] - arr[k][l2 - 1];
        }
        if (l1 == 0)
        {
            tfo = arr[k][r1];
        }
        else
        {
            tfo = arr[k][r1] - arr[k][l1 - 1];
        }

        int totalsz = ts - tso;
        int totalfz = tf - tfo;
        int ans = totalfz * tso + tfo * totalsz;
        cout << ans << endl;
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
