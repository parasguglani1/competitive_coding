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
    
    
        int P,Q,N,M,S=0,rem,ff,ss;
        cin>>P>>Q>>N>>M;

     ff = P;   

    //  cout<<ff<<endl;
     S=ff;
    for (int k = 1; k < N; ++k)
    
    {
       
        //  ff= pow(P,k)* pow((k+1)/k,Q);

         ss=ff*P*pow((float)(k+1)/k,Q);

         ff=ss;


        S= S+ss;
        
}
         rem= S%M;
        //  cout<<S<<endl;
  
        cout<<rem;
    
    return 0;
}