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
    int n;
    cin >> n;
    string str1[n], str2[n], str3[n];
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> str1[i];
        m[str1[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> str2[i];
        m[str2[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> str3[i];
        m[str3[i]]++;
    }
    int player1 = 0, player2 = 0, player3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[str1[i]] == 1)
        {
            player1 += 3;
        }
        else if (m[str1[i]] == 2)
        {
            player1 += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (m[str2[i]] == 1)
        {
            player2 += 3;
        }
        else if (m[str2[i]] == 2)
        {
            player2 += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (m[str3[i]] == 1)
        {
            player3 += 3;
        }
        else if (m[str3[i]] == 2)
        {
            player3 += 1;
        }
    }
    cout << player1 << " " << player2 << " " << player3 << endl;

    //storing players in array
    /*
        map<string, int> mp;
    string a[3][n];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        int tot = 0;
        for (int j = 0; j < n; j++) {
            if (mp[a[i][j]] == 1) {tot += 3;}
            else if (mp[a[i][j]] == 2) {tot++;}
        }
        cout << tot << ' ';
    }
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
