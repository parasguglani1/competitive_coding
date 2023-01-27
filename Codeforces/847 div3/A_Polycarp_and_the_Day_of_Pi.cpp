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

int pi[31];

void pgsolve()
{
    int count = 0;
    string str;
    cin >> str;
    int n = str.length();
    // rep(i, n)
    // {
    //     str[i] -= '0';
    // }
    for (int i = 0; i < n; i++)
    {
        if (str[i] - '0' == pi[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
}

int32_t main()

{

    // store 30 digits of pi in pi array in one line
    pi[0] = 3;
    pi[1] = 1;
    pi[2] = 4;
    pi[3] = 1;
    pi[4] = 5;
    pi[5] = 9;
    pi[6] = 2;
    pi[7] = 6;
    pi[8] = 5;
    pi[9] = 3;
    pi[10] = 5;
    pi[11] = 8;
    pi[12] = 9;
    pi[13] = 7;
    pi[14] = 9;
    pi[15] = 3;
    pi[16] = 2;
    pi[17] = 3;
    pi[18] = 8;
    pi[19] = 4;
    pi[20] = 6;
    pi[21] = 2;
    pi[22] = 6;
    pi[23] = 4;
    pi[24] = 3;
    pi[25] = 3;
    pi[26] = 8;
    pi[27] = 3;
    pi[28] = 2;
    pi[29] = 7;
    pi[30] = 9;
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
