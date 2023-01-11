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
void pgsolve()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        map<int, int> mp;
        bool flag = false;
        vector<vector<int>> vv;
        rep(i, n)
        {
            int size1 = mp.size();
            int m;
            cin >> m;
            vector<int> temp;
            rep(j, m)
            {
                int a;
                cin >> a;
                mp[a]++;
                temp.push_back(a);
            }
            vv.push_back(temp);
            int size2 = mp.size();
            if (size1 == size2)
            {
                flag = true;
            }
        }

        map<int, int> mp2;
        REPR(i, n - 1, -1)
        {

            int size1 = mp2.size();
            for (auto x : vv[i])
            {
                mp2[x]++;
            }
            int size2 = mp2.size();
            if (size1 == size2)
            {
                flag = true;
            }
        }

        if (flag)
        {
            yes
        }
        else
        {
            no
        }

        /*     rep(i, n)
            {
                int mn = INT_MAX;
                for (auto x : vv[i])
                {
                    mn = min(mn, mp[x]);
                }
                if (mn > 1)
                {
                    yes return;
                }
            }
            no; */
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

    // w(t)
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
