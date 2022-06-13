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
    int a, b;
    cin >> a >> b;
    int diff = abs(a - b);
  
        int count = 0;
        for (int i = 1; i <= sqrt(diff); i++)
        {
            if (diff % i == 0)
            {
                if (diff / i == i)
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
            }
        }
        cout << count << endl;
    }

// storing all unique values in set. complexity (abs(a-b)*logb) tle
/*   unordered_set<int> st;
  int end = max(a, b);
  int start = min(a, b);

  for (int i = start; i < end; i++)
  {
    //   cout << __gcd(a + i, b + i) << " ";
      st.insert(__gcd(a + i, b + i));
  }
  unordered_set<int>::iterator it;

  // count = (st.end() - st.begin() - st.begin());
  for (it = st.begin(); it != st.end(); it++)
  {
      // cout << *it << endl;
      count++;
  } */
//   cout << "count for " << a << " and " << b << " is " << count << endl;
//  cout << count << endl;
//  }

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