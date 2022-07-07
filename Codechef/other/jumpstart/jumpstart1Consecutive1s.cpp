    #include <bits/stdc++.h>
    using namespace std;
    const int mod = 1e9 + 7;
    using ll = long long;
    int main()
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        a[0] = b[0] = 1;
        for (ll i = 1; i < n; i++)
        {
            a[i] = a[i - 1] % mod + b[i - 1] % mod;
            b[i] = a[i - 1] % mod;
        }
        ll c = a[n - 1] + b[n - 1];
        cout << c % mod;
        return 0;
    }