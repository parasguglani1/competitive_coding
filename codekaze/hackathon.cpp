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
   
    
        int apart,letter;
        cin>>apart>>letter;
        int arr[apart];
        int precom[apart+1]={0};
        precom[0]=0;
        for(int i=0 ; i<apart ;i++){
          cin>>arr[i];
          precom[i+1]=precom[i]+arr[i];
        }
        int ques[letter];
        for(int i=0 ; i<letter;i++){
          cin>>ques[i];
        }
        // for(auto it:precom){
        //   cout<<it<<" ";
        // }

          // for(int i=0 ;i<apart+1;i++)
          int i=1,index=0;
         
            for(int j=0 ; j<letter ; j++){
              while(1){
                if(ques[j]<=precom[i] && ques[j]>precom[i-1]){
                cout<<i<<" "<<ques[j]-precom[i-1];
                break;
              }
              else {
                i++;
              }
              // cout<<endl;
              }
              cout<<endl;
            
        

        
    }
    return 0;
}