#include <bits/stdc++.h> 
using namespace std; 
 
#define ll long long 
#define vi vector<int> 
#define vll vector<ll> 
#define pll pair<ll, ll> 
#define pii pair<int, int> 
#define ld long double 
#define ff first 
#define ss second 
#define vs vector<string> 
#define vpll vector<pll> 
#define vb vector<bool> 
#define mp make_pair 
#define pb push_back 
#define endl '\n' 
 
const ll INF = 2e18; 
const ll mod = 1000000007; 
const ll mod2 = 998244353; 
 
 
 
 
signed main(){ 
 
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif 
 
 
 
    int tc = 0, tt = 1; 
    cin >> tt; 
    while (tc++ < tt) 
    { 
 
        int n,a,b; cin>>n>>a>>b; 
        int od=0, ev=0; 
        int ans=0; 
        for(int i=2;i*i<=n;i++){ 
            while(n%i==0){ 
                n/=i; 
                if(i%2) 
                    od++; 
                else 
                    ev++; 
            } 
        } 
        if(n>1){ 
            if(n%2) 
                od++; 
            else 
                ev++; 
        } 
 
        if(a>=0 && b>=0){ 
            cout<<a*ev+b*od<<endl; 
            continue; 
        }else if(a>=0 && b<0){ 
            if(ev) 
                ans=a*ev; 
            else if(od) 
                ans=b; 
        }else if(a<0 && b>=0){ 
            ans=b*od; 
            if(ev) 
                ans+=a; 
        }else if(a<0 && b<0){ 
            if(ev) 
                ans+=a; 
            else if(od) 
                ans+=b; 
        } 
        cout<<ans<<endl; 
 
 
 
 
 
    } 
 
    return 0; 
}