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
         int n;
            cin >> n;
            vector<long long>arr(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                  cin >> arr[i];

            }
            for (int i = 1; i <= n; i++) {
                  if (i % 2 == 0) {
                        arr[i] = -arr[i];
                  }
            }
            for (int i = 1; i <= n; i++) {
                  arr[i] = arr[i - 1] + arr[i];

            }
            if (n % 2 == 0) {
                  long long  v = -1e17;
                  for (int i = 1; i <= n; i++) {
                        if (i % 2 == 0) {
                              v = max(v,  2 * arr[i] - arr[n]);
                        }
                        else {
                              v = max(v, -arr[n] + 2 * arr[i - 1]);
                        }
                  }
                  cout << v << endl;

            }
            else {
                  long long  v = -1e17;
                  for (int i = 1; i <= n; i++) {
                        if (i % 2 == 1) {
                              v = max(v, -1 * (arr[n] - arr[i]) + arr[i]);
                        }
                        else {
                              v = max(v, -(arr[n] - arr[i - 1]) + arr[i - 1]);
                        }
                  }
                  cout << v << endl;
            }

        
    }
    return 0;
}