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
#define sortall(x) sort(all(x))
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
int min(int a, int b, int c)
{
    int minmin = (a > b) ? b : a;
    return (minmin > c) ? c : minmin;
}
int i, j, temp, temp1;

int32_t main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    auto start1 = high_resolution_clock::now();

#ifdef _WIN32
    freopen("error.txt", "w", stderr);
#endif

    int testi = 1, test = 1;
    cin >> test;
    while (testi <= test)
    {
        int arroutput[4] = {0, 0, 0, 0}, sum = 1000000, arr[3][4];
        rep(i, 3)
        {
            rep(j, 4)
            {
                cin >> arr[i][j];
            }
        }
      
        i = 0;
        while (sum != 0 && i < 4)
        {
            temp = min(arr[0][i], arr[1][i], arr[2][i]);
            if (temp >= 1000000)
                temp = 1000000;
            if (sum <= temp)
                temp = sum;
            sum -= temp;
            arroutput[i] = temp;
            i++;
        }
        cout << "Case #" << testi<<": ";
        if (sum == 0)
        {
            for (i = 0; i < 4; i++)
            {
                cout << arroutput[i]<<" ";
            }
        }
        else
        {
            cout << "IMPOSSIBLE";
        }
        cout << "\n";
        testi++;
    }

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef _WIN32
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}