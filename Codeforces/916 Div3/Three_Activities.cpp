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
int getMaxIndNotequal(vector<int> &a, int n, int ind1 = -1, int ind2 = -1)
{
    int mx = -1;
    int maxind = -1;
    for (int i = 0; i < n; i++)
    {
        if (i != ind1 && i != ind2)
        {
            if (a[i] > mx)
            {
                maxind = i;
                mx = a[i];
            }
        }
    }
    return maxind;
}
void pgsolve()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    for (int k = 0; k < n; k++)
    {
        cin >> c[k];
    }
    // pick maxfroma
    int maxindfroma = getMaxIndNotequal(a, n);
    int maxindfromb = getMaxIndNotequal(b, n, maxindfroma);
    int maxindfromc = getMaxIndNotequal(c, n, maxindfroma, maxindfromb);

    int possibleans = a[maxindfroma] + b[maxindfromb] + c[maxindfromc];
    // cout << possibleans << endl;
    ans = max(ans, possibleans);
    // pick secondmaxfromc
    maxindfromc = getMaxIndNotequal(c, n, maxindfroma);
    maxindfromb = getMaxIndNotequal(b, n, maxindfroma, maxindfromc);

    possibleans = a[maxindfroma] + b[maxindfromb] + c[maxindfromc];

    ans = max(ans, possibleans);

    // pick maxfromb
    maxindfromb = getMaxIndNotequal(b, n);
    maxindfroma = getMaxIndNotequal(a, n, maxindfromb);
    maxindfromc = getMaxIndNotequal(c, n, maxindfroma, maxindfromb);

    possibleans = a[maxindfroma] + b[maxindfromb] + c[maxindfromc];

    ans = max(ans, possibleans);

    // pick secondmaxfromc
    maxindfromc = getMaxIndNotequal(c, n, maxindfromb);
    maxindfroma = getMaxIndNotequal(a, n, maxindfromb, maxindfromc);

    possibleans = a[maxindfroma] + b[maxindfromb] + c[maxindfromc];
    // cout << possibleans << endl;

    ans = max(ans, possibleans);

    // pick maxfromc
    maxindfromc = getMaxIndNotequal(c, n);
    maxindfroma = getMaxIndNotequal(a, n, maxindfromc);
    maxindfromb = getMaxIndNotequal(b, n, maxindfroma, maxindfromc);

    possibleans = a[maxindfroma] + b[maxindfromb] + c[maxindfromc];
    ans = max(ans, possibleans);

    // pick secondmaxfromb
    maxindfromb = getMaxIndNotequal(b, n, maxindfromc);
    maxindfroma = getMaxIndNotequal(a, n, maxindfromb, maxindfromc);

    possibleans = a[maxindfroma] + b[maxindfromb] + c[maxindfromc];

    ans = max(ans, possibleans);

    cout << ans << endl;
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
