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
#define pf pop_front

#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define mpii map<int, pair<int, int>>

void pgsolve()
{

  /*   Note that after the strongest athlete is at the beginning of the queue, only he will win. The strongest athlete will be at the beginning of the queue no more than after the n-th round. Let's simulate the first n rounds, if the j-th athlete won in the i-th round, then we will write down the i number for him. Now, to answer the query (i,k), it is enough to find the number of wins of the i athlete in rounds with numbers j≤k, and if k>n, and the strength of the i athlete is equal to n, then add to the answer another k−n.

The complexity of the solution is O(n+qlog(n)) */
    int n, q;
    cin >> n >> q;

    deque<int> dq(n);
    mii freqval;
    rep(i, n)
    {
        cin >> dq[i];
        freqval[dq[i]] = i + 1;
    }

    mpii mp;
    for (int curround = 1;; curround++)
    {
        int firstele = dq.front();
        dq.pf();
        int secondele = dq.front();
        dq.pf();

        if (secondele == n || firstele == n || 0)
        {
            mp[freqval[n]] = {curround, INT_MAX};
            break;
        }
        if (mp.find(freqval[max(firstele, secondele)]) == mp.end())
        {
            mp[freqval[max(firstele, secondele)]] = {curround, curround};
        }
        else
        {
            mp[freqval[max(firstele, secondele)]].second = curround;
        }
        dq.pb(min(firstele, secondele));
        dq.push_front(max(firstele, secondele));
    }

    rep(p, q)
    {
        int i, k;
        cin >> i >> k;

        if (mp.find(i) == mp.end())
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            auto [left, right] = mp[i];
            if (left <= k)
            {
                int ans = min(k, right) - left + 1;
                cout << ans << endl;
                continue;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
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
