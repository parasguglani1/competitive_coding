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
    vector<string> v;
    rep(i, 2 * n - 2)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    sort(all(v));
    vector<string> ans;
    rep(i, 2 * n - 2)
    {
        // cout << v[i] << " ";
        if (v[i].length() == n - 1)
        {
            ans.pb(v[i]);
        }
    }
    rep(i, ans.size())
    {
        // cout << ans[i] << " ";
    }

    if (ans[0].substr(1) != ans[1].substr(0, n - 2))
    {
        swap(ans[0], ans[1]);
    }

    string st = ans[0] + ans[1][n - 2];
    string rv = st;
    reverse(rv.begin(), rv.end());
    if (st == rv)
    {
        yes
    }
    else
    {
        no
    }

    // string s1 = ans[0].substr(1, n - 2);
    // string s2 = ans[1].substr(0, n - 2);
    // cout << s1 << " " << s2 << endl;
    // // cout << endl;
    // string s1 = ans[0];
    // string s2 = ans[1];
    // string s3 = "";
    // s3 = s1 + s2[n - 2];
    // // string s4=
    // cout << s3 << endl;
    // // if s3 is palindrome then print yes else print no
    // int flag = 0;
    // rep(i, n)
    // {
    //     if (s3[i] != s3[n - i - 1])
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 0)
    // {
    //     yes
    // }
    // else
    // {
    //     no
    // }

    // sort string vector by string size
    // sort(v.begin(), v.end(), [](const string &a, const string &b)
    //      { return a.size() < b.size(); });
    // rep(i, 2 * n - 2)
    // {
    //     cout << v[i] << " ";
    //     // if (v[i].length() == n - 1)
    //     // {
    //     //     ans.pb(v[i]);
    //     // }
    // }
    // cout << endl;
    // string s1 = v[2 * n - 3];
    // string s2 = v[2 * n - 2];
    // reverse s1
    // reverse(s1.begin(), s1.end());

    // if (v[0] == v[1] && s1 == s2)
    // {
    //     yes
    // }
    // else
    // {
    //     no
    // }
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
