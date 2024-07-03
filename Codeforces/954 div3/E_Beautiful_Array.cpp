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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    for (auto &x : freq)
    {
        if (x.ss > 1)
        {
            x.ss = x.ss % 2;
        }
    }
    vi v2;
    for (auto x : freq)
    {
        if (x.ss)
        {
            v2.pb(x.ff);
        }
    }

    map<int, set<int>> mp;
    for (int &v : v2)
    {
        int modv = v % k;
        mp[modv].insert(v);
    }
    int odd = 0, val = -1;
    for (auto x : mp)
    {
        int sz = x.ss.size();
        if (sz % 2)
        {
            val = x.ff;
            odd++;
        }
    }
    if (odd > 1)
    {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    bool flg = false;
    for (auto &x : mp)
    {
        if (x.ff == val)
        {
            continue;
        }
        auto &st = x.ss;
        while (st.size() > 0)
        {
            int top1 = *st.begin();
            st.erase(top1);
            int top2 = *st.begin();
            int curv = top2 - top1;
            curv /= k;
            ans += curv;
            st.erase(top2);
        }
    }

    if (odd)
    {

        vi prefixSum(n, 0);
        vi suffixSum(n, 0);
        int sz = mp[val].size();
        if (sz == 1)
        {
            cout << ans << endl;
            return;
        }
        vector<int> vec(sz);
        int i = 0;
        for (int x : mp[val])
        {
            vec[i++] = x;
        }

        int n = vec.size();

        int dif = vec[1] - vec[0];
        prefixSum[1] = dif;
        for (int i = 3; i < n - 1; i++)
        {
            int x = vec[i] - vec[i - 1];
            prefixSum[i] = x + prefixSum[i - 2];
        }
        dif = vec[n - 1] - vec[n - 2];
        suffixSum[n - 2] = dif;
        for (int i = n - 4; i >= 0; i--)
        {
            dif = vec[i + 1] - vec[i];
            suffixSum[i] = dif + suffixSum[i + 2];
        }
        int mnsum = LLONG_MAX;
        for (int i = 0; i < n; i += 2)
        {
            int sm = 0;
            if (i > 0)
            {
                sm += prefixSum[i - 1];
            }
            if (i + 1 < n)
            {
                sm += suffixSum[i + 1];
            }
            mnsum = min(mnsum, sm);
        }
        int curval = mnsum / k;
        ans += curval;
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
