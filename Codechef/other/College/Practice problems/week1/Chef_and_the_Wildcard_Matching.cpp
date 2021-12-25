#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
 
void paras()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
        string str1,str2;
     
        cin >>str1>>str2;
           int flag = 0;
        for(int i = 0; i < str1.size(); i++){
            if(str1[i] == '?' || str2[i] == '?'){
                continue;
            }
            if(str1[i] != str2[i]){
                cout << "No\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "Yes\n";
        }
   
}
    return 0;
}