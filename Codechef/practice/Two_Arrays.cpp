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
#define pii pair<int, int>
#define vi vector<int>
int lcm(int a, int b)
{
    return a * b / (__gcd(a, b));
}
void pgsolve()
{
    
    int i, j, n, m;
    cin>>n ;
    vi a(n);
    rep(i, n)
    {
        cin>>a[i];
    }
    cin>>m;
    vi b(m);
    rep(i, m)
    {
        cin>>b[i];
    }
    int d1= a[1]-a[0];
    int d2= b[1]-a[0];
    int lcm1= lcm(d1, d2);
    int ans1= (a[n-1]-a[0])/lcm1;
    int ans2= (b[m-1]-b[0])/lcm1;

    cout<<min(ans1, ans2)+1<<endl;

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