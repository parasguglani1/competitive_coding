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
    vi arr(n);
    rep(i, n) cin >> arr[i];
    string str;
    cin >> str;
    /*map<int, int> m;
    rep(i, n) m[arr[i]]++;
    map<char, int> m1;
    rep(i, n)
    {
        m1[str[i]]++;
    }

    sort(arr.begin(), arr.end(), [&m](int a, int b)
         {
    if(m[a]!=m[b])
        return m[a]>m[b];
    return a<b; });

    for (int i = 0; i < n; i++)
    {
        int freq= m[arr[i]];

    } */

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    int freq[50];
    for (int i = 0; i < 50; i++)
    {
        freq[i] = -1;
    }
    rep(i, n)
    {
        int curr = freq[arr[i] - 1];
        if (curr == -1)
        {
            freq[arr[i] - 1] = str[i] - 'a';
        }
        else
        {
            if (curr != str[i] - 'a')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES\n";
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
