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
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
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

int psubs(int x, int y)
{
    x %= mod, y %= mod;
    return (x - y + mod) % mod;
}
int pmul(int x, int y)
{
    x %= mod, y %= mod;
    return (x * 1ll * y) % mod;
}
int ppow(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
    {
        int _tmp = ppow(x, y / 2);
        return pmul(_tmp, _tmp);
    }
    else
        return pmul(x, ppow(x, y - 1));
}
int32_t main()

{
    paras();
    w(t)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << 2 << endl;
            continue;
        }
        int low = 0;
        int high = 40;
        int ans = high;
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (pow(2, mid) <= n)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        int p = ppow(2, ans);
       
        if (ppow(2, ans) == n)
        {
            int a = pmul(p, 2);
            int sub = psubs(a, 1);
            cout << sub << endl;
        }
        else
        {
            int a = pmul(2, p);
            cout << a << endl;
        }
    }
    return 0;
}