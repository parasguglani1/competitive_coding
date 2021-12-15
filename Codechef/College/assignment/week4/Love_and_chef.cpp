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
bool check_work(vi &v, int k, int max_Work)
{
    int previous_Work = 0;
    rep(i,v.size())
   
    {
        if (previous_Work > k || previous_Work > max_Work)
            return false;
        int rem = max_Work - previous_Work;
        previous_Work = max(v[i] - rem, 0ll);
    }
    return (previous_Work == 0);
}

pii minimum_maximum(vi &v)
{
    pii result = mp(LONG_MAX, LONG_MIN);
    for (auto el : v)
    {
        result.ff = min(result.ff, el);
        result.ss = max(result.ss, el);
    }
    return result;
}


int32_t main()

{
    paras();
    w(t)
    {
        int n, k;
    cin >> n >> k;
    vi v(n);
    for (auto &i : v)
        cin >> i;

    pii range = minimum_maximum(v);

    int l = range.ff, r = range.ss;
    int ans = r;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check_work(v, k, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    

        
    }
    return 0;
}