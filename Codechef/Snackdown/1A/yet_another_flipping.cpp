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
     int n,k;

      cin>>n>>k;
    if(k==0)
    {
        cout<<"Yes"<<"\n";
        cout<<0<<"\n";
        return 0;
    }
    if(k%2==0)
    {
        cout<<"No"<<"\n"; 
        return 0 ;
    }
    int sz = 0;
   
    REPR(i,31,0)
    {
        if(((1<<i)&k)!=0)
        {
            sz=i+1;
            break;
        }
    }
    k=(k+(1<<sz)-1)/2;

    cout<<"Yes"<<"\n";
    cout<<sz<<"\n";
    int answer = 1;
    vector<int> a;
    REPR(i,sz-2,0)
   
    {
        if(((1<<i)&k)!=0)
        {
            a.push_back(answer);
            answer+=(1<<i);
        }
        else{
            answer-=(1<<i);
            a.push_back(answer); 
        }
    }
    REPR(i,sz-2,0)

    {
        cout<<a[i]<<"\n";
    }
    cout<<answer<<"\n";
        
    }
    return 0;
}