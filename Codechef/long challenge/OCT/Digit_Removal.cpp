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
        int N, D,remainder , add_num =0, digit_count = 0;
	    cin>>N>>D;
        

        int Dividend = N; 
      while(Dividend>0){
        remainder = Dividend % 10;
        Dividend /= 10;
        // Dividend = Dividend /10;
        digit_count++;
        if(remainder == D){
            int current_power_of_10,previous_power_of_10;
            
            current_power_of_10= pow(10,digit_count);
            previous_power_of_10= pow(10,digit_count-1);
            Dividend = Dividend*current_power_of_10+(remainder+1)*previous_power_of_10;

            add_num = Dividend -N;
            digit_count = 0;
        }
    }
    cout<<add_num<<"\n";

    }
    return 0;
}