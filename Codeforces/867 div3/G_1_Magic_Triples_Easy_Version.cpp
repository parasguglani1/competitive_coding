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
#define buff 1000000020

void pgsolve()
{
    map<int, int> freq;

    int n;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        freq[a[i]]++;
    }

    sort(a.begin(), a.end(), greater<int>());
    unordered_map<int, int> answ;

    int ans = 0;

    for (auto pt = freq.rbegin(); pt != freq.rend(); pt++)
    {
        auto curr = *pt;
        int tmp = curr.ff;
        for (int j = 2; j < 1001; j++)
        {
            if (j * tmp > 1e6 + 5)
            {
                break;
            }
            int s = tmp * j;
            if (freq.find(s) == freq.end())
            {
                continue;
            }
            int tmp2 = freq[s] * curr.ss;
            answ[tmp * buff + j] += tmp2;
            int ind = 0;
            ind += s * buff + j;
            if (answ.find(ind) != answ.end())
            {
                int curans = answ[ind] * curr.ss;
                ans += curans;
            }
        }
    }

    for (auto f : freq)
    {
        int tmp = f.ss;
        ans += tmp * (tmp - 2) * (tmp - 1);
    }

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
