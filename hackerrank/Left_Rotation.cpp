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
    // int rightrotateby;
    // int i, j, n, leftrotateby ;
    // cin >> n >> leftrotateby;
    // vi a(n);
    // rep(i, n)
    // {
    //     cin >> a[i];
    // }
    // vi b(n);
    // rep(i, n)
    // // {
    // //     b[(i + rightrotateby) % n] = a[i];
    // // }
    
    // rep(i, n)
    // {
    //     b[i] = a[(i + leftrotateby) % n];
	
    // }
	
    // rep(i, n)
    // {
    //     cout << b[i] << " ";
    // }

    int n;
    int rotate_by;
    int ele;
    cin>>n>>rotate_by;
    vector<int>v1;
    rep(i,n)
    {
        cin>>ele;
        v1.pb(ele);
    }

    for(int i=0;i<rotate_by;++i){
        int temp=v1.at(0);
        v1.pb(temp);
        v1.erase(v1.begin());
    } 
    rep(i,n){
        std::cout<<v1.at(i)<<" ";
    }



}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif

  
        pgsolve();
   
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cout << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}