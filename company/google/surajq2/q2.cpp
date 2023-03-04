#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        int prev = 0, ans = a[0];
        for (int i = 1; i < n; i++)
        {
            int temp = b[i];
            if (prev == 0)
                temp = b[i] + b[i - 1];
            if (a[i] > temp)
            {
                if (prev == 0)
                {
                    ans -= a[i - 1];
                    ans += temp;
                }
                else
                    ans += b[i];
                prev = 1;
            }
            else
            {
                prev = 0;
                ans += a[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
