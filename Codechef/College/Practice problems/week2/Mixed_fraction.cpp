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


}

int32_t main()

{
        paras();
    
    freopen("mixin.txt", "r", stdin);
    freopen("mixout.txt", "w", stdout);
        int N,D,max,pair;
        cin>>N>>D;
    int a=N/D;
    int b= N%D;


if(b==0){
cout<<a;
}
else{
cout<<a<<" "<<b<<"/"<<D;
}

    return 0;
}   