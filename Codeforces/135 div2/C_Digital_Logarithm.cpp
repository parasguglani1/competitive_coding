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
int countDigit(long long n)
{
    return floor(log10(n) + 1);
}
void pgsolve()
{

    /* First, why can you always make the arrays similar? Applying a digital logarithm to any number will eventually make it equal to 1. Thus, you can at least make all numbers into 1s in both arrays.

Then notice the most improtant thing — applying the digital logarithm to a number greater than 1 always makes this number smaller.

Thus, if a number appears in only one of the arrays, you will have to do one of the followings two things:

decrease some greater number to make it equal to this one;
decrease this number.
What if there is no greater number at all? This is the case for the largest number in both arrays altogether. If it appears in only one of the arrays, you must always decrease. If it appears in both, though, why decrease it further? Worst case, you will decrease it in one array, then you'll have to decrease it in the other array as well. This is never more optimal than just matching one occurrence in both arrays to each other and removing them from the arrays.

So, the proposed solution is the following. Consider the largest element in each array. If they are equal, remove both. If not, apply digital logarithm to the larger of them. Continue until the arrays are empty.

What's the estimated complexity of this algorithm? Each number in the first array will be considered at most the number of times you can decrease it with a digital logarithm operation plus one. That is at most 2+1 — a number greater than 9 always becomes a single digit and a single digit always becomes 1. Same goes for the second array. So the complexity is basically linear.

To implement it efficiently, you will have to use some data structure that provides three operations:

peek at the maximum;
remove the maximum;
insert a new element.
The perfect one is a heap — priority_queue in C++.

Overall complexity: O(nlogn) per testcase.

 */
    int n;
    cin >> n;
    priority_queue<int> pq1;

    priority_queue<int> pq2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq1.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq2.push(x);
    }
    int ans = 0;
    int count = 0;
    while (!pq1.empty())
    {
        int x = pq1.top();
        // pq1.pop();
        int y = pq2.top();
        // pq2.pop();
        if (x > y)
        {
            pq1.pop();
            count++;
            int newnum = countDigit(x);
            pq1.push(newnum);
            // pq2.top();
        }
        else if (y > x)
        {
            pq2.pop();
            int newnum = countDigit(y);
            pq2.push(newnum);
            count++;
        }
        else
        {
            pq1.pop();
            pq2.pop();
        }
    }
    cout << count << endl;
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
