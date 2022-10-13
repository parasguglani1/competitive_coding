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
void pgsolve()
{
    string s1, s2;
    cin >> s1 >> s2;
    sortall(s1);
    sortall(s2);
    int n1 = sz(s1);
    int n2 = sz(s2);
    int x1 = 0, x2 = 0;
    if (s1 == s2)
    {
        cout << "=" << endl;
        return;
    }
    else
    {
        if (s1[0] == 'S')
        {
            if (s2[0] == 'S')
            {
                if (n1 > n2)
                {
                    cout << "<" << endl;
                    return;
                }
                else
                {
                    cout << ">" << endl;
                    return;
                }
            }
            else
            {
                cout << "<" << endl;
                return;
            }
        }
        else if (s1[0] == 'M')
        {
            if (s2[0] == 'S')
            {
                cout << ">" << endl;
                return;
            }
            else
            {
                cout << "<" << endl;
                return;
            }
        }
        else
        {
            if (s1[0] == 'L')
            {
                if (s2[0] == 'L')
                {
                    if (n1 > n2)
                    {
                        cout << ">" << endl;
                        return;
                    }
                    else
                    {
                        cout << "<" << endl;
                        return;
                    }
                }
                else
                {
                    cout << ">" << endl;
                    return;
                }
            }
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
