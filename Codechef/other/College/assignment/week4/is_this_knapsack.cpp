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
    w(t)
    {
        int size_N, i, capacty_C, lower_bound_k;

        cin >> size_N >> capacty_C >> lower_bound_k;

        int array[size_N];

        
        rep(i,size_N)
            cin >> array[i];

        int count = 0, sum = 0, finalAns = 0, j;
        
        rep(i,size_N)
        {
            count = sum = 0;
            REP(j,i,size_N-1)
            {
                sum += array[j];
                    count++;
                if (sum > capacty_C)
                {
                    sum = sum - array[j];
                    count--;
                    break;
                }
            }
          
    
            if (sum < lower_bound_k)
            {
                count = 0;
            }

            finalAns = max(count, finalAns);
        }
        cout << finalAns << endl;

        
    }
    return 0;
}