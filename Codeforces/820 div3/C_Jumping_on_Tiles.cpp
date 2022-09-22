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
    int n = str.length();
    char first = str[0];
    char last = str[n - 1];
    int steps = 0, cost = 0;
    if (last < first)
    {
        swap(last, first);
    }
    string temp = str;
    sort(temp.begin(), temp.end());
    // cout << temp << endl;
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= first && str[i] <= last)
        {

            steps++;
        }
    }
    // cout << steps << endl;

    map<char, vector<int>> mpp;
    int step2 = 0;
    REP(i, 1, n - 1)
    mpp[str[i]].pb(i + 1);
    if (str[0] < str[n - 1])
    {
        first = str[0];
        last = str[n - 1];
        for (char i = first; i <= last; ++i)
        {
            int nn=mpp[i].size();
            step2 += nn;
        }
        int cost = last - first;
        step2 += 2;
        cout << cost << " " << step2 << endl;
        cout << 1 << " ";

        for (char i = first; i <= last; ++i)
            for (int jump : mpp[i])
                cout << jump << " ";
        cout << n << endl;
    }
    else
    {
        last = str[n - 1];
        first = str[0];
        for (char i = first; i >= last; --i)
        {
            int nn = mpp[i].size();
            step2 += nn;
        }
        step2 += 2;
        cout << first - last << " " << step2 << endl;
        cout << 1 << " ";
        for (char i = first; i >= last; --i)
            for (int jump : mpp[i])
                cout << jump << " ";
        cout << n << endl;
    }
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
