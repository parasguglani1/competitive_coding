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
const int limit = 1000001;

int maxfact[limit];
map<int, int> sums;
map<int, vector<int>> factors;

#define limit (int)1e6 + 5

vector<int> pList;
bitset<limit + 6> isP;
vector<int> sieve(limit + 6, 1e9);
vi prefixSum;

void sieveGet()
{
    iota(all(sieve), 0);
    isP[0] = isP[1] = 0;
    for (int i = 2; i <= sqrt(limit) + 2; i++)
    {
        if (isP[i] == 1)
        {
            pList.push_back(i);
            for (int t = i * i; t <= limit; t += i)
            {
                isP[t] = 0;
                sieve[t] = min(i, sieve[t]);
            }
        }
    }
    int root = sqrt(limit);
    REP(i, root + 3, limit)
    {
        if (isP[i] == 1)
        {
            pList.pb(i);
        }
    }
}
void pgsolve()
{
    int n;
    cin >> n;

    int find = sieve[n];

    auto currit = upper_bound(all(pList), find);
    int curr = currit - pList.begin();
    curr--;
    int ans = prefixSum[curr];
    ans *= n;
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
    // bool visited[limit];
    // memset(visited, 1, limit);

    // for (int i = 1; i <= limit; i++)
    // {
    //     maxfact[i] = i;
    // }
    // visited[0] = visited[1] = 0;

    // for (int i = 4; i <= limit; i += 2)
    // {
    //     visited[i] = 0;
    //     maxfact[i] = i / 2;
    // }
    // for (int i = 3; i <= limit; i += 2)
    // {

    //     if (maxfact[i] != i)
    //     {
    //         maxfact[i] = i / maxfact[i];
    //     }

    //     if (visited[i] == 1)
    //     {
    //         for (int t = i * i; t < limit; t += i)
    //         {
    //             visited[t] = 0;
    //             if (maxfact[t] == t)
    //             {
    //                 maxfact[t] = i;
    //             }
    //         }
    //     }
    // }
    // for (int i = 1; i < limit; i++)
    // {
    //     if (i == maxfact[i])
    //     {
    //         maxfact[i] = 1;
    //     }
    // }

    // for (int i = 1; i < limit; i++)
    // {
    //     sums[maxfact[i]] += i;
    //     factors[maxfact[i]].push_back(i);
    // }
    isP.set();

    sieveGet();
    int sz = pList.size();
    prefixSum.assign(sz, 0);
    rep(i, sz)
    {
        prefixSum[i] = pList[i];
        if (i > 0)
        {
            prefixSum[i] += prefixSum[i - 1];
        }
    }
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
