#define MAX 10000
define ll long long
#include <bits/stdc++.h>
using namespace std;


bool v[MAX];
int len, sp[MAX];

void Sieve()
{
    for (int i = 2; i < MAX; i += 2)
        sp[i] = 2; // even numbers have smallest prime factor 2
    for (int i = 3; i < MAX; i += 2)
    {
        if (!v[i])
        {
            sp[i] = i;
            for (int j = i; (j * i) < MAX; j += 2)
            {
                if (!v[j * i])
                    v[j * i] = true, sp[j * i] = i;
            }
        }
    }
}
int factorize(int k)
{
    int ans = 0;
    while (k > 1)
    {
        ans += (sp[k]);
        k /= sp[k];
    }
    return ans;
}

int main()
{
    Sieve();
    int n;
    cin >> n;
    int ans = factorize(n);

    // while ans is not prime
    cout << sp[ans] << " " << ans << endl;

    while (sp[ans] != ans)
    {
        int ans2 = factorize(ans);
        if (ans2 == ans)
            break;
        else
            ans = ans2;

        // cout << sp[ans] << " " << ans << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << sp[i] << " ";
    // }

    cout << ans << endl;

    return 0;
}
