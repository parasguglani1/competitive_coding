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
    int a[4];
    rep(i, 4)
    {
        cin >> a[i];
    }
    int alice = 0, bob = 0;
    alice += a[0];
    bob += a[0];
    int jokes = 0;
    jokes += a[0];

    if (a[0] == 0)
    {
        cout << 1 << endl;
        return;
    }
    int score = a[0];
    int ans1 = a[0] + a[1] + a[2] + a[3];
    int ans2 = 2 * min(a[1], a[2]) + 2 * a[0] + 1;
    if (score >= a[3] + a[2] + a[1] - min(a[1], a[2]) * 2)
        cout << ans1 << endl;
    else
        cout << ans2 << endl;
    /*     int diff = abs(a[1] - a[2]);

        if (diff <= a[0])
        {
            jokes += a[1];
            jokes += a[2];
            alice += a[1];
            bob += a[2];
            alice -= a[2];
            bob -= a[1];
            jokes += min(a[3], min(alice, bob) + 1);
            cout << jokes << endl;
        }
        else
        {
            int mn = min(a[1], a[2]);
            jokes += (min(mn * 2, a[0]));
        }
        cout << jokes << endl;
     */
    /*     if (a[1] < a[2])
        {
            // a1 done
            alice += a[1];
            bob -= a[1];
            // if (bob < 0)
            // {
            //     // cout<<"bob<0";
            //     cout << jokes + bob + a[1] << endl;
            //     return;
            // }
            jokes += a[1];

            // a2 done
            bob += a[2];
            alice -= a[2];
            // if (alice < 0)
            // {
            //     cout << jokes + alice + a[2] << endl;
            //     return;
            // }
            jokes += a[2];

            // a3 done
        }
        else
        {
            bob += a[2];
            jokes += a[2];
            alice -= a[2];

            // if (alice < 0)
            // {
            //     cout << jokes + alice + a[2] << endl;
            //     return;
            // }
            jokes += a[2];

            alice += a[1];
            bob -= a[1];
            // if (bob < 0)
            // {
            //     cout << jokes + bob + a[1] << endl;
            //     return;
            // }
            jokes += a[1];
        }
        int mn = min(bob, alice); */
    // jokes += min(mn + 1, a[3]);
    // cout << jokes << endl;
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
