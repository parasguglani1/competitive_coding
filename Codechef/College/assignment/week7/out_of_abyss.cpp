#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define int long long
using ll = long long;
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define infinity 100000000000005
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

vi distinct;
set<pii> set_q;

void bfsu(vi adj[], int s)
{
    set<pair<int, int>>::iterator it;
    rep(i,adj[s].size())

    {
        int v = adj[s][i];
        if (distinct[s] + 1 < distinct[v])
        {
            it = set_q.find({distinct[v], v});
            set_q.erase(it);
            distinct[v] = distinct[s] + 1;
            set_q.insert({distinct[v], v});
        }
    }
    if (set_q.size() == 0)
        return;
    it = set_q.begin();
    int next = it->second;
    set_q.erase(it);
    bfsu(adj, next);
}

void bfs(vi adj[], int n, vi &s, int k)
{
    vi source(n + 1, 0);
    rep(i,k)
        source[s[i]] = 1;
    REP(i,1,n)
    {
        if (source[i])
        {
            distinct[i] = 0;
            set_q.insert({0, i});
        }

        else
        {
            distinct[i] = infinity;
            set_q.insert({infinity, i});
        }
    }
    auto iterator = set_q.begin();
    int start = iterator->ss;
    bfsu(adj, start);
}
void s()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi adj[n + 1], special(k);
    int u, v, q;
    rep(i,m)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
   rep(i,k)
    {
        cin >> special[i];
    }
    distinct = vi(n + 1, infinity);
    bfs(adj, n, special, k);
    cin >> q;
    while (q--)
    {
        cin >> u;
        if (distinct[u] >= infinity)
            cout << -1 << endl;
        else
            cout << distinct[u] << endl;
    
    }
    return;
}

int32_t main()
{
    paras();
    w(t)
    { 
        s();
        
        
    }
    return 0;
}