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
    /*  int n;
     cin >> n;
     vi a(n);
     rep(i, n)
     {
         a[i] = i + 1;
     }
     if (n % 2)
     {
         for (int i = 1; i < n - 2; i += 2)
         {
             swap(a[i], a[i + 1]);
         }
     }
     else
     {
         for (int i = 0; i < n - 2; i += 2)
         {
             swap(a[i], a[i + 1]);
         }
     }
     for (int i = 0; i < n; i++)
     {
         cout << a[i] << " ";
     }

     cout << endl; */

    int n;
    cin >> n;
    if (n == 4)
    {
        cout << "2 1 3 4" << endl;
        return;
    }
    for (int i = 0; i < n - 5; i++)
        cout << i + 4 << " ";
    cout << "2 3 1 " << n - 1 << " " << n << endl;

/*

    vector<int> p(n);
    iota(p.begin(), p.end(), 1); //sets with one increment
    for (int i = n & 1; i < n - 2; i += 2) swap(p[i], p[i + 1]);
    for (int &x : p) cout << x << ' ';
    cout << '\n';

       */
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
