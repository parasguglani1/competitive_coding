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
    vector<int> x(n), p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<bool> canReachNext(n, 0);
    vector<bool> canReachPrev(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        if (x[i] + p[i] >= x[i + 1])
        {
            canReachNext[i] = 1;
        }
    }
    canReachNext[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (x[i] - p[i] <= x[i - 1])
        {
            canReachPrev[i] = 1;
        }
    }
    canReachPrev[0] = 1;

    vector<bool> canBeRightStartingPoint(n, 0);
    vector<bool> canBeLeftStartingPoint(n, 0);
    canBeLeftStartingPoint[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (canBeLeftStartingPoint[i - 1] && canReachPrev[i])
        {
            canBeLeftStartingPoint[i] = 1;
        }
    }

    canBeRightStartingPoint[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (canBeRightStartingPoint[i + 1] && canReachNext[i])
        {
            canBeRightStartingPoint[i] = 1;
        }
    }

    if (canBeRightStartingPoint[0] || canBeLeftStartingPoint[n - 1])
    {
        yes;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (canBeLeftStartingPoint[i - 1] && canBeRightStartingPoint[i])
        {
            yes;
            return;
        }
    }

    int f = 0;
    int diversions = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (x[i] + p[i] < x[i + 1])
        {
            diversions++;
        }
    }

    if (diversions <= 1)
    {
        yes;
        return;
    }

    diversions = 0;

    for (int i = n - 1; i > 0; i--)
    {

        if (x[i] - p[i] > x[i - 1])
        {
            diversions++;
        }
    }

    if (diversions <= 1)
    {
        yes;
        return;
    }

    int leftPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] + p[i] >= x[i + 1])
        {
            leftPos = i + 1;
        }
        else
        {
            break;
        }
    }
    int rightPos = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (x[i] - p[i] <= x[i - 1])
        {
            rightPos = i - 1;
        }
        else
        {
            break;
        }
    }
    if (leftPos + 1 >= rightPos)
    {
        yes;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (x[i] - p[i] > x[i - 1])
        {

            for (int j = i; j < n; j++)
            {
                if (j == n - 1)
                {
                    yes;
                    return;
                }
                if (x[j] + p[j] < x[j + 1])
                {
                    break;
                }
            }

            break;
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
