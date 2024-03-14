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
    int n, m, x;
    cin >> n >> m >> x;
    set<int> st1, st2;
    st1.insert(x);
    for (int i = 0; i < m; i++)
    {
        int dis;
        char x;
        cin >> dis >> x;
        if (x == '1')
        {
            for (auto t : st1)
            {
                int prevDistance = t - dis;
                if (prevDistance <= 0)
                {
                    prevDistance += n;
                }

                st2.insert(prevDistance);
            }
        }
        else if (x == '0')
        {
            for (auto t : st1)
            {
                int nextDistance = t + dis;
                if (nextDistance > n)
                {
                    nextDistance -= n;
                }
                st2.insert(nextDistance);
            }
        }
        else
        {
            for (auto t : st1)
            {
                int prevDistance = t - dis;
                if (prevDistance <= 0)
                {
                    prevDistance += n;
                }
                int nextDistance = t + dis;
                if (nextDistance > n)
                {
                    nextDistance -= n;
                }
                st2.insert(nextDistance);
                st2.insert(prevDistance);
            }
        }
        st1 = st2;
        st2.clear();
    }
    cout << st1.size() << endl;

    for (auto x : st1)
    {
        cout << x << ' ';
    }
    cout<<endl;
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
