#include <bits/stdc++.h>
using namespace std;

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
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif
}

int32_t main()

{
    paras();
    w(t)
    {
    int n, k;
    cin>>n>>k;  
    vi v;  
  
    rep(i,n)
    {  
        int x; 
        cin>>x;  
        if(i == 0) v.pb(x);  
        else if(x != v.back()) v.pb(x);  
    }  
    
    n = v.size();  
  
    int totalUgliness = 0;  
    rep(i,n-1)
    {  
        if(v[i] != v[i + 1]) totalUgliness++;  
    }  
      
    vi ans(k + 1, totalUgliness);  
    rep(i,n)
    {  
        if(i + 1 < n){  
            ans[v[i]]--;  
        }  
        if(i - 1 >= 0){  
            ans[v[i]]--;  
        }  
        if(i - 1 >= 0 && i + 1 < n && v[i + 1] != v[i - 1]) ans[v[i]]++;  
    }  
  
  REP(i,1,k)
    
    cout<<ans[i]<<" ";  
    cout<<"\n";  

        
    }
    return 0;
}