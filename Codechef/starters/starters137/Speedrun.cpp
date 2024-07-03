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
template <typename T>
struct seg
{
    T item;
    T(*ptr)
    (T obj1, T obj2);
    int n;
    vector<T> s;
    seg(int n, T (*c)(T val1, T val2), T defval)
        : s(2 * n, defval), n(n), ptr(c), item(defval) {}

    T getval(int st, int end)
    {
        end++;
        T raItem = item, rbItem = item;
        for (st += n, end += n; st < end; st /= 2, end /= 2)
        {
            if (st % 2)
            {
                raItem = ptr(raItem, s[st++]);
            }
            if (end % 2)
            {
                rbItem = ptr(s[--end], rbItem);
            }
        }
        return ptr(raItem, rbItem);
    }
    void updateNode(int idx, T value)
    {
        for (s[idx += n] = value; idx /= 2;)
        {
            s[idx] = ptr(s[idx * 2], s[idx * 2 + 1]);
        }
    }
};
int join(int a, int b) { return max(a, b); }
int sum(int a, int b) { return (a + b); }

void pgsolve()
{
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int remtime = 0;
    int bomblocation = 0;
    int i = 0;
    while (i < n)
    {
        if (x[i] < h[i])
        {
            remtime += h[i] - x[i];
        }
        else
        {
            bomblocation = x[i] + k;
            break;
        }
        i++;
    }
    if (i == n)
    {
        yes return;
    }

    int sumH = 0;
    seg<int> st(n, join, 0);

    seg<int> sumSt(n, sum, 0);
    REP(i, 0, n)
    {
        sumH += h[i];
        sumSt.updateNode(i, h[i]);
        st.updateNode(i, sumH - x[i]);
    }

    REP(i, 0, n)
    {
        int last = 0;
        int val = x[i] + 2 * k;
        int idxTill = upper_bound(all(x), val) - x.begin();
        idxTill--;
        if (i > 0)
        {
            int pos = st.getval(0, i - 1);
            last = max(last, pos);
        }
        if (idxTill != n - 1)
        {
            int pos = sumSt.getval(i, idxTill);
            int pos1 = st.getval(idxTill + 1, n - 1);
            int curans = pos1 - pos;
            last = max(last, curans);
        }
        if (last == 0)
        {
            yes return;
        }
    }
    no;
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
