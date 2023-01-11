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
    string str;
    cin >> str;
    int n = str.size();
    if (str[0] == str[n - 1])
    {
        cout << str[0] << " ";

        REP(i, 1, n - 1)
        {
            cout << str[i];
        }
        cout << " ";
        cout << str[n - 1];
        cout << endl;
        return;
    }
    rep(i, n)
    {
        REPR(j, n - 1, i + 1)
        {
            string str3 = str.substr(j, n - j);
            string str2 = str.substr(i + 1, j - i - 1);
            string str1 = str.substr(0, i + 1);
            if ((str2 <= str1 && str2 <= str3) || (str1 <= str2 && str3 <= str2))
            {
                cout << str1 << " ";
                cout << str2 << " ";
                cout << str3 << endl;
                return;
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
