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
  int n,w,l;
bool check( int month,  int h[],  int r[])
{
    
     int sum=0;
    rep(i,n){
        if(h[i]+((month) * r[i])>=l && sum<w)  sum+=h[i]+((month) * r[i]);
    }
    
    if(sum >= w) return true;
    else return false;
}

int32_t main()

{
    paras();
  
    cin >> n >> w >> l;
  int h[n],r[n];
  rep(i,n)
 {
      cin>> h[i] >> r[i];
  }
  
 int lo=0, hi=1e18;
 int ans = 0;
  while(lo <= hi){
     int mid = lo + (hi-lo)/2;
      if(check(mid, h, r)){
          ans = mid;
          hi = mid -1;
      }
      else lo = mid+1;
  }
  
  cout << ans << endl;
    return 0;
}


