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
    int l,i,n;
    n = 0;
    char c;
    cin >> l;
    
    for(i = 0; i < l; ++i) {
        cin >> c;
        if(c == '1') n++;
    }
    int result = (n*(n+1))/2;
    cout << result << "\n";












   
}
    return 0;
}