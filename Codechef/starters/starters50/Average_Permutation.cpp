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
void pgsolve()
{
    /*   We are given the following sum to compute
  \sum_{i = 1} ^ { N - 2 } \frac{P_i + P_{i + 1} + P_{i + 2}} { 3 }
      ∑i = 1N−2​3Pi​ + Pi + 1​ + Pi + 2​​ This can be simplified as :
  \frac{P_1 + 2 \times P_2 + 3 \times(P_3 + P_4.....P_{n - 2}) + 2 \times P_{n - 1} + P_n} { 3 }
      3P1​ + 2×P2​ + 3×(P3​ + P4​.....Pn−2​) + 2×Pn−1​ + Pn​​ Since P_1P1​ and P_nPn​ is not repeated and P_{n - 1} Pn−1​ and P_2P2​ is repeated twice so it makes sense to assign maximum values to P_1P1​ and P_nPn​, followed by the next largest values to P_{n - 1} Pn−1​ and P_2P2​.Rest of the values we can assign randomly since rest all of them are in multiples of 33. Thus we can have one of the possible permutations as follows : N, N - 2, 1, 2, 3.....N - 3, N - 1N, N−2, 1, 2, 3.....N−3, N−1
   */
    int num;
    cin >> num;
    if (num == 3)
    {
        cout << 1 << " " << 2 << " " << 3 << "\n";
        return;
    }
    cout << num << " " << num - 2 << " ";
    REP(i, 1, num - 3)
    {
        cout << i << " ";
    }
    cout << num - 3 << " " << num - 1 << "\n";
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
