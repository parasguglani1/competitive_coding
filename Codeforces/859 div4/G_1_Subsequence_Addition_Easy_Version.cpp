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
// // maximum size of x
// const int MAX = 5500;

// // to check whether x is possible or not
// int ispossible[MAX];

// void check(vector<int> arr, int N)
// {
//     ispossible[0] = 1;
//     sort(arr.begin(), arr.end());

//     for (int i = 0; i < N; ++i)
//     {
//         int val = arr[i];

//         // if it is already possible
//         if (ispossible[val])
//             continue;

//         // make 1 to all it's next elements
//         for (int j = 0; j + val < MAX; ++j)
//         {
//             if (ispossible[j])
//             {
//                 ispossible[j + val] = 1;
//             }
//         }
//     }
// }
void pgsolve()
{
    // memset(ispossible, 0, sizeof(ispossible));
    // rep(i, 10)
    // {
    //     cout << ispossible[i] << " ";
    // }
    int n;
    cin >> n;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // check(a, n);
    // rep(i, 10)
    // {
    //     cout << ispossible[i] << " ";
    // }
    int sum = 0;
    sum = 1;
    if (a[0] != 1)
    {
        no return;
    }
    REP(i, 1, n)
    {
        if (a[i] > sum)
        {
            no return;
        }
        else
        {
            sum += a[i];
        }
    }
    yes
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
