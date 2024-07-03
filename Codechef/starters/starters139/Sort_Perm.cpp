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

template <typename T>
class SegmentTree
{
    vector<T> tree;
    int size;
    T defaultValue;
    T(*operation)
    (T, T);

public:
    SegmentTree(int n, T (*op)(T, T), T def)
        : tree(2 * n, def), size(n), operation(op), defaultValue(def) {}

    void update(int position, T value)
    {
        for (tree[position += size] = value; position > 1; position /= 2)
            tree[position / 2] = operation(tree[position], tree[position ^ 1]);
    }

    T query(int left, int right)
    {
        T resultLeft = defaultValue, resultRight = defaultValue;
        for (left += size, right += size + 1; left < right; left /= 2, right /= 2)
        {
            if (left % 2)
                resultLeft = operation(resultLeft, tree[left++]);
            if (right % 2)
                resultRight = operation(tree[--right], resultRight);
        }
        return operation(resultLeft, resultRight);
    }
};

int combine(int a, int b) { return max(a, b); }

void solveProblem()
{
    int n;
    cin >> n;
    vector<int> a(n);
    SegmentTree<int> segTree(n, combine, 0);
    rep(i, n)
    {
        cin >> a[i];
        segTree.update(i, a[i]);
    }
    vi immobile(n, 0);

    vi previousGreater(n, -1),nextGreater(n, n);
    stack<int> stck;
    for (int i = 0; i < n; ++i)
    {
        while (stck.size()>0 && a[stck.top()] <= a[i])
        {
            stck.pop();
        }
        if (stck.size() == 1)
        {
            previousGreater[i] = stck.top();
        }
        else if (stck.size() > 1)
        {
            int ans=0;
            cout << ans << endl;
            return;
        }
        stck.push(i);
    }

    bool hasImmobile = false;
    int maxDifference = 0;
    int minK = 0, residue = n;
    for (int i = n - 1; i >= 0; --i)
    {
        if (previousGreater[i] != -1)
        {
            minK = max(minK, a[previousGreater[i]] - a[i]);
            segTree.update(i, a[previousGreater[i]]);
            immobile[previousGreater[i]] = 1;
            if (hasImmobile)
            {
                residue = min(residue, maxDifference);
            }
        }
        if (immobile[i])
        {
            maxDifference = 0;
            hasImmobile = true;
        }
        if (hasImmobile && i > 0)
        {
            int diff=a[i]-a[i-1];
            maxDifference = max(maxDifference, diff);
        }
    }

    int mxVal = residue;
    int result = (mxVal * (mxVal + 1)) / 2;
    result -= (minK * (minK - 1)) / 2;
    int ans=max(result,0LL);
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

    w(t)
    {
        solveProblem();
    }

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
