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
void pgsolve()
{
    int n;
    char c;
    cin >> n;
    cin >> c;
    bool first = false;

    string str;
    cin >> str;
    bool firstc = true;
    int ans = 0, cnt = 0;
    if (c == 'g')
    {
        cout << 0 << endl;
        // cout<<"g";
    }
    else
    {
        vi g, ch;
        int i = 0;
        while (!first || i != n)
        {
            if (i == n)
            {
                i = 0;
                first = true;
            }
            if (str[i] == c && firstc)
            {
                firstc = false;
                cnt = 0;
            }
            if (str[i] == 'g')
            {
                ans = max(ans, cnt);
                // cout << i << "a" << endl;
                firstc = true;
                cnt = -1;
            }
            if (cnt != -1)
                cnt++;
            i++;
        }
        string s2 = str + str;

        vector<int> ind;
        for (int i = 0; i < 2 * n; ++i)
            if (s2[i] == 'g')
            {
                ind.push_back(i);
            }
        int maxdis = INT_MIN;
        rep(i, n)
        {
            if (str[i] == c)
            {
                int diff = *upper_bound(ind.begin(), ind.end(), i);
                maxdis = max(maxdis, diff - i);
            }
        }
        cout << maxdis << "\n";

        // cout << ans << endl;
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
