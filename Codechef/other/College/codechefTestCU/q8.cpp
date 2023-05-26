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
#define pii pair<int, int>
#define vi vector<int>
void pgsolve()
{
    int n;
    string str;
    cin >> n >> str;

    string mosub = "";
    int momind = -1;
    string ss = "";
    int b = -1;
    int a = -1;

    for (int i = 0; i < n; i++)
    {
        int t = mosub.size();
        int x = ss.size();
        if (str[i] == 'm' && t == 0)
        {
            mosub += str[i];
            momind = i;
        }
        if (str[i] == 'o' && t == 1)
        {
            mosub = mosub + str[i];
        }
        if (str[i] == 'm' && t == 2)
        {
            mosub = mosub + str[i];
            a = momind;
            break;
        }
        if (str[i] == 'd' && x == 0)
        {
            ss = ss + str[i];
            b = i;
        }
        if (str[i] == 'a' && x == 1)
        {
            ss = ss + str[i];
        }
        if (str[i] == 'd' && x == 2)
        {
            ss = ss + str[i];
            a = b;
            break;
        }
    }
    if (a == -1)
    {
        cout << "Goo-Goo";
    }
    else if (str[a] == 'd')
    {
        cout << "Dad";
    }
    else if (str[a] == 'm')
    {
        cout << "Mom";
    }
    cout << endl;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
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
