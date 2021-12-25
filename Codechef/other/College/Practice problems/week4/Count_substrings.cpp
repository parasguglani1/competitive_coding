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

const int MAXn = 1e5 + 10;
 int n, k, q, sum[MAXn], bound[MAXn], lsum[MAXn];

bool isgood( int l,  int r) {
     int a = sum[r + 1] - sum[l];
     int b = r - l - a + 1;
    return a <= k && b <= k;
}
int32_t main()

{
    paras();
    w(t)
    {
        cin >> n >> k >> q;
        
        rep(i, n){
            char c;
            cin >> c;
            sum[i + 1] = sum[i];
            if (c == '1') {
                sum[i + 1]++;
            }
        }
        
        rep(i, n){
             int left = i;
             int right = min(n + 1, 2 * k + i + 1);
            while (right - left > 1) {
                 int mid = (right + left) / 2;
                if (isgood(i, mid)) {
                    left = mid;
                } else right = mid;
            }
            bound[i] = left;
            lsum[i + 1] = lsum[i] + left - i + 1;

            //cout << lsum[i + 1] << ' ';
        }

        while (q--) {
             int l, r;
            cin >> l >> r; l--; r--;

             int left = l - 1;
             int right = r;
            while (right - left > 1) {
                 int mid = (right + left) / 2;
                if (bound[mid] < r) left = mid;
                else right = mid;
            }

            cout << (r - right + 1) + (r - right + 1) * (r - right) / 2 + (lsum[left + 1] - lsum[l]) << endl;
        }
    }
    return 0;
}