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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

void pgsolve()
{
    int n;
    cin >> n;
    // generate prim till root n

    vector<int> prim;
    int sz = min((int)sqrt(n), 100000LL);
    vector<bool> isprime(sz + 1, true);
    isprime[0] = isprime[1] = false;
    unordered_set<int> st;

    for (int i = 2; i <= sz; i++)
    {
        if (isprime[i])
        {
            prim.pb(i);
            st.insert(i * i);
            for (int j = i * i; j <= sz; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    sz = prim.size();

    int val = n - 4;
    int i = 1;
    int j = prim.size() - 1;
    int flag = 0;
    while (i < j)
    {
        if (prim[i] * prim[i] + prim[j] * prim[j] < val)
        {
            i++;
        }
        else if (prim[i] * prim[i] + prim[j] * prim[j] > val)
        {
            j--;
        }
        else
        {
            yes return;
        }
    }

    // for (int i = 0; i < sz; i++)
    // {
    //     for (int j = i + 1; j < sz; j++)
    //     {
    //         int x = prim[i] * prim[i] + prim[j] * prim[j];
    //         float target = n - x;
    //         if (st.find(target) != st.end() && target > 0)
    //         {
    //             int c = sqrt(target);
    //             if (c * c == target )
    //             {
    //                 yes;
    //                 return;
    //             }
    //         }
    //     }
    // }
    no
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
