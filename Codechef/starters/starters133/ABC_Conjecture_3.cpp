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
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void pgsolve()
{
    int n;
    cin >> n;
    map<char, int> freq;
    string str;
    cin >> str;
    n += 2;
    str = 'b' + str + 'b';
    vector<int> bIndexes;
    vector<int> acnt(n, 0), ccnt(n, 0);
    int ac = 0, cc = 0;
    for (int i = 0; i < n; i++)
    {
        freq[str[i]]++;
        if (str[i] == 'b')
        {
            bIndexes.push_back(i);
        }
        //TODO
    }
    // bIndexes.push_back(n);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a')
        {
            ac++;
        }
        acnt[i] = ac;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == 'c')
        {
            cc++;
        }
        ccnt[i] = cc;
    }
    int ans = 0;

    for (int i = 0; i < bIndexes.size() - 1; i++)
    {
        int before = acnt[bIndexes[i]];
        int after = ccnt[bIndexes[i + 1]];
        ans += min(before, after);
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
