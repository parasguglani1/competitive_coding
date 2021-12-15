#include "iostream"
    #include "string"
    #include <bits/stdc++.h>

using namespace std;
    #define int long long int
    #define IOS                       
    //   std::ios::sync_with_stdio(false); 
    //   cin.tie(NUint);                    
    //   cout.tie(NUint);                   
    //   cout.precision(dbl::max_digits10);
    #define ism0 int sum=0;
    #define ict0 int count=0;
    #define yes cout << "YES" << endl
    #define no cout << "NO" << endl
    #define pb push_back
    #define mod 1000000007int // 998244353int
    #define int long long int
    #define intd long double
    #define mii map<int, int>
    #define mci map<char, int>
    #define msi map<string, int>
    #define pii pair<int, int>
    #define vsort sort(v.begin(), v.end());
    #define vsortback sort(v.begin(), v.end(),greater<int>());
    #define ff first
    // #define f(i,0,n) for(int i=0 ;i<n; i++)
    #define ss second
    #define aint(x) (x).begin(), (x).end()
    #define fo(i, x, y) for (int i = x; i < y; i++)
    // #define fiint(a, b) memset(a, b, sizeof(a))
    #define vi vector<int>
    #define vb vector<bool>
    #define endl "\n"
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
    typedef std::numeric_limits<double> dbl;
    // using namespace std;

    const long long N = 1e7+2, INF = 2000000000000000000;
    intd pi = 3.1415926535897932;




int32_t main(){
 w(t)
    
{
int n;
cin >> n ;
    vi a , b;
    
    fo(i,0,n){
         int q ;
         cin >> q;
         if(i&1){
              b.pb(q);
         }else{
              a.pb(q);
         }
         
         
    }
    
    sort(b.begin(), b.end());
   
    sort(a.begin(), a.end(),greater<int>());
    fo(i,0,min(a.size() , b.size())){
         cout << a[i] << " " << b[i] << " ";
    }
    if(n&1)cout << a[n/2] ;

  
for(int i=b.size()-2 ; i>=0; i--){
    b[i] += b[i+1]; 
}

    int ans  = 0;
    fo(i,0,b.size()){
       ans += a[i]*b[i];  
    }
    
    cout << ans ;
}
return 0;
}

