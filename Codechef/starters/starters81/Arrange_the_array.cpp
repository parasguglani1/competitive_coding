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

int find(vector<int> &temp)
{
    int mn = INT_MAX;
    for (int i = 1; i < temp.size(); ++i)
    {
        mn = min(mn, abs(temp[i] - temp[i - 1]));
    }
    return mn;
}
void pgsolve()
{
    int n;
    cin >> n;
    vi sorted(n);
    rep(i, n)
    {
        cin >> sorted[i];
    }

    vi revsorted = sorted;
    sort(sorted.begin(), sorted.end());
    sort(revsorted.begin(), revsorted.end(), greater<int>());
    if (n == 2 || sorted[0] == sorted[n - 1])
    {
        cout << -1 << endl;
        return;
    }

    int tmp = sorted[0];
    vi leftcycle = sorted, rightcycle = sorted;

    for (int i = 0; i < n - 1; i++)
    {
        leftcycle[i] = leftcycle[i + 1];
    }
    leftcycle[n - 1] = tmp;
    int mn = INT_MAX;
    mn = find(leftcycle);

    if (leftcycle == sorted || leftcycle == revsorted)
    {
        mn = INT_MAX;
    }

    for (int i = n - 1; i > 0; i--)
    {
        rightcycle[i] = rightcycle[i - 1];
    }
    rightcycle[0] = sorted[n - 1];
    int mn2 = find(rightcycle);

    if (rightcycle == sorted || rightcycle == revsorted)
    {
        mn2 = INT_MAX;
    }

    if (mn2 < mn)
    {
        rep(i, n)
        {
            cout << rightcycle[i] << " ";
        }
    }
    else
    {
        rep(i, n)
        {
            cout << leftcycle[i] << " ";
        }
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
        pgsolve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
