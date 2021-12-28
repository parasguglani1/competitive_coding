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
void pgsolve()
{
    int n, q, size, value, arr_index, index;
    cin >> n >> q;
    vector<vi> nvec;
    rep(i,n) {
        cin >> size;
        vi ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.pb(value);
        }
        nvec.pb(ivec);
    }
    REP(k,0,q-1)
    {
        cin >> arr_index >> index;
        cout << nvec[arr_index][index] << endl;
    }
      
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


   
   
      pgsolve();
    
  
    return 0;
}