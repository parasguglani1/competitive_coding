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
    int i, j, n, m;
    cin >> n;
    int a[n];
    int positive=0,negative=0,zero=0;
    rep(i, n)
    {
        cin >> a[i];
        if(a[i]>0)
        {
            positive++;
        }
        else if(a[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }


// cout<<fixed<<setprecision(6)<<float(positive/n)<<endl;
// cout<<fixed<<setprecision(6)<<(float)negative/n<<endl;
// cout<<fixed<<setprecision(6)<<(float)zero/n<<endl;

cout<<ps((float)positive/n,6)<<endl;
cout<<ps((float)negative/n,6)<<endl;
cout<<ps((float)zero/n,6)<<endl;


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

  
        pgsolve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}