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
string m, s;
// map<pair<string, int>, bool> dp;
vector<pair<string, bool>> dp;
bool ispossible(string &str, int ind)
{
    if (str == m)
    {
        // dp[{str, ind}] = true;
        return true;
    }
    if (ind >= s.size())
    {
        return false;
    }
    if (dp.find({str, ind}) != dp.end())
    {
        // cout << str << ' ' << ind << endl;
        return dp[{str, ind}];
    }
    bool ans = false;
    string end = str + s[ind];
    string start = s[ind] + str;
    ans = ans || ispossible(end, ind + 1);
    ans = ans || ispossible(start, ind + 1);
    dp[{str, ind}] = ans;
    return ans;
}
void pgsolve()
{
    dp.clear();
    int n;
    cin >> n;
    string ss, mm;
    cin >> ss >> mm;
    m = mm;
    s = ss;
    string curr = "";
    dp.resize(n + 1);
    bool ans = ispossible(curr, 0);
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

    int t;
    cin >> t;
    int temp = t;
    while (t--)
    // w(t)
    {
        cout << "Case " << temp - t << ": ";
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
