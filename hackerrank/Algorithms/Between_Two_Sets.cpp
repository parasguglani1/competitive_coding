#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
// #define int long long
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
// 2 3
// 2 4
// 16 32 96
int lcm(int a, int b)
{
    return a * b / (__gcd(a, b));
}
void pgsolve()
{
    int i, j, n, m;
    cin >> n>>m;
    int LCM=1, GCD=0;
    rep(i,n)
    {
        int a;
        cin >> a;

    LCM=lcm(LCM,a);
     
    //    if(LCM>100)
    //    {
    //           cout<<0<<endl;
    //           return;
    //    }
    }
// cout<<"gcd of 6 and 20 "<<__gcd(45,55)<<endl;
// cout<<"lcm of 6 and 20 "<<lcm(65,250)<<endl;

    rep(i,m)
    {
        int a;
        cin >> a;
        GCD=__gcd(GCD,a);
    }

    // cout<<LCM<<" " <<GCD;

    if(GCD%LCM!=0)
    {
        cout<<0<<endl;
        return;
    }

       GCD /= LCM;
    int count = 0;
    for (int i = 1; i * i <= GCD; ++i) {
        if (GCD % i == 0) {
            ++count;
            if (i * i != GCD)
                ++count;
        }
    }
    cout << count << '\n';

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