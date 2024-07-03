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

int getvalue(vector<int> a)
{
    int n = a.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * pow(2, i);
    }
    return ans;
}
void pgsolve()
{
    int x;
    cin >> x;
    vector<int> a;
    int n = 0;
    vector<int> ans;
    int temp = x;

    while (temp > 0)
    {
        if (temp % 2 == 0)
        {
            temp /= 2;
            ans.push_back(0);
        }
        else
        {
            if (temp % 4 == 1)
            {
                temp = (temp - 1) / 2;
                ans.push_back(1);
            }
            else
            {
                temp = (temp + 1) / 2;
                ans.push_back(-1);
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    int value = getvalue(ans);
    assert(value == x);
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
