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
    vi odd, even;
    rep(i, n) cin >> a[i];
    if (n < 3)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    sort(all(a));

    // rep(i, n)
    // {
    //     cout<<a[i]<<" ";

    // }
    // cout << endl;
    /*     for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                odd.pb(a[i]);
            }
            else
            {
                even.pb(a[i]);
            }
        }

        bool check1, check2;
        check1 = check2 = true;
        int nn = odd.size();
        for (int i = 0; i < nn - 2; i++)
        {

            if (odd[i] == odd[i + 1] && odd[i] == odd[i + 2])
            {
                check1 = false;
            }
        }
        for (int i = 0; i < even.size() - 2; i++)
        {

            if (even[i] == even[i + 1] && even[i] == even[i + 2])
            {
                check2 = false;
            }
        }
        if (check1)
        {
            rep(i, odd.size())
            {
                cout << odd[i] << " ";
            }
            rep(i, even.size())
            {
                cout << even[i] << " ";
            }
            cout << endl;
        }
        else if (check2)
        {
            rep(i, n)
            {
                cout << even[i] << " ";
            }
            rep(i, n)
            {
                cout << odd[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        } */
    vi b;
    int i = 0, j = n - 1;
    int count=0;
    while (count<n)
    {
        b.pb(a[j]);
        b.pb(a[i]);
        i++;
        j--;
        count+=2;
    }
    if (n % 2)
    {
        b.pop_back();
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (b[i] == b[i + 1] && b[i] == b[i + 2])
        {
            cout << -1 << endl;
            return;
        }
    }
    rep(i, n)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    //TODO
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
