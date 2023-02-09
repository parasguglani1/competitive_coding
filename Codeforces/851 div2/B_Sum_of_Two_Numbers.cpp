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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
int digitsum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
void pgsolve()
{
    int n;
    cin >> n;
    if (n & 1 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else
    {
        int x = n / 2;
        int y = n - x;
        int tempx = x;
        int tempy = y;

        // digit sum of x
        int sumx = 0;
        while (tempx > 0)
        {
            sumx += tempx % 10;
            tempx /= 10;
        }
        // digit sum of y
        int sumy = 0;
        while (tempy > 0)
        {
            sumy += tempy % 10;
            tempy /= 10;
        }

        /*    while (abs(sumx - sumy) > 1)
           {
               if (sumx < sumy)
               {
                   y--;
                   x++;
               }
               else
               {
                   x--;
                   y++;
               }
               sumx = digitsum(x);
               sumy = digitsum(y);
           }
           cout << x << " " << y << endl; */
        x = 0, y = 0;
        int mul = 1, carry = 0;
        int dig = 0;
        while (n)
        {
            dig = n % 10;
            n /= 10;
            int t2 = dig / 2;
            int t1 = (dig + 1) / 2;
            if (t1 != t2)
            {
                if (carry)
                {
                    carry = 0;
                    swap(t1, t2);
                }
                else
                {
                    carry = 1;
                }
            }
            y += t2 * mul;
            x += t1 * mul;

            mul *= 10;
        }
        cout << x << " " << y << endl;
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
