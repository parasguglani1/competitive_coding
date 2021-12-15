#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

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
const ll MAX=1e6+10;
const ll sz=4e5;
ll BITree[MAX] = {0};
const ll mod=998244353;
ll summ(ll index)
{
 ll sum = 0;

 index = index + 1;

 while (index>0)
 {
  sum += BITree[index];
        sum%=mod;
  index -= index & (-index);
 }
 return sum%mod;
}

void updateBIT(ll n, ll index, ll val)
{
 index = index + 1;

 while (index <= n)
 {
 BITree[index] += val;
 BITree[index]%=mod;

 index += index & (-index);
 }
}

int32_t main()

{
    ll n;
    cin>>n;
    ll a[n];
    rep(i,n)
   
    {
        cin>>a[i];
    }
    rep(i,MAX)
        BITree[i]=0;
     rep(i,n)
    {
        updateBIT(sz,a[i],summ(a[i]-1)+1);
    }
    cout<<(summ(sz)+1)%mod<<endl;

        
    
    return 0;
}