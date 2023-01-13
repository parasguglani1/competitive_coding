#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define ss second
#define int unsigned long long
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
    int n, x;
    cin >> n >> x;
    if (x > n)
    {
        cout << -1 << endl;
        return;
    }
    if (x == n)
    {
        cout << x << endl;
        return;
    }
    // most significant bit that is unequal in x and n
    int tempx = x, tempn = n;
    int odd1 = 0, odd2 = 0;
    int i = 0;
    int location = 0;
    do
    {
        odd1 = tempx & 1;
        odd2 = tempn & 1;
        // cout<<"odds ";
        // cout<<odd1<<" "<<odd2<<endl;
        // cout << tempn << " " << tempx << endl;

        if (odd1 && odd2)
        {
            // cout << tempn << " " << tempx << endl;
        }
        else if (odd1 || odd2)
        {
            // cout << "here" << endl;
            location = i;
            // cout << tempn << " " << tempx << endl;
        }
        i++;
        tempx >>= 1;
        tempn >>= 1;

    } while (i < 32);
    // cout << location << endl;
    int add = pow(2, location);
    // cout<<add<<endl;
    // int add = 1;
    // add <<= location-1;
    int ans = n + add;
    //   if (ans <= n)
    {
        // cout << ans << endl;
    }
    //   else
    //   {
    //       cout << -1 << endl;
    //   }
    // todo
    int ans2 = pow(2, 59) + pow(2, 60);
    cout << ans2 << endl;
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
