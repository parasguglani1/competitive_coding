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
    // 0 0
    //  0 1 add to b
    //  1 0 add to a
    //  1 1 decide
    //  -1 -1 decide
    // 1 -1
    int n;
    cin >> n;
    int pluscount = 0, minuscount = 0, addaSubb = 0, addbSuba = 0;
    int ascore = 0, bscore = 0;
    vector<pair<int, int>> v(n);
    rep(i, n)
    {
        cin >> v[i].ff;
    }
    rep(i, n)
    {
        cin >> v[i].ss;
    }

    rep(i, n)
    {
        if (v[i].ff == v[i].ss)
        {
            int a = v[i].ff;
            int b = v[i].ss;
            if (a == 1 && b == 1)
            {
                pluscount++;
            }
            else if (a == -1 && b == -1)
            {
                minuscount++;
            }
        }
        else if (v[i].ff > v[i].ss)
        {
            ascore += v[i].ff;
        }
        else
        {
            bscore += v[i].ss;
        }
    }
    minuscount*=-1;
    if (ascore > bscore)
    {
        swap(ascore, bscore);
    }
    int steps = pluscount;
    int x = min(bscore - ascore, steps);
    ascore += x;
    steps -= x;
    x = steps / 2;
    steps = steps - x;
    ascore += max(x, steps);
    bscore += min(x, steps);
    if (ascore > bscore)
    {
        swap(ascore, bscore);
    }

    steps = minuscount;
    x = max(ascore - bscore, steps);
    bscore += x;
    steps -= x;
    x = steps / 2;
    steps = steps - x;
    ascore += max(x, steps);
    bscore += min(x, steps);

    cout << min(ascore, bscore) << endl;
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
