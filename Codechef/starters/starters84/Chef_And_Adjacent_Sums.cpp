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
void pgsolve()
{
    int n;
    cin >> n;
    vi a(n);
    set<int> st;
    rep(i, n)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    sort(all(a));
    int z = a[n - 1] + a[n - 2];
    //     vi b = a;
    // // rotate b by 1 right
    //     int temp = b[n - 1];
    //     REPR(i, n - 2, -1)
    //     {
    //         b[i + 1] = b[i];
    //     }
    //     b[0] = temp;

    // if (n == 2 || st.size() == 1)
    // {
    //     no return;
    // }
    // if (st.size() == 2 && a[n - 1] != a[n - 2])
    // {
    //     no return;
    // }

    // else
    // {
    //     yes
    // }
    vi b(n);
    int i = 0, j = n - 1;
    int k = 0;
    while (i < j)
    {
        b[k++] = a[j--];
        b[k++] = a[i++];
    }

    if (i == j)
    {
        b[k++] = a[i];
    }
    rep(i, n)
    {
        // cout << b[i] << " ";
    }

    rep(i, n - 1)
    {
        if (b[i] + b[i + 1] == z)
        {
            no return;
        }
    }
    yes;
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
