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

bool isvowel(char c)
{
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
    {
        return true;
    }
    return false;
}

void pgsolve()
{
    int n;
    cin >> n;
    string s, p;
    cin >> s >> p;
    int ans = INT_MAX;
    rep(i,26)
    {
        int temp_cost = 0;
        char ch = i + 'a';
        rep(j,n)
        
        {
            char c1 = (s[j] == '?') ? ch : s[j];
            char c2 = (p[j] == '?') ? ch : p[j];
            if (c1 != c2)
            {   
                    if (isvowel(c1) && isvowel(c2))
                {
                    temp_cost += 2;
                }
                else if (isvowel(c1) == false && isvowel(c2) == false)
                {
                    temp_cost += 2;
                }
                else
                {
                    temp_cost++;
                }
            }
        }
        ans = min(ans, temp_cost);
    }
    cout << ans << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif

    w(t)
    {
        pgsolve();
    }

    return 0;
}