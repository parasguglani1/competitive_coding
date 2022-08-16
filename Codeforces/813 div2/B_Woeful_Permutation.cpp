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
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<2<<" "<<1<<endl;
        return;

    }
    if (!(n % 2))
        for (int i = 1; i <= n ; i += 2)
        {

            cout << i + 1 << " " << i << " ";
        }
    else
    {
        cout << 1 << " ";

        for (int i = 2; i <= n ; i += 2)
        {

            cout << i + 1 << " " << i << " ";
        }
    }
    cout << endl;

    /* editorial
A well know fact is that gcd(a,b)⋅lcm(a,b)=a⋅b for any two positive integers a and b. Since gcd(x,x+1)=1 for all positive x, we get that lcm(x,x+1)=x⋅(x+1).

All of this should hint that for even n, the optimal permutation looks like this: 2,1,4,3,…,n,n−1. Add for odd n, it looks like this: 1,3,2,5,4,…,n,n−1.

Complexity: O(n)
Turns out the formal proof is pretty hard. You are welcome to try and find something simpler.

Define f(x,y) as x⋅y if x≠y, and x otherwise. It is easy to see that lcm(x,y)≤f(x,y). We will find the maximum possible value of f(1,p1)+…f(n,pn) and show that it is reached by our construction.

Suppose we want to solve this problem: find the max possible value of 1⋅p1+…+n⋅pn, if for all i>1, pi≠i. This is equivalent to maximizing f(1,p1)+…f(n,pn), because if there is such an index i, it is always optimal to swap pi with pj for any 1≤j<i.

Let's build a graph on this permutation with n vertices and add all edges i→pi. Except for maybe p1=1, all the other cycles have a length of at least 2.

Let's look at one such cycle x1,x2,…,xk. The optimal value with no restrictions on the value of pi would be x21+x22+…+x2k, but right now we have x1⋅x2+x2⋅x3+…+xk⋅x1. Subtracting one from the other:

x21+x22+…+x2k−(x1⋅x2+x2⋅x3+…+xk⋅x1)=
=x212−x1⋅x2+x222+x222−x2⋅x3+x232+…+x2k2−xk⋅x1+x212=
=(x1−x2)2+(x2−x3)2+…+(xk−x1)22≥
≥|x1−x2|+|x2−x3|…+|xk−x1|2≥
≥max(x1…xk)−min(x1…xk)
So we need to minimize the sum of max(x1…xk)−min(x1…xk) over all cycles.

If n is even, it is easy to see the minimum possible value of this is n2, and it doesn't matter what p1 equals to.

For odd n we have to look at two cases: p1=1 and p1≠1. In the first case, the minimum possible sum is n−12, in the second case, it is n+12, which is worse that in the previous case.

Returning to the original problem, our constructions also achieve this minimal difference from 12+22+…n even when we change f back into lcm, so they are optimal.

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
