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
    w(t)
    {
        int x,y,sal_day=0,streak=0,max_count=0,streak_pay,sal_pay;
        cin>>x>>y;
string str;
    cin>>str;

rep(i,30)
{
    if(str[i]=='0')
    {
        streak=0;
    }
    else{
        streak++;
    }

    max_count=max(max_count,streak);

    if (str[i]=='1')
    {
        sal_day++;
    }

}

// cout<<max_count<<endl;
// cout<<sal_day<<endl;


streak_pay=max_count*y;
sal_pay=sal_day*x;


cout<<streak_pay+sal_pay<<"\n";

        
    }
    return 0;
}