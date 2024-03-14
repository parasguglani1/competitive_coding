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
int getcnt(string s, string sub)
{
    int cnt = 0;
    // cout << s << ' ' << sub << endl;
    // cout << s.length() << ' ' << sub.length() << endl;
    // cout << s.length() - sub.length() << endl;
    int diff = s.size();
    diff -= sub.size();
    for (int i = 0; i <= diff; i++)
    {
        if (s.substr(i, sub.length()) == sub)
        {
            cnt++;
        }
    }
    return cnt;
}
void pgsolve()
{
    int n;
    string s;
    cin >> n >> s;
    int mp = 0, pie = 0, mapie = 0;
    // count number of times "pie" occur in the string
    mp = getcnt(s, "map");
     pie = getcnt(s, "pie");
    mapie = getcnt(s, "mapie");
    cout << mp + pie - mapie << endl;
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
