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
bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.ss < b.ss ;
}

int32_t main()

{
    paras();
    w(t)
    {
        int n,x,k=0;
        cin>>n;
    vector<pair<int,int>> rem;
        
        rep(i,n)
        {
          cin>>x;
	        rem.push_back({x,i});
        }

         sort(rem.begin(),rem.end());
	   
	       rep(i,n){
	        if(rem[i].ff>k){
	            rem[i].ff=k;
	            k=k+1;
	        }
	    }

            sort(rem.begin(),rem.end(),cmp);

        rep(i,n)
        {
	        cout<<rem[i].ff<<" ";
	    }
	    cout<<endl;
        

        
    }
    return 0;
}