#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
typedef pair<int,int> pp;
bool com(pp x, pp y){
    if(x.ff == y.ff) return x.ss < y.ss;
    return x.ff < y.ff;
}
ll power(ll x, ll y){
    ll prod = 1;
    while(y){
        if(y & 1) prod = (prod * x) % mod;
        x = (x * x) % mod;
        y /= 2;
    }
    return prod;
}
const int N = 2e5 + 7;
vector<int> vtx[N], euler;
int seg[4 * N], sz[N], in[N], lazy[4 * N];
void dfs(int u, int p){
    sz[u] = 1;
    euler.pb(u);
    in[u] = euler.size() - 1;
    for(auto v : vtx[u]){
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
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        vtx[u].pb(v);
        vtx[v].pb(u);
    }
    dfs(1, 0);
    // cout << euler.size() << "\n";
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
            //cout << in[u] << " " << sz[u] << "\n";
            ll x = rangesum(in[1], in[1] + sz[1] - 1, 0, n - 1, 1);
            ll y = rangesum(in[u], in[u] + sz[u] - 1, 0, n - 1, 1);
            // cout << x << "\n";
            cout << (x - y) * y << "\n";
        }
        else{
            int u;
            cin >> u;
            update(in[u], in[u] + sz[u] - 1, 0, n - 1, 1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	int t = 1;
	// cin >> t;
	while (t--) 
	    solve();
	return 0; 
}
/*
*/
