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
    string str;
    cin >> str;
    int n = sz(str);
    // cout<<n<<endl;
    int zeroindex = -1;
    int oneindex = -1;
    int qindex = -1;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        if (str[0] == '0')
        {
            cout << 1 << endl;
            return;
        }
        else if (str[0] == '1' && str[1] == '1')
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }

    else
    {

        if (str[0] == '0' || str[n - 1] == '1')
        {
            cout << 1 << endl;
            return;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '1' && str[i + 1] == '0')
            {
                cout << 2 << endl;
                return;
            }
            if (str[i] == '0' && zeroindex == -1)
            {
                zeroindex = i;
            }
            if (str[i] == '1')
            {
                oneindex = i;
            }
        }
        if (zeroindex == -1 && oneindex == -1)
        {
            cout << n << endl;
            return;
        }
        else if (zeroindex == -1)
        {
            cout << n - oneindex << endl;
            return;
        }
        else if (oneindex == -1)
        {
            cout << zeroindex + 1 << endl;
            return;
        }
        else
        {

            cout << zeroindex + 1 - oneindex << endl;

            // cout<<n-max(zeroindex,oneindex)<<endl;
            return;
        }

        //one test case left found 2 expected 1
    }

   /*  int ans = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            ans++;
        }
        if (s[i] == '0')
        {
            ans++;
            break;
        }
        if (s[i] == '1')
        {
            ans = 1;
        }
    }
    cout << ans << endl; */
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
