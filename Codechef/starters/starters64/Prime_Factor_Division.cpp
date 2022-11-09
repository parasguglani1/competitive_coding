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
#include <bits/stdc++.h>
using namespace std;

void pgsolve()
{
    int a, b;
    cin >> a >> b;
    int gcd = __gcd(a, b);
    if (gcd == 1)
    {
        no
    }
    else
    {
        yes
    }
    // int c = 2;
    // unordered_set<int> st;
    // while (b % 2 == 0)
    // {
    //     st.insert(2);
    //     b = b / 2;
    // }

    // // n must be odd at this point. So we can skip
    // // one element (Note i = i +2)
    // for (int i = 3; i <= sqrt(b); i = i + 2)
    // {
    //     // While i divides n, print i and divide n
    //     while (b % i == 0)
    //     {
    //         st.insert(i);
    //         b = b / i;
    //     }
    // }

    // // This condition is to handle the case when n
    // // is a prime number greater than 2
    // if (b > 2)
    //     st.insert(b);
    // for (auto i : st)
    // {
    //     if (a % i)
    //     {
    //         no return;
    //     }
    // }
    // yes
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
