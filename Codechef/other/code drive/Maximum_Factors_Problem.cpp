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
#define REP(i, k, n) for (int i = k; i <= n; i+=2)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mapii map<int, int>
void pgsolve()
{
    ll i, j, n, m; 
    cin >> n; 
    mapii mp;
    while (n % 2 == 0) 
    { 
        mp[2]++; 
        n /= 2; 
    } 
    REP(i,3,sqrt(n))
   
    { 
        while (n % i == 0) 
        { 
            mp[i]++; 
            n /= i; 
        } 
    } 
    if (n > 2) 
        mp[n]++; 
    ll maxi = 0, maxic = 0; 
    for (auto x : mp) 
    { 
        if (maxic == x.ss) 
        { 
            maxi = min(maxi, x.ff); 
            continue; 
        } 
        if (x.ss > maxic) 
        { 
            maxi = x.ff; 
            maxic = x.ss; 
        } 
    } 
    cout << maxi << endl; 
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