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

int getscore(vector<int> &v, vector<int> &q)
{
    int score = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        int sum = v[i] + q[i];
        int prevsum = v[i - 1] + q[i - 1];
        int nextsum = v[i + 1] + q[i + 1];
        if (sum > prevsum && sum > nextsum)
        {
            score++;
        }
    }
    return score;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int tmp = n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans(n);
    vector<pair<int, int>> odd, vecp;
    for (int i = 1; i < n; i += 2)
    {
        if (i == n - 1)
        {
            continue;
        }
        odd.push_back({a[i], i});
    }
    for (int i = 0; i < n; i += 2)
    {
        vecp.push_back({a[i], i});
    }
    vecp.push_back({a[n - 1], n - 1});
    int osz = odd.size(), esz = vecp.size();

    sort(odd.begin(), odd.end());
    sort(vecp.begin(), vecp.end());
    for (int i = 0; i < osz; i++)
    {
        ans[odd[i].second] = tmp--;
    }
    for (int i = 0; i < esz; i++)
    {
        ans[vecp[i].second] = tmp--;
    }
    set<int> st;
    vector<int> ans2(n);
    vector<pair<int, int>> odd1, even2;
    for (int i = 2; i < n - 1; i += 2)
    {
        st.insert(i);
        odd1.push_back({a[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        if (st.find(i) == st.end())
        {
            even2.push_back({a[i], i});
        }
    }
    sort(odd1.begin(), odd1.end());
    sort(even2.begin(), even2.end());
    int t2 = n;
    for (int i = 0; i < odd1.size(); i++)
    {
        int idx = odd1[i].second;
        ans2[idx] = t2--;
    }
    for (int i = 0; i < even2.size(); i++)
    {
        int idx = even2[i].second;
        ans2[idx] = t2--;
    }

    int score1 = getscore(a, ans), score2 = getscore(a, ans2);
    vector<int> finalans(n);
    if (score1 > score2)
    {
        finalans = ans;
    }
    else
    {
        finalans = ans2;
    }
    for (auto i : finalans)
    {
        cout << i << " ";
    }
    cout << endl;
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
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
