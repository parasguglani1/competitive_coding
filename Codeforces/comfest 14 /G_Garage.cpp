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
void pgsolve()
{
    /*
    Let c be the bottom side of the right triangle (the side that is not a or b). From Pythagorean theorem, we know that a2+c2=b2, so c2=b2−a2. We can see that the area of the square at the bottom is c2. So an integer is suitable if and only if it can be expressed as b2−a2 for some positive integers a and b (a<b).

    Consider the case if b=a+1. Then b2−a2=(a+1)2−a2=a2+2a+1−a2=2a+1. Since a must be a positive integer, then all possible results for this case are all odd integers that are greater than or equal to 3.

    Consider the case if b=a+2. Then b2−a2=(a+2)2−a2=a2+4a+4−a2=4a+4. Since a must be a positive integer, then all possible results for this case are all integers that are multiples of 4 that are greater than or equal to 8.

    Let's consider an integer that has a remainder of 2 when divided by 4. We can get that such an integer can never be expressed as b2−a2. This is because of the fact that any square number when divided by 4 must have a remainder of either 0 or 1.

    Using a simple brute force, we can get that 1 and 4 cannot be expressed as b2−a2.

    Using all of the information above, we can see that all suitable numbers are only all odd integers that are greater than or equal to 3 and all integers that are multiples of 4 that are greater than or equal to 8.

    In order to find the N-th smallest suitable number, we can do a binary search on a value d. In each iteration of the binary search, we check whether there are at least N suitable numbers that are less than or equal to d.

    Alternatively, we can use a mathematical formula to find the N-th smallest suitable number in O(1) time complexity.

    Time Complexity: O(logN) or O(1)
     */

    int n;
    cin >> n;
    // n--;
    // if (n <= 1)
    //     cout << "35"[n] << '\n';
    // else
    //     cout << 4 * ((n - 2) / 3) + ((n - 2) % 3) + 7 << '\n';

    if (n == 1)
        cout << 3;
    else
    {
        n--;
        if (n % 3)
            cout << 3 + (n % 3) * 2 + n / 3 * 4;
        else
            cout << 4 + n / 3 * 4;
    }
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



        pgsolve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef __GNUC__
    cerr << "\n Time: " << duration.count() / 1000 << " ms" << endl;
#endif
    return 0;
}
