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

         int N,A,B,p_ans;
        cin>>N>>A>>B;
        int div_by_2; 
        int odd=0, even=0; 
       
        for(int i=2;i*i<N+1;i++)
        { 
            while(N%i==0){ 
                N=N/i;
                 div_by_2=i%2;
                if(div_by_2) 
                    odd++; 
                else 
                    even++; 
            } 
        } 

        if(N>1)
        { 
            if(N%2) 
                odd++; 
            else 
                even++; 
        }  
        int ans=0; 
 
        if(A>=0 && B>=0){ 
            p_ans=A*even+B*odd;
            cout<<p_ans<<endl; 
            continue; 
        }else if(A>=0 && B<0){ 
            if(even!=0) 
                ans=A*even; 
            else if(odd!=0) 
                ans=B; 
        }else if(A<0 && B>=0){ 
            ans=B*odd; 
            if(even!=0) 
                ans+=A; 
        }else if(A<0 && B<0){ 
            if(even!=0) 
                ans+=A; 
            else if(odd!=0) 
                ans+=B; 
        } 
        cout<<ans<<endl; 
    }
    return 0;
}