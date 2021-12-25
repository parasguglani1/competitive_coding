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
    int m,x,y,input,i;
     int a[101]={0};
   
	    cin>>m>>x>>y;
	    int distance=x*y;
	    while (m--)
	    {
	        cin>>input;
	    for (i=1;i<=distance;i++)
	    {
	        if((input-i)>=1)
	        a[input-i]++;
	        if((input-i)<=1)
	        break;
	    }
	    
	    for (i=1;i<=distance;i++)
	    {
	        if ((input+i)<=100)
	        a[input+i]++;
	        if ((input+i)>=100)
	        break;
	    }
	    a[input]++;
	    
	    }
	    int count=0;
	    for (i=1;i<=100;i++)
	    {
	        if (a[i]==0)
	        count++;
	    }
	    cout<<count<<endl;
   
}
    return 0;
}