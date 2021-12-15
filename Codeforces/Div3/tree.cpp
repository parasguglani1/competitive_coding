#include <bits/stdc++.h>
using namespace std;

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
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i <= n; ++i)
#define REPR(i, k, n) for (int i = k; i >= n; --i)
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
void paras()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:\\Programming\\ds\\competitive_coding\\input.txt", "r", stdin);
    freopen("D:\\Programming\\ds\\competitive_coding\\output.txt", "w", stdout);
#endif
}

int32_t main()

{
    paras();
    w(t)
    {
        const int maxN = 200'005;
        int par[maxN], indOf[maxN], dep[maxN], ans[maxN];
        vector<int> nei[maxN];
         int n;
        cin >> n;
        for (int v = 1; v <= n; ++v) {
            nei[v].clear();
        }
        int root = -1;
        for (int v = 1; v <= n; ++v) {
            cin >> par[v];
            if (par[v] == v) {
                root = v;
            } else {
                nei[par[v]].push_back(v);
            }
        }
        for (int i = 1; i <= n; ++i) {
            int v;
            cin >> v;
            indOf[v] = i;
        }
        int cur = 1;
        priority_queue<pair<int, int>> q;
        q.push({-indOf[root], root});
        int maxDep = 1;
        bool ok = true;
        while (q.size()) {
             auto i=  q.top().first;
             auto v =q.top().second;
            q.pop();
            i *= -1;
            if (i != cur) {
                // cout << i << " != " << cur << endl;
                ok = false;
                break;
            } else {
                // cout << "->" << v << endl;
                int curDep = par[v] != v ? dep[par[v]] : 0;
                ans[v] = maxDep + 1 - curDep;
                if (v == root) {
                    ans[v] = 0;
                }
                dep[v] = curDep + ans[v];
                maxDep = dep[v];
                ++cur;
                for (int to: nei[v]) {
                    // cout << "Pussh(" << -indOf[to] << ", " << to << ")\n";
                    q.push({-indOf[to], to});
                }
            }
        }
        if (ok) {
            for (int i = 1; i <= n; ++i) {
                cout << ans[i] << ' ';
            }
            cout << '\n';
        } else {
            cout << "-1\n";
        }

        
    }
    return 0;
}