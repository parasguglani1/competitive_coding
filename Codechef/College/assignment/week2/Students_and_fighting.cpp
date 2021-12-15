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
        int num;
        cin >> num;
        int a[100001];
        rep(j, num)
        {
            cin >> a[j];
        }
        int max, secondMax;
        max = secondMax = INT_MIN;

        rep(i, num)
        {
            if (a[i] > max)
            {
                secondMax = max;
                max = a[i];
            }
            else if (a[i] > secondMax && a[i] <= max)
            {
                secondMax = a[i];
            }
        }
        if(max==secondMax){
              cout<<"fight:("<<endl;
              
        }
        else
        {
           cout<<"peace:)"<<endl;   
        }
   
    }
    return 0;
}