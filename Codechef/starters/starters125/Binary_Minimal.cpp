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
// flip 1's delete trailing 1s if k is still left  delete 0's
void pgsolve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    if (k == 0)
    {
        cout << str << endl;
        return;
    }
    int cnt1 = 0;
    for (auto x : str)
    {
        if (x == '1')
        {
            cnt1++;
        }
    }
    string ans = "";
    if (k >= cnt1)
    {
        for (int i = 0; i < n - k; i++)
        {
            ans += '0';
        }
        cout << ans << endl;
        return;
    }
    // cout << k << endl;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1' && k > 0)
        {
            // cout << "here" << endl;
            str[i] = '0';
            k--;
        }
    }
    // cout << "here" << k << endl;

    // delete all consecutive ones or none
    // int con1cnt = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] == '1' && k > 0)
    //     {
    //         con1cnt++;
    //         str[i] = 'x';
    //     }
    //     else
    //     {
    //         if (con1cnt > k)
    //         {
    //             for (int j = i - con1cnt; j < i; j++)
    //             {
    //                 // cout << j << endl;
    //                 if (k > 0)
    //                 {
    //                     str[j] = '0';
    //                     k--;
    //                 }
    //                 else
    //                 {
    //                     str[j] = '1';
    //                 }
    //             }
    //         }
    //         else
    //         {
    //             k -= con1cnt;
    //         }
    //         con1cnt = 0;
    //     }
    // }
    // if (con1cnt < k)
    // {
    //     k -= con1cnt;
    // }
    // else
    // {
    //     // cout<<"here"<<endl;
    //     for (int j = n - 1 - con1cnt; j < n - 1; j++)
    //     {
    //         // cout << "here" << endl;

    //         if (k > 0)
    //         {
    //             str[j] = '0';
    //             k--;
    //         }
    //         else
    //         {
    //             str[j] = '1';
    //         }
    //     }
    // }

    // bool del = false;
    // int trailing1 = 0;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (del == false && str[i] == '1')
    //     {
    //         str[i] = 'y';
    //     }
    //     if (str[i] == '0')
    //     {
    //         del = true;
    //     }
    // }
    // // cout << str << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] == '1' && k > 0)
    //     {
    //         k--;
    //         str[i] = '0';
    //     }
    // }
    // // cout << str << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] == 'y')
    //     {
    //         if (k > 0)
    //         {
    //             str[i] = 'x';
    //             k--;
    //         }
    //         else
    //         {
    //             str[i] = '1';
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] != 'x')
    //     {
    //         ans += str[i];
    //     }
    // }
    cout << str << endl;
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
