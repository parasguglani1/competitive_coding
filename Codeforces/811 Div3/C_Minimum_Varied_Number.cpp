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
/* Let's use the greedy solution: we will go through the digits in decreasing order. If the sum of s we need to dial is greater than the current digit, we add the current digit to the end of the line with the answer.

Note that in this way we will always get an answer consisting of the minimum possible number of digits, because we are going through the digits in descending order.

Suppose that the resulting number is not optimal. Then some digit can be reduced, and some digit that comes after it can be increased, in order to save the sum (we can not increase the digit before it, as then we get a number greater than the current one). Two variants are possible.

We want to increase the digit x to x+1, but then it becomes equal to the digit following it, or exceeds the value 9. Then we can't increment that digit.
Otherwise, in the first step, we can get x+1 instead of x, but since we are going through the digits in decreasing order, we cannot get the value of x in that case. Contradiction.
 */

    string str;
    cin >> str;
    int n = str.size();
    if (n == 1)
    {
        cout << str << endl;
        return;
    }
    int num = stoi(str);
    string s;
    int dig = 9;
    while (num)
    {
        while (num < dig)
        {
            dig--;
        }
        s += char('0' + dig);
        num -= dig;
        dig--;
    }
    reverse(all(s));
    cout << s << endl;
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
