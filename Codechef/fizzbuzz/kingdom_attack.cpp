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
int total=0;
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
class Graph {
        int V;
        list<int>* adj;
    public:
    Graph(int V)
    {    
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w)
    {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }
    void DFSUtil(int v, bool visited[],vi &v1)
    {
        visited[v] = true;
        v1.pb(v);
        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited,v1);
    }
    void connectedComponents(vector<vi> &p)
    {
        bool* visited = new bool[V];
        for (int v = 0; v < V; v++)
            visited[v] = false;
        for (int v = 0; v < V; v++) {
            if (visited[v] == false) {
              vi v1;
                DFSUtil(v, visited,v1);
                total++;
                p.push_back(v1);
            }
        }
    }    
    };

int32_t main()

{
    
    paras();
    w(t)
    {
         int n,m;
       cin>>n>>m;
       int conn[n]={0};
       Graph g(n);
       int x,y;
       REP(i,0,m-1){
        cin>>x>>y;
        x--,y--;
        g.addEdge(x,y);
        conn[x]++;
        conn[y]++;
       }
       total=0;
       vector<vi> v;
       g.connectedComponents(v);
       int worthy=0;
       REP(i,0,v.size()-1){
        ll sum=0;
        REP(j,0,v[i].size()-1){
            sum+=(ll)(conn[v[i][j]]);
        }
        if(sum==((ll)v[i].size()*((ll)v[i].size()-(ll)1)))
            worthy++;
       }
       if(total==1)
        cout<<"0\n";
        else
        cout<<worthy<<endl;

        
    }
    return 0;
}