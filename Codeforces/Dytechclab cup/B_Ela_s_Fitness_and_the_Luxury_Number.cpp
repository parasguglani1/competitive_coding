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
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
ll bs_sqrt(ll x)
{
    ll left = 0, right = 2000000123;
    while (right > left)
    {
        ll mid = (left + right) / 2;

        if (mid * mid > x)
            right = mid;
        else
            left = mid + 1;
    }
    return left - 1;
}
void pgsolve()
{
    int l, r;
    cin >> l >> r;
    int sql = bs_sqrt(l);
    int sqr = bs_sqrt(r);
    int count = 0;
    if (sql * sql == l && sqr * sqr == r)
    {
        cout << (sqr - sql) * 3 + 1 << endl;
    }
    else if (sql * sql == l)
    {
        count = (sqr - sql) * 3 + 1;
        // for (int i = sqr * sqr + 1; i <= r; i++)
        // {
        //   if (i % sqr == 0)
        //   {
        //     count++;
        //   }
        // }
        for (int i = sqr + 1; i <= sqr + 2; i++)
        {
            if (i * sqr <= r)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    else if (sqr * sqr == r)
    {
        count = (sqr - (sql + 1)) * 3 + 1;
        // for (int i = l; i < (sql + 1) * (sql + 1); i++)
        // {
        //   if (i % sql == 0)
        //   {
        //     count++;
        //   }
        // }

        for (int i = sql; i <= sql + 2; i++)
        {
            if (i * sql >= l)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    else
    {
        count = (sqr - (sql + 1)) * 3 + 1;
        // for (int i = sqr * sqr + 1; i <= r; i++)
        // {
        //   if (i % sqr == 0)
        //   {
        //     count++;
        //   }
        // }
        // for (int i = l; i < (sql + 1) * (sql + 1); i++)
        // {
        //   if (i % sql == 0)
        //   {
        //     count++;
        //   }
        // }
        for (int i = sqr + 1; i <= sqr + 2; i++)
        {
            if (i * sqr <= r)
            {
                count++;
            }
        }
        for (int i = sql; i <= sql + 2; i++)
        {
            if (i * sql >= l)
            {
                count++;
            }
        }

        cout << count << endl;
    }
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
	freopen("Error.txt", "w", stderr);
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
