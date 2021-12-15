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
    w(t)
{
   
    int f=0;
    int n,i;
     string s;
        cin>>n>>s;
        for(int i=0;i<n && (f==1 || f==0);i++)
        {
            if(s[i]=='H')
            f=(f==0)?1:2;
            else if(s[i]=='T')
            f=(f==1)?0:2;
        }
        if(f!=0)
        cout<<"Invalid\n";
        else
        cout<<"Valid\n";
   
}
    return 0;
}