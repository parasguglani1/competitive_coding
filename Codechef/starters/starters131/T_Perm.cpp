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

bool isGood(int n)
{
    int cur = n;
    while (cur > 0)
    {
        int rem = cur % 3;
        if (rem == 2)
        {
            return true;
        }
        cur /= 3;
    }
    return false;
}
void pgsolve()
{
    int n;
    cin >> n;
    vector<int> ans;

    vector<int> ones, twos, zeros;
    int z = 0, o = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        int x = i + 1;
        if (x % 3 == 0)
        {
            zeros.push_back(x);
        }
        else if (x % 3 == 1)
        {
            ones.push_back(x);
        }
        else
        {
            twos.push_back(x);
        }
    }

    if (n % 3 == 0)
    {
        for (int i = 1; i <= n; i += 3)
        {
            ans.push_back(i);
            ans.push_back(i + 2);
            ans.push_back(i + 1);
        }
    }
    else if (n % 3 == 1)
    {
        for (int i = 1; i <= n - 4; i += 3)
        {
            ans.push_back(i);
            ans.push_back(i + 2);
            ans.push_back(i + 1);
        }
        ans.push_back(n);
        ans.push_back(n - 1);
        ans.push_back(n - 2);
        ans.push_back(n - 3);
    }
    else
    {
        ans.push_back(4);
        ans.push_back(5);
        ans.push_back(2);
        ans.push_back(1);
        ans.push_back(3);
        for (int i = 6; i <= n; i += 3)
        {
            ans.push_back(i + 2);
            ans.push_back(i + 1);
            ans.push_back(i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (!isGood(ans[i] + i + 1))
        {
            cout << ans[i] << endl;
            return;
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
