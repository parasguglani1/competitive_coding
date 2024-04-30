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
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    map<int, int> m;
    rep(i, n)
    {
        m[a[i]]++;
    }

    priority_queue<pair<int, int>> more, less;

    for (auto x : m)
    {
        if (x.ss >= k)
        {
            more.push({x.ss, x.ff});
        }
        else
        {
            less.push({x.ss, x.ff});
        }
    }
    vector<int> freq;
    for (auto x : m)
    {
        freq.pb(x.ss);
    }
    sortall(freq);
    int ans = 0;
    int i = sz(freq) - 1;
    for (; i > -1; i--)
    {
        if (freq[i] >= k)
        {
            freq[i] = 0;
            if (i >= 1)
            {
                freq[i - 1] += k - 1;
            }
            else if (i == 0)
            {
                ans = k - 1;
            }
        }

        else
        {
            break;
        }
    }
    while (i >= 0)
    {
        ans += freq[i];
        i--;
    }

    // while (more.empty() == false)
    // {
    //     cout << more.top().ff << " " << more.top().ss << endl;
    //     more.pop();
    // }
    // cout<<endl;
    // while (less.empty() == false)
    // {
    //     cout << less.top().ff << " " << less.top().ss << endl;
    //     less.pop();
    // }

    // while (more.empty() == false && more.top().ff >= k)
    // {
    //     auto [cnt, ele] = more.top();
    //     more.pop();
    //     if (cnt > k)
    //     {
    //         if (cnt - k >= k)
    //         {
    //             more.push({cnt - k, ele});
    //         }
    //         else
    //         {
    //             less.push({cnt - k, ele});
    //         }
    //     }
    //     cnt--;
    //     while (cnt > 0 && less.empty() == false)
    //     {
    //         auto [cnt1, ele1] = less.top();
    //         less.pop();
    //         int req = k - cnt1;
    //         if (req > cnt)
    //         {
    //             cnt1 += cnt;
    //             cnt = 0;
    //             less.push({cnt1, ele1});
    //         }
    //         else
    //         {
    //             cnt1 += req;
    //             cnt -= req;
    //             more.push({cnt1, ele1});
    //         }
    //     }
    // }
    // while (more.empty() == false)
    // {
    //     cout << more.top().ff << " " << more.top().ss << endl;
    //     more.pop();
    // }
    // cout << endl;
    // while (less.empty() == false)
    // {
    //     cout << less.top().ff << " " << less.top().ss << endl;
    //     less.pop();
    // }
    // cout << more.size() + less.size() << endl;
    cout << ans << endl;
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
