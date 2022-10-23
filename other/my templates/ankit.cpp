#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long int
#define ld long double
#define F first
#define S second
#define pb push_back
#define vi vector<ll>
#define pii pair<ll, ll>
#define mii unordered_map<int, long long, custom_hash>
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define loopi(x, n) for (ll i = x; i < n; ++i)
#define loopj(x, n) for (ll j = x; j < n; ++j)
#define loopk(x, n) for (ll k = x; k < n; ++k)
#define rloop(x, n) for (ll r = x; r >= n; --r)
#define debug(x) cerr << #x << " " << x << endl;

struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void MAIN()
{
    ll n;
    cin >> n;

    vi vec(n);

    loopi(0, n) cin >> vec[i];
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int TC = 1;
    cin >> TC;
    while (TC-- > 0)
    {
        MAIN();
    }
    return 0;
}
