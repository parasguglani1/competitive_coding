#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second
#define tests int test; cin >> test; while(test--)
#define fora(i, x, y) for (ll i = x; i < y; ++i)
#define ford(i, x, y) for (ll i = x; i >= y; --i)
#define all(lst) lst.begin(), lst.end()
#define rall(lst) lst.rbegin(), lst.rend()
#define _ceil(a, b) ((a + b - 1) / (b))
#define _sum(lst) accumulate(all(lst), 0ll)
#define cntval(lst, val) count(all(lst), val)
#define lcn(lst, val) (find(all(lst), val) - lst.begin())
#define ub(lst, val) (upper_bound(all(lst), val) - lst.begin())
#define lb(lst, val) (lower_bound(all(lst), val) - lst.begin())
#define sortlst(lst) sort(all(lst))
#define sorted(lst) is_sorted(all(lst))
#define rsortlst(lst) sort(rall(lst))
#define sortarr(x, n) sort(x, x + n)

#define ff first
#define ss second
#define int long long

#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define PI 3.1415926535897932384626
#define cntval(lst, val) count(all(lst), val)
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
        int n, cnt0;
        int cnt1, flage = 1;
        string str1; cin >> n >> str1;
        cnt0 = cntval(str1, '0'), cnt1 = cntval(str1, '1');
        if (min(cnt0, cnt1) == 0) flage = 0;
        if (min(cnt0, cnt1) >= 2) {
            int move = cnt0 + cnt1 - 2 * min(cnt0, cnt1);
            if (move % 2 == 0) flage = 0;
        }

      
if (flage==1)
{
    cout<<"Alice"<<endl;
}
else
{
    cout<<"Bob"<<endl;
}
    

    

        
    }
    return 0;
}