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
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
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

int32_t main()

{
    paras();
    w(t)
    {
        int n, p, q;
        string str;
        cin >> n >> p >> q;

        p = abs(p), q = abs(q);

        cin >> str;

        vi arr(2);

        int idx = 0;

        for (auto x : str)
        {
            if (x == '0')
            {
                idx ^= 1;
            }
            arr[idx]++;
        }

        if (arr[0] >= p and arr[1] >= q)
        {
            if (((arr[0] - p) % 2 == 0) and ((arr[1] - q) % 2 == 0))
            {
                cout << "YES" << endl;
                continue;
            }
        }

        if (arr[1] >= p and arr[0] >= q)
        {
            if (((arr[0] - q) % 2 == 0) and ((arr[1] - p) % 2 == 0))
            {
                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }
    return 0;
}