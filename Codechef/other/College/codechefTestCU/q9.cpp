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
#define pii pair<int, int>
#define vi vector<int>
#define vd vector<double>

double calcV(double baseVolume, double tmp)
{
    return pow(baseVolume + tmp, 3);
}

bool isPost(vd &bsvls, double tmp, double trgV)
{
    double totV = 0;
    for (double bsV : bsvls)
    {
        totV += calcV(bsV, tmp);
        if (totV >= trgV)
            break;
    }
    return !(totV < trgV);
}

double findT(vd &bVl, double trgV)
{
    double lft = 0.0, right = trgV;
    double tmp = 0.0;

    while (right > 1e-7 + lft)
    {
        double mid = (lft + right) / 2.0;
        if (isPost(bVl, mid, trgV))
        {
            tmp = mid;
            right = mid;
        }
        else
        {
            lft = mid;
        }
    }

    return tmp;
}

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef __GNUC__
    freopen("error.txt", "w", stderr);
#endif

    int Q;
    cin >> Q;

    while (Q--)
    {
        int N;
        double U;
        cin >> N >> U;

        vector<double> bV(N);
        for (int i = 0; i < N; i++)
        {
            cin >> bV[i];
        }

        double tmp = findT(bV, U);
        cout.precision(2);
        cout << fixed << tmp << endl;
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
