#include <bits/stdc++.h>
#include <iostream>
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

        int n, opencount = 0, closecount = 0, pair;
      
        cin >> n;
          string str;
        cin >> str;
        rep(i, n)
        {
            if (str[i] == '(')
            {
                opencount++;
            }
            else
            {
                closecount++;
            }
        }
            pair = opencount < closecount ? opencount : closecount;
            cout << 2*pair << "\n";
        
    }
    return 0;
}
