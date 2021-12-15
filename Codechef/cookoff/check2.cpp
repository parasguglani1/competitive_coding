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
        int n,n1,n2,sum1,j,k;
        cin>>n;
    if(n%2==0) n1=n/2;
    else n1= n/2 +1;
    n2 = n - n1;
    int zeros[n1], ones[n2];
    for(int i=0; i<n; i++){
        if(i%2==0){
            cin>>zeros[j];
            j++;
        }
        else{
            cin>>ones[k];
            sum1 += ones[k];
            k++;
        }
    }
    sort(zeros, zeros+n1);
    reverse(zeros, zeros+n1);
    sort(ones, ones+n2);
    j=0, k=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<zeros[j]<<" ";
            j++;
        }
        else{
            cout<<ones[k]<<" ";
            k++;
        }
    }
    cout<<"\n";
    int res = 0;
    j=0, k=0;
    for(int i=0; i<n; i+=2){
        res += zeros[j]*sum1;
        sum1 -= ones[k];
        j++;
        k++;
    }
        
    }
    return 0;
}