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
    vi v;
    rep(i, n)
    {
        int ele;
        cin >> ele;
        v.pb(ele);
    }
    sort(all(v));
    int mxdif = 0;
    rep(i, n)
    {
        int tmp = ceil((1.0 * (i + 1 - v[i])) / (1.0 * v[i]));
        mxdif = max(mxdif, tmp);
    }

    cout << mxdif + 1 << endl;

    /*     From the hint it is clear that we should form positive arrays which have elements in an ascending order. If there are KK elements in an existing positive array then the next element should be \geq K + 1≥K+1.

    We can greedily assign each element of AA (in the ascending order) to some already existing positive array if it can accommodate the current element (if A[i] \geqA[i]≥ number of elements in the positive array + 1+1) or in the other case we need to create another positive array.

    We can maintain the information about all the existing positive arrays by storing the minimum required element for each of them.

    If the current element (A[i])(A[i]) can be part of any of the existing positive arrays i.e. it is \geq≥ the least among all the minimum required elements for the positive arrays then we can just update the minimum required element and there is no need to create another positive array. The least among all the minimum required elements can be easily obtained if we store all the minimum required elements in a priority queue and updating also becomes easy.

    On the other hand, if the current element (A[i])(A[i]) cannot become a part of any of the existing positive arrays then we create a new positive array with the current element (A[i])(A[i]) being the first element in it i.e. add a new value (minimum requirement of 2) into the priority queue.

    At the end of the iteration over AA the size of the priority queue denotes the minimum number of positive arrays required i.e. our answer.

     */
    /*
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(1);
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= pq.top())
            {
                pq.push(pq.top() + 1);
                pq.pop();
            }
            else
            {
                pq.push(2);
            }
        }
        cout << pq.size() << endl; */

    /*
    method 3
    Since all elements are >= 1 and <= n. Store their frequencies. (Say Fre[i] stores the frequency of element i).
    Iterate from i = 1 to n. Since for an array to be good, we need A[i] >= i, which means to put element i in a good array, that array should have at least size i (after you put this element in it). Now I’ll explain the code.

    sum += Fre[i];  // sum = total number of elements <= i that we have
    ans = max(ans, (sum + i - 1) / i);
    // The second part "(sum + i - 1) / i" is basically ceiling devision of sum with i.
    // This division value says how many at least i-sized good arrays we need with
    // i at its end.


        vector<int> a(n + 1);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        int sum = 0, ans = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += a[i];
            ans = max(ans, (sum + i - 1) / i);
        }
        cout << ans << '\n'; */
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
