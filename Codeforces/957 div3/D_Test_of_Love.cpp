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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> isVis(n + 2, 0);
    queue<pair<int, int>> qu;
    isVis[0] = true;

    string str;
    cin >> str;
    qu.push({0, 0});

    while (!qu.empty())
    {
        auto &x = qu.front();
        int idx = x.first;
        qu.pop();
        int swim = x.second;

        if (idx == 0 || str[idx - 1] == 'L')
        {
            for (int k = 1; k <= m; ++k)
            {
                int landed = idx;
                if (idx + k == n + 1)
                {
                    yes;
                    return;
                }
                landed += k;
                if (landed <= n)
                {
                    bool isNotCroc = str[landed - 1] != 'C';
                    if (isNotCroc && !isVis[landed])
                    {
                        isVis[landed] = true;
                        qu.push({landed, swim});
                    }
                }
            }
        }

        if (idx > 0 && idx <= n && swim < k &&str[idx - 1] == 'W' )
        {
            int landed = idx;
            if (idx == n)
            {
                yes;
                return;
            }
            landed++;
            if (idx + 1 <= n)
            {
                bool isNotCroc = str[landed - 1] != 'C';
                if (isNotCroc && !isVis[landed])
                {
                    isVis[landed] = true;
                    qu.push({landed, swim + 1});
                }
            }
        }
    }
    no
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
