#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ff first
#define s1 second
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
vector<int> getDivisors(int n)
{
    vector<int> a;
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            a.pb(i);
    }
    if (i - (n / i) == 1)
    {
        i--;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            a.pb(n / i);
    }
    return a;
}
void pgsolve()
{
    int n;
    cin >> n;
    int arr[n];

    int sum = 0;

    rep(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    vi fact = getDivisors(sum);
    int res = n;
    int ab = fact.size();
    if (ab < 3)
    {
        cout << n << endl;
        return;
    }
    int maxi = 0, segSize = 0, s1 = 0;
    for (auto ele : fact)
    {
        maxi = 0, segSize = 0, s1 = 0;
        int des = sum / ele;
        bool flag = 0;
        rep(i, n)
        {
            segSize++;
            s1 += arr[i];

            if (!(s1 - des))
            {
                s1 = 0;
                maxi = max(segSize, maxi);
                segSize = 0;
            }
            else if (s1 - des > 0)
            {
                flag = true;
                break;
            }
        }

        if (flag == 0)
        {
            res = min(res, maxi);
        }
    }
    cout << res << endl;
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
