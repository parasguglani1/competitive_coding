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
    /*
First, we can always get a product value equal to 1 if we remove all elements of the array.Then we need to know what maximal positive value of the product we can get.Consequently, the remaining array(after removing the corresponding prefix and suffix) should have no 0 elements.We can find maxima in all sections between zeros.Now we are left with a set of nonzero numbers.If the value of the product on the current segment is positive, it makes no sense to remove any more elements.Otherwise, the product is negative, then we must remove one negative number from the product(either to the left or to the right).Compare the values of the product on the prefix and suffix to the nearest negative value, and remove either the suffix or the prefix, respectively.
     */

    int n;
    cin >> n;
    vector<int> a(n);

    rep(i, n)
    {
        cin >> a[i];
    }
    int ans = 0;
    int ap = n, as = 0;
    for (int i = 0, l = -1; i <= n; i++)
    {
        if (i == n || a[i] == 0)
        {
            int cnt = 0;
            bool neg = false;
            int left = -1, right = -1;
            int cl = 0, cr = 0;
            for (int j = l + 1; j < i; j++)
            {
                neg ^= a[j] < 0; //checking number of negative numbers
                if (a[j] < 0)
                {
                    right = j;
                    cr = 0;
                }

                if (abs(a[j]) == 2)
                {
                    cnt++, cr++;
                    if (left == -1)
                        cl++;
                }

                if (a[j] < 0 && left == -1)
                {
                    left = j;
                }
            }
            if (neg)
            {
                // .Compare the values of the product on the prefix and suffix to the nearest negative value, and remove either the suffix or the prefix, respectively.
                if (cnt - cl > cnt - cr)
                {
                    right = i;
                    cnt -= cl;
                }
                else
                {
                    left = l;
                    cnt -= cr;
                }
            }
            else
            {
                left = l, right = i;
            }
            if (ans < cnt)
            {
                ans = cnt;
                ap = left = left + 1, as = n - right;
            }

            l = i;
        }
    }
    cout << ap << ' ' << as << endl;
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
