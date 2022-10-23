#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

unsigned int facto(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * facto(n - 1);
}

int main()
{

    ll t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> fact;

        for (auto it : a)
        {
            ll num = facto(it);
            fact.push_back(num);
        }
        ll sum = accumulate(fact.begin(), fact.end(), 0LL);
        ll div = facto(x);

        if (sum % div == 0)
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
        // TODO: Solve the problem
    }
    return 0;
}
