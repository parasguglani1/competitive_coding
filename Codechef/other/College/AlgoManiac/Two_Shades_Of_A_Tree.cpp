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
#define pii pair<int, int>
#define vi vector<int>
const int N = 2e5 + 7;
int seg[4 * N], sz[N], in[N], lazy[4 * N];

void build(int l, int r, int node);
void dfs(int u, int p);
int rangesum(int l, int r, int tl, int tr, int node);
void push(int tl, int tr, int node);
void update(int l, int r, int tl, int tr, int node);

vi vt[N], euler;
void pgsolve()
{
    int i, j, n, m;
    int t;
    
    cin >> n;
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        vt[u].pb(v);
        vt[v].pb(u);
    }
    dfs(1, 0);

    build(0, n - 1, 1);
    int q;
    cin >> q;
    while(q--){
        int t;
        cin >> t;
  
        if(t == 1){
            int u, v;
            cin >> u >> v;
            if(in[v] > in[u]) swap(v, u);
             int x = rangesum(in[1], in[1] + sz[1] - 1, 0, n - 1, 1);
             int y = rangesum(in[u], in[u] + sz[u] - 1, 0, n - 1, 1);
         
            cout << (x - y) * y << "\n";
        }
        else{
            int u;
            cin >> u;
            update(in[u], in[u] + sz[u] - 1, 0, n - 1, 1);
        }
}
}
void dfs(int u, int p){
    sz[u] = 1;
    euler.pb(u);
    in[u] = euler.size() - 1;
    for(auto v : vt[u]){
        if(v == p) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}
void build(int l, int r, int node){
    if(l == r){
        seg[node] = 1;
        return;
    }
    int mid = (l + r) / 2;
    build(l, mid, node * 2);
    build(mid + 1, r, node * 2 + 1);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

void push(int tl, int tr, int node){
    if(lazy[node]){
        int tm = (tl + tr) / 2;
        seg[node] = tr - tl + 1 - seg[node];
        if(tl != tr){
            lazy[node * 2] ^= 1;
            lazy[node * 2 + 1] ^= 1;
        }
        lazy[node] = 0;
    }
}
void update(int l, int r, int tl, int tr, int node){
    push(tl, tr, node);
    if(l > r) return;
    if(l == tl && r == tr){
        lazy[node] ^= 1;
        push(tl, tr, node);
        return;
    }
    int mid = (tl + tr) / 2;
    update(l, min(mid, r), tl, mid, node * 2);
    update(max(l, mid + 1), r, mid + 1, tr, node * 2 + 1);
    seg[node] = seg[node * 2] + seg[node * 2 + 1];
}

int rangesum(int l, int r, int tl, int tr, int node){
    push(tl, tr, node);
    if(l > r) return 0;
    if(l == tl && r == tr) return seg[node];
    int mid = (tl + tr) / 2;
    return rangesum(l, min(r, mid), tl, mid, node * 2) + rangesum(max(l, mid + 1), r, mid + 1, tr, node * 2 + 1);
}
int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
	freopen("Error.txt", "w", stderr);
#endif

   
        pgsolve();
    
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32 
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}