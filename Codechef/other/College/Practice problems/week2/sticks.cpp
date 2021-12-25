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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int32_t main()

{
    paras();
    w(t)
    {
        int N;
        cin>>N;
        int Length[100001];
        rep(i,N)
        {
            cin>>Length[i];
        }
        int a=1,k=0;
        sort(Length, Length+N);
	    for(int i=N-1;i>0;i--)
      
	    {
	        if(Length[i]==Length[i-1])
	        {
	            a=a*(Length[i]);
	            k++;
	            i--;
	        }
	        if(k==2)
	        break;
	    }
	    if(k==2)
	    cout<<a<<endl;
	    else
	    cout<<"-1"<<endl;

    }
    return 0;
}