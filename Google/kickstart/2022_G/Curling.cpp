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
int caseno = 1;

void pgsolve()
{
    int Rs, Rh;
    cin >> Rs >> Rh;
    int n;
    cin >> n;
    int reqdis = Rs + Rh;
    int arr[n][2];
    int rans = 0, yans = 0;
    double mindisr = FLT_MAX, dis;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i][0] >> arr[i][1];
        dis = sqrt(arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1]);
        mindisr = min(mindisr, dis);
    }
    double mindisy = FLT_MAX;

    int m;
    cin >> m;
    int brr[m][2];
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i][0] >> brr[i][1];
        dis = sqrt(brr[i][0] * brr[i][0] + brr[i][1] * brr[i][1]);
        mindisy = min(mindisy, dis);
    }
    if (m == 0 && n == 0)
    {
        cout << "Case #" << caseno << ": " << 0 << " " << 0 << endl;
        caseno++;
    }
    else if (m == 0)
    {
        for (int i = 0; i < n; i++)
        {

            dis = sqrt(arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1]);
            if (dis <= reqdis)
            {
                rans++;
            }
        }
        cout << "Case #" << caseno << ": " << rans << " " << 0 << endl;
        caseno++;
    }
    else if (n == 0)
    {
        for (int i = 0; i < m; i++)
        {

            dis = sqrt(brr[i][0] * brr[i][0] + brr[i][1] * brr[i][1]);
            if (dis <= reqdis)
            {
                yans++;
            }
        }
        cout << "Case #" << caseno << ": " << 0 << " " << yans << endl;
        caseno++;
    }
    else
    {
        // cout << mindisr << " " << mindisy << endl;
        if (mindisr < mindisy)
        {
            for (int i = 0; i < n; i++)
            {

                dis = sqrt(arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1]);
                if (dis <= reqdis && dis <= mindisy)
                {
                    rans++;
                }
            }
            cout << "Case #" << caseno << ": " << rans << " " << 0 << endl;
            caseno++;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {

                dis = sqrt(brr[i][0] * brr[i][0] + brr[i][1] * brr[i][1]);
                if (dis <= reqdis && dis <= mindisr)
                {
                    yans++;
                    // cout<<dis<<" "<<endl;
                }
            }
            cout << "Case #" << caseno << ": " << 0 << " " << yans << endl;
            caseno++;
        }
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
