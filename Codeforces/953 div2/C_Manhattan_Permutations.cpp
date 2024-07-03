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
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int getDiff(vector<int> &a)
{
    int n = a.size();
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        diff += abs(a[i] - i - 1);
    }
    return diff;
}
void pgsolve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    int original = k;
    int mxP = 0;
    for (int i = 1; i <= n; i++)
    {
        mxP += abs(i - (n - i + 1));
    }

    vector<int> res;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += abs(i - (n - i + 1));
        res.push_back(i);
    }

    if (k % 2 == 1 || sum < k)
    {
        no return;
    }
    yes;
    int idx = 0;
    int curr = n;
    while (k > (curr - 1) * 2)
    {
        swap(res[idx], res[n - idx - 1]);
        curr--;
        k -= curr * 2;
        idx++;
        curr--;
    }

    k /= 2;

    swap(res[idx], res[idx + k]);
    assert(original == getDiff(res));

    for (auto i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
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
