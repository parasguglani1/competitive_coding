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
         int n,q;
   cin>>n>>q;
   int a[n];
  rep(i,n) cin>>a[i];
  sort(a,a+n);
  int ps[n];
  ps[0]=a[0];
  REP(i,1,n-1) ps[i]=ps[i-1]+a[i];
  
  while(q--){
      int k ; cin>>k;
      int p=lower_bound(a,a+n,k)-a;
      int ans=n-p;
      int mid,nt=0;
      int lo=0,hi=p-1;
      while(lo<=hi){
          
          mid=(lo+hi)/2;
         int s=k*(p-mid)-(ps[p-1]-ps[mid-1]);
          if(s<=(mid)) nt =max((p-mid),nt),hi=mid-1;
          else lo=mid+1;
          
      }
      ans=ans+nt;
      cout<<ans<<"\n";
      
      
  }
        

        
    }
    return 0;
}