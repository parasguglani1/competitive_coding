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
          int n, q;
           cin >> n >> q;
        vi v1, v2;
        v1.pb(0);
        v2.pb(0);
       
        rep(i,n)
        {
            int x; cin >> x; v1.pb(x);
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x; v2.pb(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vi ans;
        REP(i,1,n)
        
        {
            int k = 10001 / i;
            int ind = min(k, n);
            int num = v1[i];
            for(int j = 1; j <= ind; j++)
                ans.pb(num + v2[j]);
        }
        sort(ans.begin(), ans.end());
        while(q--){
            int x; cin >> x;
            cout << ans[x-1] << endl;
        }

        
    }
    return 0;
}