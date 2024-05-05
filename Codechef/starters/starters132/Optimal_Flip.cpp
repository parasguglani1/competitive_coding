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

void pgsolve()
{

    int n;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    // store index of next and previous even number for each element

    vi next(n + 1, -1), prev(n + 1, -1);
    int lasteven = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            lasteven = i;
        }
        prev[i] = lasteven;
    }
    lasteven = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            lasteven = i;
        }
        next[i] = lasteven;
    }

    // for each element find the number of elements between it and the next even number
    vector<int> dis(n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            continue;
        }
        dis[i] = next[i] - prev[i];
    }
    // get index with max distance;
    int maxdis = 0;
    int maxdisindex = -1;
    for (int i = 0; i < n; i++)
    {
        if (dis[i] > maxdis)
        {
            maxdis = dis[i];
            maxdisindex = i;
        }
    }
    int maxdisindexlast = -1;
    for (int i = maxdisindex; i < n; i++)
    {
        if (dis[i] == maxdis)
        {
            maxdisindexlast = i;
        }
        else
        {
            break;
        }
    }
    int mid = (maxdisindex + maxdisindexlast) / 2;
    // for (int i = maxdisindex; i <= maxdisindexlast; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         ans += dis[i];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << prev[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << next[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dis[i] << " ";
    // }
    // cout << endl;
    if (mid != -1)
    {
        a[mid] = 0;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // count number of subarrays with atleast one even number
    int badSubarrays = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cnt = 0;
        }
        else
        {
            cnt++;
            badSubarrays += (cnt);
        }
    }
    cout << n * (n + 1) / 2 - badSubarrays << endl;
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
