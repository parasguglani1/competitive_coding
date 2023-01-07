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
    set<int> st1, st2;
    int n;
    cin >> n;
    vi v(n);
    vi ind1(n + 1), ind2(n + 1);

    rep(i, n)
    {
        cin >> v[i];
        ind1[i + 1] = -1;
        ind2[i + 1] = -1;
    }
    map<int, int> m;
    rep(i, n)
    {
        m[v[i]]++;
    }
    if (m[1] > 1)
    {
        no return;
    }

    for (auto i : m)
    {
        if (i.ss > 2)
        {
            no return;
        }
    }

    vi p(n, 0), q(n, 0);
    rep(i, n)
    {
        if (ind1[v[i]] == -1)
        {
            p[i] = v[i];
            ind1[v[i]] = i;
        }
        else if (ind2[v[i]] == -1)
        {
            q[i] = v[i];
            ind2[v[i]] = i;
        }
        else
        {
            no return;
        }
    }

    rep(i, n)
    {
        if (ind1[i + 1] == -1)
        {
            st1.insert(i + 1);
        }
        if (ind2[i + 1] == -1)
        {
            st2.insert(i + 1);
        }
    }
    rep(i, n)
    {
        if (p[i] == 0)
        {
            set<int>::iterator pt;

            pt = st1.upper_bound(q[i]);
            if (pt != st1.begin())
            {
                pt--;
                p[i] = *pt;
                st1.erase(pt);
            }
            else
            {
                no return;
            }
        }
        else
        {
            set<int>::iterator pt;
            pt = st2.upper_bound(p[i]);

            if (pt != st2.begin())
            {
                pt--;
                q[i] = *pt;
                st2.erase(pt);
            }
            else
            {
                no return;
            }
        }
    }

    yes

    /*
        rep(i,n)
        {
            if (m[v[i]] == 1)
            {
                p[i] = v[i];
                q[i] = v[i];
            }
        }

        rep(i,n)
        {
            if (m[v[i]] == 2)
            {
                // m[v[i]]--;
                mpv[v[i]].pb(i);
            }
        }
        for (auto x : mpv)
        {
            p[x.ss[0]] = x.ff;
            q[x.ss[1]] = x.ff;
        } */

    rep(i, n)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    rep(i, n)
    {
        cout << q[i] << " ";
    }
    cout << endl;
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
