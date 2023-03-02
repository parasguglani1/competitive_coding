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
void pgsolve()
{
    int n, m, q;
    cin >> n >> m >> q;

    while (q--)
    {
        int s;
        cin >> s;

        int nums = 0;
        while (nums < n)
        {
            if (s <= nums)
            {
                break;
            }
            else
            {
                s -= nums + 1;
            }
            nums++;
        }
        int row = nums;

        vi numb;
        while (nums >= 1)
        {
            int temp = min(s / nums, m - 1);
            numb.pb(temp);
            s -= numb.back() * nums;
            nums--;
        }
        string ans = "";
        cout << 1 << " " << row << endl;

        int nn = numb.size();

        REPR(i, nn - 1, -1)
        {
            string temp = to_string(numb[i] + 1);
            ans += temp + " ";
        }
        cout << ans << endl;
    }
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

    // w(t)
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
