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
bool notPrime[100001];
vector<int> pfac[100001];
// https://www.codechef.com/submit/DQUERY?tab=solution
void pgsolve()
{
    int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
        cin >> m[i];
    int pref[n];
    pref[0] = m[0];
    for (int i = 1; i < n; i++)
        pref[i] = m[i] + pref[i - 1];
    vector<int> li[100001];
    for (int i = 0; i < n; i++)
    {
        for (int j : pfac[m[i]])
        {
            li[j].pb(i);
        }
    }
    vector<int> pf[100001], sf[100001];
    for (int i = 0; i <= 100000; i++)
    {
        if (li[i].size() == 0)
            continue;
        pf[i].pb(m[li[i][0]]);
        for (int j = 1; j < li[i].size(); j++)
        {
            pf[i].pb(m[li[i][j]] + pf[i][j - 1]);
        }
        vector<int> temp;
        for (int j : li[i])
            temp.pb(m[j]);
        sort(temp.begin(), temp.end());
        sf[i].pb(temp[temp.size() - 1]);
        for (int j = 1; j < temp.size(); j++)
        {
            sf[i].pb(temp[temp.size() - 1 - j] + sf[i][j - 1]);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int p, k;
        cin >> p >> k;
        int ans = pref[k - 1];
        int cnt = lower_bound(li[p].begin(), li[p].end(), k) - li[p].begin();
        if (cnt > 0)
        {
            ans -= pf[p][cnt - 1];
            ans += sf[p][cnt - 1];
        }
        cout << ans << endl;
    }
    //TODO
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
    for (int i = 2; i <= 100000; i++)
    {
        if (notPrime[i])
            continue;
        for (int j = i; j <= 1e5; j += i)
        {
            notPrime[j] = true;
            pfac[j].pb(i);
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
