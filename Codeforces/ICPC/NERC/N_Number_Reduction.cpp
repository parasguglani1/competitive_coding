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
    string str;
    cin >> str;
    int n = str.length();
    int k;
    cin >> k;
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[str[i] - '0']++;
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<count[i]<<" ";

    // }

    while (k > 0)
    {
        for (int j = 9; j >= 0; j--)
        {
            int rem = min(k, count[j]);
            k -= rem;
            count[j] -= rem;

            for (int i = 0; i < n && rem; i++)
            {

                if (str[i] == (j + '0'))
                {
                    // cout << "here";
                    str[i] = 'a';
                    rem--;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] != 'a')
        {
            cout << str[i];
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
