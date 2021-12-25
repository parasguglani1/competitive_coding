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

vector<pii> dish;


vector<pair<int, pii>> clan;

bool solve(int res)
{
    int i=0,j=0;
    while(i<dish.size() && j<clan.size()){
        if(dish[i].ff <= clan[j].ff){
            res -= dish[i].ss;
            i++;
            if(res < 0)return false;
        }
        else{
            if(clan[j].ss.ff <= res){
                res += clan[j].ss.ss;
            }
            j++;
        }
    }
    while(i < dish.size()){
        res -= dish[i].ss;
        i++;
        if(res < 0)return false;
    }
    return (res>=1);
}

int32_t main()

{
    paras();
    w(t)
    {
        
        int n;
        cin>>n;
        int b,c;
        cin>>b;
        dish.clear();
        clan.clear();
        int xi,yi,res=1;
       
        rep(i,b)
        {
            cin>>xi>>yi;
            dish.pb(mp(xi,yi));
            res += yi;
        }
        cin>>c;
        int pi,ri,qi;
         rep(i,c){
            cin>>pi>>qi>>ri;
            clan.pb(mp(pi,mp(qi,ri)));
        }
        sort(dish.begin(), dish.end());
        sort(clan.begin(), clan.end());
            
        int l=0,h=res,ans=res;
        while(l<=h){
            int mid = (l+h)/2;
            if(solve(mid)){
                ans = min(mid,ans);
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout<<ans<<"\n";

        
    }
    return 0;
}