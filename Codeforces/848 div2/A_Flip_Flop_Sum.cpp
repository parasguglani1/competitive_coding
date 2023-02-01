// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pai 3.141592653589793238462643383279502884197169399375105820
#define pb emplace_back
#define fi first
#define se second
#define ls id << 1
#define rs id << 1 | 1
#define pc putchar
// #define fre freopen("x.in", "r", stdin), freopen("x.out", "w", stdout)
#define ios ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
void upmin(int &x, int y)
{
    x = x < y ? x : y;
}
void upmax(int &x, int y) { x = x > y ? x : y; }
typedef unsigned long long ull;
typedef pair<int, int> pii;
namespace IO
{
    inline int read()
    {
        int x = 0, f = 1;
        char ch = getchar();
        while (!isdigit(ch))
        {
            if (ch == '-')
                f = -1;
            ch = getchar();
        }
        while (isdigit(ch))
            x = (x << 3) + (x << 1) + ch - '0', ch = getchar();
        return x * f;
    }
    template <typename T>
    inline void print(T x)
    {
        if (x < 0)
            putchar('-'), x = -x;
        if (x > 9)
            print(x / 10);
        putchar(x % 10 + '0');
    }
}
using namespace IO;
const int N = 1e6 + 5, mod = 1e9 + 7, inf = 1e9;
int n, m, k, a[N], ans = 0;

void solve()
{
    n = read();
    ans = 0;
    for (int i = 1; i <= n; i++)
        a[i] = read(), ans += a[i];
    bool bl = 0, bl1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == -1)
            bl = 1;
        if (a[i] == -1 && a[i + 1] == -1)
        {

            // cout<<"here"<<a[i]<<" "<<i<<endl;
            bl1 = 1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }

    if (bl1)
    {
        cout << ans + 4 << endl;
    }
    else if (bl)
        cout << ans << endl;
    else
        cout << ans - 4 << endl;
}
signed main()
{
    int t = read();
    while (t--)
        solve();
    return 0;
}