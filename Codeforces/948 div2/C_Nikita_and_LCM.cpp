#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define read(a)       \
    for (auto &i : a) \
    cin >> i
// #define mod 998244353
#define mod 1000000007
//todo
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    // sieve();
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n, 0);
        read(a);
        int ans = 0;
        sort(a.begin(), a.end());
        map<int, int> m;
        for (auto it : a)
        {
            m[it]++;
        }
        vector<int> v;
        for (auto it : m)
        {
            v.push_back(it.first);
        }

        for (int i = v.size() - 1; i >= 0; i--)
        {
            int cur = v[i];
            int len = m[cur];
            int f = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                int lc = cur * v[j];
                lc = lc / __gcd(cur, v[j]);

                if (lc > v.back())
                {
                    f = 1;
                    len = n;
                    break;
                }
                if (m[lc] > 0 and lc != cur)
                {
                    continue;
                }
                len = len + m[v[j]];
                cur = lc;
                if (m.find(cur) == m.end())
                {
                    ans = max(ans, len);
                }
            }
            if (f)
            {
                ans = n;
                break;
            }
            // cout<<i<<" "<<len<<endl;
            if (len == 1)
            {
                continue;
            }
            if (m[cur] > 0)
            {
                continue;
            }
            ans = max(ans, len);
            if (ans == n)
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
