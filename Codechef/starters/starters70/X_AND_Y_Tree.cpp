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
#include <bits/stdc++.h>

using namespace std;

class FenwickTree
{
public:
    FenwickTree(int n) : tree_(n + 1), n_(n) {}

    void update(int i, int delta)
    {
         i++;
         while (i <= n_)
         {
             tree_[i] += delta;
             i += i & -i;
         }
    }

    int prefix_sum(int i)
    {
        int result = 0;
        while (i >= 0)
        {
            result += tree_[i];
            i -= i & -i;
        }
        return result;
    }

private:
    vector<int> tree_;
    int n_;
};

struct Node
{
    int value;
    int size;
    Node *left;
    Node *right;
    FenwickTree fenwick_tree;

    Node(int value, int size,Node *left = nullptr, Node *right = nullptr) : value(value), left(left), right(right), fenwick_tree(1) {}
};

void process_query(Node *root, int u, int value)
{
    if (root == nullptr)
        return;

    if (root->value == u)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            root->fenwick_tree.update(0, value - root->value);
            root->value = value;
        }
        else
        {
            root->fenwick_tree.update(0, root->left->fenwick_tree.prefix_sum(0) & root->right->fenwick_tree.prefix_sum(0));
            root->value = root->left->fenwick_tree.prefix_sum(0) & root->right->fenwick_tree.prefix_sum(0);
        }
    }
    else
    {
        process_query(root->left, u, value);
        process_query(root->right, u, value);
    }
}

int count_good_edges(Node *root)
{
    if (root == nullptr)
        return 0;

    int result = 0;
    if (root->left != nullptr && root->right != nullptr)
    {
        if (root->left->fenwick_tree.prefix_sum(0) == root->right->fenwick_tree.prefix_sum(0))
        {
            result++;
        }
    }
    result += count_good_edges(root->left);
    result += count_good_edges(root->right);
    return result;
}

void pgsolve()
{
    int n;
    cin >> n;

    vector<Node> nodes;
    nodes.reserve(n);
    for (int i = 0; i < n; i++)
    {
        nodes.emplace_back(0);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        nodes[u].left = &nodes[v];
        nodes[v].right = &nodes[u];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int u;
            cin >> u;
            u--;
            process_query(&nodes[0], u, 1);
        }
        else
        {
            // cout << count_good_edges(&nodes[0]) << endl;
        }
    }

    //todo
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
