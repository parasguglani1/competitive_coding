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
 
    string str,s1,a2;
        cin>>str;
        int a,b,s,n,i;
        s=str.length();
        if(s%2==0)
        {
             n= s/2;
            sort(str.begin(),str.begin() + n);
            s1= str.substr(0,n);
            sort(str.begin() + n,str.end());
            a2= str.substr(n,s);
        }
        else 
        {
            a= ((s+1)/2)-1;
            b= (s/2)+1;
            sort(str.begin(),str.begin()+a);
            s1= str.substr(0,a);
            sort(str.begin()+b,str.end());
            a2= str.substr(b,s);
        }
        bool c= true;

        for(i=0;i<s;i++)
        {
            if(s1.compare(a2)!=0)
            {
                c=false;
                break;
            }
        }
        if(c!=true)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
}
    return 0;
}