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

/*
S is a binary string and has only 0s and 1s
The special constrain around removal of \left\lfloor \frac{N}{2} \right\rfloor⌊2 N
​
⌋ simplifies this problem.
We just need to count the number of 0s and 1s in the original string

If Count(1) \gt Count(0)Count(1)>Count(0) - we can remove all the zeros and print a string containing only 1s
If Count(0) \geq Count(1)Count(0)≥Count(1) - we can remove all the ones and print a string containing only 0s
 */
void pgsolve()
{
    int n;
    cin >> n;
    string str;
    bool isOne = false;
    cin >> str;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            isOne = true;
            count1++;
        }
    }
    int count0 = n - count1;
    if (count1 >= count0)
    {
        for (int i = 0; i < count1; i++)
        {
            cout << 1;
        }
    }
    else
    {
        for (int i = 0; i < n - count1; i++)
        {
            cout << 0;
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
