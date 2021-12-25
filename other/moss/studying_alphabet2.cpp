#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
 
void paras()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int32_t main()
{
    paras();

string s;
    cin>>s;
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int count=0;
        for(int i=0;i<a.length();i++){
            for(int j=0;j<s.length();j++){
                if(a.at(i)==s.at(j)){
                    count++;
                }
            }
        }
        if(count==a.length()){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    
    return 0;
}