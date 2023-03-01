#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

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
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
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

void pgsolve()
{

    int l, r;
    cin >> l >> r;
    if (l == r)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    int mxlength = 0;
    int temp = l;
    unordered_set<int> checked;

    while (temp <= r)
    {
        // left shift the number by 1
        temp <<= 1;
        mxlength++;
    }
    int sets = 0;
    temp = l;
    for (int i = l; i <= r ; i++)
    {
        if (checked.find(i) == checked.end())
        {
            temp = i;
            int count = 0;
            while (temp <= r)
            {
                checked.insert(temp);
                // left shift the number by 1
                temp <<= 1;
                {
                    count++;
                }
            }
            if (count == mxlength)
            {
                sets++;
                // cout << temp << endl;
            }
            temp = i * 3;
            count = 1;
            while (temp <= r)
            {
                checked.insert(temp);
                // left shift the number by 1
                temp <<= 1;
                // if (checked.find(temp) != checked.end())
                {
                    count++;
                }
            }
            if (count == mxlength)
            {
                sets += mxlength - 1;
            }
        }
    }

    cout << mxlength << " " << sets << endl;
    // cout << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

    w(t)
    {
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
