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
#define REP2(i, k, n) for (int i = k; i <= n; i += 2)

#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define sz(v) (int)v.size()
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{

/* Note that from the number k we only need the remainder modulo 4, so we take k modulo and assume that 0≤k≤3.

If k=0, then there is no answer, because the product of the numbers in each pair must be divisible by 4=22, that is, the product of all numbers from 1 to n must be divisible by 2n2⋅2=2n, but the degree of occurrence of 2 in this sum is ⌊n2⌋+⌊n4⌋, which is less than n.

If k=1 or k=3, then we will make all pairs of the form (i,i+1), where i is odd. Then a+k will be even in each pair, since a and k are odd, and since b is also even, the product will be divisible by 4. Если k=2, then we will do the same splitting into pairs, but in all pairs where i+1 is not divisible by 4, we will swap the numbers (that is, we will make a=i+1 and b=i). Then in pairs where i+1mod4=0, b is divisible by 4 (therefore the product too), and in the rest a+k is divisible by 4 (since a and k have a remainder 2 modulo 4).

The complexity of the solution is O(n).

 */
    int n, k;
    cin >> n >> k;
    if (k % 2 == 1)
    {
        cout << "YES" << endl;
        REP2(i, 1, n)
        {
            cout << i << ' ' << i + 1 << endl;
        }
    }
    else
    {
        REP2(i, 2, n)
        {
            if (i % 4)
            {
                if ((i + k) % 4)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;
        REP2(i, 1, n)
        {
            if (!((i + 1) % 4))
            {
                cout << i << ' ' << i + 1 << endl;
            }
            else
            {
                cout << i + 1 << ' ' << i << endl;
            }
        }
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
