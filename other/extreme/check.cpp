#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define int long long
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
#define REPR(i, k, n) for (int i = k; i >= n; --i)
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\Codechef\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\Codechef\\output.txt", "w", stdout);
#endif
}

int32_t main()

{
    paras();
    w(t)
    {
        int n;
        cin >> n ;
    vector<int> a , b;
    
    REP(i,0,n){
         int q ;
         cin >> q;
         if(i&1){
              b.push_back(q);
         }else{
              a.push_back(q);
         }
         
         
    }
    
    sort(all(b));
    sort(all(a) , greater<int>());
    REP(i,0,min(size(a) , size(b))){
         cout << a[i] << " " << b[i] << " ";
    }
    if(n&1)cout << a[n/2] ;
    cout << endl;
    REPR(i,size(b)-2,0){
        b[i] += b[i+1]; 
    }
    int ans  = 0;
    REP(i,0,size(b)){
       ans += a[i]*b[i];  
    }
    
    cout << ans << endl;
     
        
    }
    return 0;
}