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
void pgsolve()
{
    // cout << (int)pow(2, 32) << endl;
    int n;
    cin >> n;
    int a = n;
    if (n == 0)
    {
        cout << 1 << " " << 3 << " " << 4 << " " << 5 << endl;
        return;
    }
    bool powerof2 = false;
    if ((n & (n - 1)) == 0)
    {
        powerof2 = true;
    }
    // if (powerof2)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    int b = n;
    int c, d;
    int num[4] = {};
    num[0] = num[1] = num[2] = n;
    int ind = 0;
    // b is first next set bit
    // get b with same as a but having one set bit which a is not having
    b = a | (a + 1);

    // c is first set bit of a handle edge case of only one set bit i.e pow of 2
    // get c such that a |c=a
    c = a & (a - 1);

    d = ~a;
    if (d < 0)
    {
        // d *= -1;
    }
    // d is exact mask of a
    // get d such that a^d=a

    // cout << a << " " << b << " " << c << " " << d << endl;
    int op1 = a & b;
    int op2 = op1 | c;
    int op3 = op2 ^ d;
    // cout << op1 << " " << op2 << " " << op3 << endl;
    // cout << endl;
    // assert((((a & b) | c) ^ d) == n);

    rep(i, 60)
    {
        if (!(n & (1ll << i)))
        {
            if (ind == 2)
            {
                num[3] += (1ll << i);
            }
            num[ind] += (1ll << i);
            ind++;
            ind = ind % 3;
        }
    }
    // if ((((a & b) | c) ^ d) == n)
    // {
    //     yes
    // }
    // same in nums array
    op1 = num[0] & num[1];
    op2 = op1 | num[2];
    op3 = op2 ^ num[3];
    if (op3 == n)
    {
        // yes
    }
    if (num[0] == 0 || num[1] == 0 || num[2] == 0 || num[3] == 0)
        cout << -1 << endl;
    else
    {
        cout << num[0] << " " << num[1] << " " << num[2] << " " << num[3];
        cout << endl;
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
