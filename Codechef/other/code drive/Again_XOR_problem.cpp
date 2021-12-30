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
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int i, j, n, m, k; 
    cin >> n >> k; 
    string l; 
    cin >> l; 
    if (k == 1) 
    { 
        int c = l[0] - '0'; 
        rep(i, n - 1) 
        c = c ^ (l[i + 1] - '0'); 
        cout << c << endl; 
        return; 
    } 
    if (k == n) 
    { 
        cout << count(l.begin(), l.end(), '1') << endl; 
        return; 
    } 

    int pg = n - k + 1; 
    int t = count(l.begin(), l.begin() + pg, '1'); 
    int c = 0; 
    c = t % 2; 
    REP(i, pg, n) 
    { 
        if (l[i] == '1') 
            t++; 
        if (l[i - pg] == '1') 
            t--; 
        c = c + t % 2; 
    } 
    cout << c << endl; 
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
	freopen("Error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}