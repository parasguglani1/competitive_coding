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
    int m, s;
    cin >> m >> s;
    if (s == 0)
    {
        if(m==1)
        {
            cout<<"0 0"<<endl;
            return;
        }
        cout << "-1 -1" << endl;
        return;
    }
    if (m == 1)
    {
        if (s < 10)
        {
            cout << s << " " << s << endl;
            return;
        }
        else
        {
            cout << "-1 -1" << endl;
            return;
        }
    }
    if (s > m * 9)
    {
        cout << "-1 -1" << endl;
        return;
    }
    string mn(m, '0');
    int temp = s;
    s -= 1;
    int i = m - 1;
    mn[0]='1';
    while (s > 0)
    {
        int dig = min(s, 9ll);

        mn[i] += dig;
        s -= 9;
        i--;
    }
    string mx(m, '0');
    i = 0;
    while (temp > 0)
    {
        mx[i++] += min(9ll, temp);
        temp -= 9;
    }
    cout << mn << " " << mx << endl;
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

    // w(t)
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
