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
int dp[100004][21];

void buildTab(vector<int> &v, int N)
{
    for (int i = 0; i < N; i++)
    {
        dp[i][0] = v[i];
    }

    for (int j = 1; j <= 21; j++)
    {
        int k = 1 << j;
        for (int i = 0; i + k <= N; i++)
        {
            int left = dp[i][j - 1];
            int right = dp[i + (1 << (j - 1))][j - 1];
            dp[i][j] = left | right;
        }
    }
}

int getorv(int left, int right)
{

    int sum = 0;
    for (int j = 20; j >= 0; j--)
    {
        if ((1 << j) <= right - left + 1)
        {
            sum = sum | dp[left][j];
            left = left + (1 << j);
        }
    }
    return sum;
}

bool isPossible(vector<int> &v, int k)
{
    int orv = 0;
    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if (v[i] & (1 << j))
            {
                mp[j]++;
            }
        }
        orv |= v[i];
    }
    // check if orv of all k subsets is equal
    // for (int i = k; i < v.size(); i++)
    // {
    //     int prevorv = orv;
    //     int prev = v[i - k];
    //     for (int j = 0; j < 32; j++)
    //     {
    //         if (prev & (1 << j))
    //         {
    //             mp[j]--;
    //             if (mp[j] == 0)
    //             {
    //                 orv &= ~(1 << j);
    //             }
    //         }
    //     }
    //     for (int j = 0; j < 32; j++)
    //     {
    //         if (v[i] & (1 << j))
    //         {
    //             mp[j]++;
    //         }
    //     }
    //     orv |= v[i];
    //     if (orv != prevorv)
    //     {
    //         return false;
    //     }
    // }
    for (int i = 1; i < v.size(); i++)
    {
        int ll = i;
        int rr = i + k - 1;
        if (rr <= v.size() - 1)
        {
            int currval = getorv(ll, rr);
            if (currval != orv)
            {
                return false;
            }
        }
    }
    return true;
}
void pgsolve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    buildTab(v, n);

    int l = 1, r = n;
    int ans = n;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (isPossible(v, m))
        {
            ans = min(ans, m);
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << l << endl;
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
