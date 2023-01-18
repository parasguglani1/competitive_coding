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
    int n;
    cin >> n;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    int count1 = 0, count2 = 0, count3 = 0, ans = 0;
    rep(i, n)
    {
        if (a[i] % 4 == 2)
        {
            count2++;
        }
        else if (a[i] % 4 == 1)
        {
            count1++;
        }
        else if (a[i] % 4 == 3)
        {
            count3++;
        }
    }
    int pairs = min(count1, count3);

    count1 -= pairs;
    count3 -= pairs;
    ans += pairs;
    ans += count2 / 2;
    count2 = count2 % 2;

    if (count3 == 0)
    {
        ans += (count1 / 4) * 3;
        count1 = count1 % 4;
        if (count1 == 1 || count1 == 3)
        {
            cout << -1 << endl;
            return;
        }
        if (count1 == 2 && count2)
        {
            count2--;
            count1 -= 2;
            ans += 2;
        }
    }
    else
    {
        ans += (count3 / 4) * 3;
        count3 = count3 % 4;
        if (count3 == 1 || count3 == 3)
        {
            cout << -1 << endl;
            return;
        }
        if (count3 == 2 && count2)
        {
            count2--;
            count3 -= 2;
            ans += 2;
        }
    }
    if (count1 || count2 || count3)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
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
