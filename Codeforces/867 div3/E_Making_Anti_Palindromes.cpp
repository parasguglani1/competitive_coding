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
    cin >> n;
    string s;
    cin >> s;
    if (n % 2)
    {
        cout << -1 << endl;
        return;
    }

    map<char, int> mp;
    rep(i, n)
    {
        mp[s[i]]++;
    }
    int mx = 0;
    for (auto x : mp)
    {
        // mx = max(mx, x.ss);
        if (x.ss > n / 2)
        {
            cout << -1 << endl;
            return;
        }
    }

    vi count(26, 0);
    int cnt = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            count[s[i] - 'a']++;
            cnt++;

        }
    }
    int sum = 0;
    for (int x : count)
    {
        mx = max(mx, x);
        sum += x;
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            cnt++;
        }
    }

    int ans = (sum + 1) / 2;
    if (2 * mx > sum)
    {
        cout << mx << endl;
    }
    else
    {
        cout << ans << endl;
    }

    // cout << (cnt + 1) / 2 << endl;
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
