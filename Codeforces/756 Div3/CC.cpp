#include <iostream>
#include <string>
#include <queue>
using namespace std;
const int maxN = 200'005;

int par[maxN], indOf[maxN], dep[maxN], ans[maxN];
vector<int> nei[maxN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
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
}