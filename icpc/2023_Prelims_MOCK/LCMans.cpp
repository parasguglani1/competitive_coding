#include <bits/stdc++.h>
using namespace std;

const int MIN = 1e5;
const int MAX = 2e5 + 9;

long long ans;
int n, a[MAX], cnt[MAX];

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i],
            cnt[a[i]]++;

    for (int i = 1; i <= MIN; i++)
    {
        long long now = cnt[i];
        ans += now * (now - 1) / 2;

        for (int j = 1; j * j <= i; j++)
        {
            if (i % j)
                continue;

            if (j < i)
                ans += now * cnt[j];
            if (i / j < i && i / j != j)
                ans += now * cnt[i / j];
        }
    }

    cout << ans;
    // 1 2 5 9
    //6

    //5
    return 0;
}
