#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n; 
        vector<ll> A(n); 
        for(ll i=0; i<n; i++) cin>>A[i];
        
        vector<ll> dp(n , 1e18);
        dp[0] = 0;
        
        for(ll i=1; i<n; i++)
        {
            for(ll j=0; j<i; j++)
            {
                ll d = (i - j + 1);
                ll val = dp[j] + (d * A[j]) - A[i];
                
                dp[i] = min(dp[i] , val);
            }
        }
    
        cout<<max(dp[n-1] , 0LL)<<endl;
    }
    
    return 0;
}