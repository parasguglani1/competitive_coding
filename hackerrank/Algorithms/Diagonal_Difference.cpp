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
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int i, j, n, m, d1=0, d2=0, ans=0;
    cin>>n;
    int a[n+1][n+1];
    REP(i, 1, n)
    {
        REP(j, 1, n)
        {
            cin>>a[i][j];
        }
    }
    REP(i,1,n)
    {
        d1=d1+a[i][i];
    }


    REP(i, 1, n)
    {
        REP(j, 1, n)
        {
            if ((i+j)==(n+1))
            {
                d2=d2+a[i][j];
            }
           
        }
    }
    ans=abs(d1-d2);
    cout<<ans<<endl;




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

    // w(t)
    // {
        pgsolve();
    // }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}