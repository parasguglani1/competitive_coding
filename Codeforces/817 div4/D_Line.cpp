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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int value = 0;
    rep(i, n)
    {
        if (str[i] == 'L')
        {
            int fromlast = n - i - 1;
            value += fromlast;
        }
        else if (str[i] == 'R')
        {
            value += i;
        }
    }
    // cout << value << endl;
    vi dis;
    int res = 0;
    int mid = n / 2;

    if (n % 2)
    {
        res = n / 2;
    }
    rep(i, n)
    {
        int rem = mid + n % 2;
        if (i + 1 <= mid)
        {
            if (str[i] == 'L')
            {
                dis.pb(n - 2 * i - 1);
                res += i;
            }
            else
            {
                int fromlast = n - i - 1;
                res += fromlast;
            }
        }
        else if ((i + 1) != (rem))
        {

            if (str[i] == 'R')
            {
                dis.pb(i + i - n + 1);
                int fromlast = n - i - 1;
                res += fromlast;
            }
            else
            {
                res += i;
            }
        }
    }
    sort(all(dis), greater<int>());
    rep(i, n)
    {
        int size = sz(dis);
        if (i < size)
        {
            res += dis[i];
        }
        cout << res << " ";
    }

    cout << endl;

    /*
    For each person, let's calculate how much the value will change if they turn around. For example, in the line LRRLL, if the i-th person turns around, then the value of the line will change by +4, −2, 0, −2, −4, respectively. (For instance, if the second person turns around, they see 3 people before and 1 person after, so the value of the line changes by −2 if they turn around.)

Now note that if a person turns around, it doesn't affect anyone else's value. So the solution is a greedy one: let's sort the array of values in increasing order. Afterwards, we should go from the left to the right, and see if the value will increase if this person turns around; if it does, we should add it to the current total and continue.

The time complexity of this solution is O(nlogn) per testcase.

long long tot = 0;
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            v.push_back((n - 1 - i) - i);
            tot += i;
        }
        else {
            v.push_back(i - (n - 1 - i));
            tot += n - 1 - i;
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {tot += v[i];}
        cout << tot << ' ';
    }
    cout << '\n';



     */
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
